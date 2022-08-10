#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[100001];
int visited[100001];
int ans[100001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, R;
	cin >> N >> M >> R;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1; i<=N; i++) {
		sort(v[i].begin(), v[i].end());
		visited[i] = -1;
	}
	
	queue<int> q;
	q.push(R);
	visited[R] = 0;
	int cnt = 1;
	
	while(!q.empty()) {
		int node = q.front();
		q.pop();
		ans[node] = cnt++;
		
		for(int i=0; i<v[node].size(); i++) {
			int nextNode = v[node][i];
			
			if(visited[nextNode]==-1) {
				visited[nextNode] = visited[node]+1;
				q.push(nextNode);	
			}
		}
	}
	
	int answer = 0;
	for(int i=1; i<=N; i++) {
		answer+=visited[i]*ans[i];
	}
	cout << answer;
	
	return 0;
}


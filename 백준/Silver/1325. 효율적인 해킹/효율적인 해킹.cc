#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int m = 0;
int ans[10001];
vector<int> v[10001];
int N, M;

void bfs(int cur) {
	vector<int> visited(N+1, 0);
	queue<int> q;
	
	int cnt = 0;
	visited[cur] = 1;
	q.push(cur);
	
	while(!q.empty()) {
		int c = q.front();
		q.pop();
		cnt++;
		
		for(int i=0; i<v[c].size(); i++) {
			if(visited[v[c][i]]==0) {
				visited[v[c][i]] = 1;
				q.push(v[c][i]);
			}
		}
	}
	
	ans[cur] = cnt;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		v[b].push_back(a);
	}
	
	for(int i=1; i<=N; i++) {
		bfs(i);
		m = max(m, ans[i]);
	}
	
	for(int i=1; i<=N; i++) {
		if(ans[i] == m) cout << i << " ";
	}
	
	
    return 0;
}
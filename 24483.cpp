#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int visited[100001], cnt[100001];
vector<int> v[100001];
int t=1;

void dfs(int node) {
	cnt[node]=t++;
	
	for(int i=0; i<v[node].size(); i++) {
		int nextNode = v[node][i];
		
		if(visited[nextNode]==-1) {
			visited[nextNode] = visited[node]+1;
			dfs(nextNode);
		}
	}	
}

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
		visited[i] = -1;
		sort(v[i].begin(), v[i].end());
	}
	
	visited[R]=0;
	dfs(R);
	
	long long int ans=0;
	for(int i=1; i<=N; i++) {
		ans+=visited[i]*cnt[i];
	}
	cout << ans;
	
	return 0;
}

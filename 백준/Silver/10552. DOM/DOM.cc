#include <iostream>
#include <vector>
using namespace std;

int v[100001];
int visited[100001];
int cnt=0;

int dfs(int n) {
	if(v[n]==0) return cnt;
	
	if(visited[v[n]]==0) {
		cnt++;
		visited[v[n]]=1;
		return dfs(v[n]);
	}
	else {
		return -1;
	}
}

int main(void) {
	int N, M, P;
	cin >> N >> M >> P;	
	
	for(int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		if(v[b]==0) v[b] = a;
	}
	
	visited[P] = 1;
	cout << dfs(P);
	
	return 0;
}
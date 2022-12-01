#include <iostream>
#include <cstring>
#define INF 987654321
using namespace std;

int N, visit;
int board[16][16];
int cost[16][1<<16];

int dfs(int node, int visited) {
	if(visited == visit) {
		if(board[node][0]==0) return INF;
		return board[node][0];
	}
	
	if(cost[node][visited] != -1) return cost[node][visited];
	cost[node][visited] = INF;
	
	for(int i=0; i<N; i++) {
		if(board[node][i]==0) continue;
		if(visited & (1<<i)) continue;
		
		cost[node][visited] = min(cost[node][visited], board[node][i] + dfs(i, visited | (1<<i)));
	}
	
	return cost[node][visited];
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> board[i][j];
		}
	}
	
	memset(cost, -1, sizeof(cost));
	visit = (1<<N)-1;
	
	cout << dfs(0, 1);
	
	
	return 0;
}

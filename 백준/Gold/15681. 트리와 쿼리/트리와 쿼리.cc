#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> edge[100002];
int visited[100002];
int dp[100002];

int dfs(int node) {
	visited[node] = 1;

	if (dp[node]) {
		return node;
	}

	if (edge[node].size() == 0)
		return dp[node] = 1;

	int sum = 1;
	for (int i = 0; i < edge[node].size(); i++) {
		if(visited[edge[node][i]]==0) sum += dfs(edge[node][i]);
	}

	return dp[node] = sum;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, R, Q;
	cin >> N >> R >> Q;

	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;

		edge[a].push_back(b);
		edge[b].push_back(a);
	}

	dp[R] = dfs(R);

	for (int i = 0; i < Q; i++) {
		int a;
		cin >> a;
		cout << dp[a] << "\n";
	}
	 
	return 0;
}
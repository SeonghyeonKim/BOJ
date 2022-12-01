#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

int dp[101][100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, bag=0, cost=0;
	cin >> N >> M;
	
	vector<pii> v(N+1);
	for(int i=1; i<=N; i++) cin >> v[i].first;
	for(int i=1; i<=N; i++) {
		cin >> v[i].second;
		cost+=v[i].second;
	}
	
	
	for(int i=1; i<=N; i++) {
		for(int j=0; j<=cost; j++) {
			dp[i][j] = max(dp[i][j], dp[i-1][j]);
			dp[i][j+v[i].second] = max(dp[i][j+v[i].second], dp[i-1][j]+v[i].first);
		}
	}
	
	for(int i=0; i<=cost; i++) {
		for(int j=1; j<=N; j++) {
			if(dp[j][i] >= M) {
				cout << i;
				return 0;
			}
		}
	}
	
	return 0;
}

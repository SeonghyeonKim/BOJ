#include <iostream>
using namespace std;

int dist[401][401];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int V, E;
	cin >> V >> E;

	for(int i=1; i<=V; i++) {
		for(int j=1; j<=V; j++) {
			dist[i][j] = 987654321;
		}
	}
	
	for(int i=0; i<E; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		dist[a][b] = c;
	}
	
	for(int k=1; k<=V; k++) {
		for(int i=1; i<=V; i++) {
			for(int j=1; j<=V; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
			}
		}
	}
	
	int ans = 987654321;
	for(int i=1; i<=V; i++) {
		for(int j=1; j<=V; j++) {
			if(i==j) continue;
			ans = min(ans, dist[i][j]+dist[j][i]);
		}
	}
	if(ans==987654321) cout << -1;
	else cout << ans;
	return 0;
}


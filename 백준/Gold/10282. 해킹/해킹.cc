#include <iostream>
#include <vector>
#include <queue>
#define pii pair<int, int>
using namespace std;

struct comp {
	bool operator() (pii a, pii b) {
		return a.second > b.second;
	}
};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int n, d, c;
		cin >> n >> d >> c;
		
		vector<pii> edge[10001];
		for(int i=0; i<d; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			edge[b].push_back({a, c});
		}

		vector<int> visited(n+1, 0), time(n+1, 987654321);		
		priority_queue<pii, vector<pii>, comp> q;
		int cnt = 1, ans = 1;
		visited[c]=1;
		time[c] = 1;
		q.push({c, 1});
	
		while(!q.empty()) {
			pii cur = q.top();
			q.pop();
			
			if(visited[cur.first]==0) {
				cnt++;
				visited[cur.first]=1;
				ans = max(ans, cur.second);	
			}		
			
			for(int i=0; i<edge[cur.first].size(); i++) {
				int nx = edge[cur.first][i].first;
				
				if(time[nx] > cur.second + edge[cur.first][i].second) {
					time[nx] = cur.second + edge[cur.first][i].second;
					q.push({nx, cur.second + edge[cur.first][i].second});
				}
			}
		}
		
		cout << cnt << " " << ans-1 << "\n";		
	}
	
    return 0;
}
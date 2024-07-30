#include <iostream>
#include <vector>
#include <queue>
#define pii pair<int, int>
using namespace std;

vector<pii> edge[10001];
int visited[10001];

struct comp {
	bool operator() (pii a, pii b) {
		return a.second > b.second;
	}
};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, D;
	cin >> N >> D;
	
	for(int i=0; i<N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(b-a <= c) continue;
		edge[a].push_back({b, c});
	}
	
	priority_queue<pii, vector<pii>, comp> pq;
	pq.push({0,0});
	while(!pq.empty()) {
		int cx = pq.top().first;
		int ct = pq.top().second;
		pq.pop();
	
		if(cx > D) continue;
			
		if(cx==D) {
			cout << ct;
			return 0;
		}
		visited[cx] = 1;
		
		for(int i=cx; i<D; i++) {
			for(int j=0; j<edge[i].size(); j++) {
				int nx = edge[i][j].first;
			
				if(visited[nx]==0) {
					pq.push({nx, ct + i-cx + edge[i][j].second});
				}
			}
		}
		pq.push({D, ct + D-cx});
	}
		
    return 0;
}
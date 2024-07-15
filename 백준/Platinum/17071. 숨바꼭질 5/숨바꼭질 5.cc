#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

int visited[500001][2];
int time[500001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	
	if(N==K) {
		cout << 0;
		return 0;
	}
	
	int idx=1;
	for(int i=K+1; i<= 500000; i+=idx) {
		time[i] = idx;
		idx++;
	}
	
	queue<pii> q;
	visited[N][1] = N+1;
	q.push({N, 0});
	
	int ans = 987654321;
	while(!q.empty()) {
		pii cur = q.front();
		q.pop();
		
		if(time[cur.first] && time[cur.first] >= cur.second && time[cur.first]%2==cur.second%2) {
			ans = min(ans, time[cur.first]);
		}
		
		if(cur.first>0) {
			if(visited[cur.first-1][cur.second%2]==0) {
				visited[cur.first-1][cur.second%2] = cur.first+1;
				q.push({cur.first-1, cur.second+1});
			}
		}
		
		if(cur.first<500000) {
			if(visited[cur.first+1][cur.second%2]==0) {
				visited[cur.first+1][cur.second%2] = cur.first+1;
				q.push({cur.first+1, cur.second+1});
			}
		}
		
		if(cur.first*2 <= 500000) {
			if(visited[cur.first*2][cur.second%2]==0) {
				visited[cur.first*2][cur.second%2] = cur.first+1;
				q.push({cur.first*2, cur.second+1});
			}
		}
	}
	if(ans==987654321) cout << -1;
	else cout << ans;

	return 0;
}
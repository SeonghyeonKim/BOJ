#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

int visited[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	
	queue<pii> q;
	visited[N] = N+1;
	q.push({N, 0});
	while(!q.empty()) {
		pii cur = q.front();
		q.pop();
		
		if(cur.first==K) {
			cout << cur.second << "\n";
			
			int tmp = cur.first;
			vector<int> v;
			while(1) {
				v.push_back(tmp);
				if(visited[tmp]==tmp+1) break;
				tmp = visited[tmp]-1;
			}
			
			for(int i=v.size()-1; i>=0; i--) {
				cout << v[i] << " ";
			}
		}
		
		if(cur.first>0) {
			if(visited[cur.first-1]==0) {
				visited[cur.first-1] = cur.first+1;
				q.push({cur.first-1, cur.second+1});
			}
		}
		
		if(cur.first<100000) {
			if(visited[cur.first+1]==0) {
				visited[cur.first+1] = cur.first+1;
				q.push({cur.first+1, cur.second+1});
			}
		}
		
		if(cur.first*2 <= 100000) {
			if(visited[cur.first*2]==0) {
				visited[cur.first*2] = cur.first+1;
				q.push({cur.first*2, cur.second+1});
			}
		}
	}

	return 0;
}
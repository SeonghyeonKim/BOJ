#include <iostream>
#include <queue> 
#include <vector>
#define pii pair<int, int>
using namespace std;

int board[101][101];
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

int main() {
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int N, K;
	cin >> N >> K;
	
	for(int i=0; i<K; i++) {
		int a, b;
		cin >> a >> b;
		
		board[a][b] = 2;
	}
	
	int L;
	cin >> L;
	
	vector<pair<int, char>> v;
	for(int i=0; i<L; i++) {
		int a;
		char b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	v.push_back({-1, 'X'});
	
	
	deque<pii> q;
	q.push_back({1,1});
	board[1][1] = 1;
	int T = 0, idx=0, dir=0;
	while(1) {
		T++;
		pii head = q.front();
		int nx = head.first + dx[dir];
		int ny = head.second + dy[dir];
		
		// 벽에 닿기 
		if(!(nx>0 && nx<=N && ny>0 && ny<=N)) {
			cout << T;
			break;
		}
		// 몸에 닿기 
		if(board[nx][ny]==1) {
			cout << T;
			break;
		}
		
		// 사과 안 먹기 
		if(board[nx][ny]!=2) {
			pii tail = q.back();
			board[tail.first][tail.second] = 0;
			q.pop_back();
		}
		
		// 추가
		board[nx][ny] = 1;
		q.push_front({nx, ny}); 
		
		// 방향 전환 
		if(v[idx].first == T) {
			if(v[idx].second == 'L') {
				dir = (dir + 1)%4;
			}
			else {
				dir = (dir + 3)%4;
			}
			idx++;
		}
	}
	
	return 0;
}
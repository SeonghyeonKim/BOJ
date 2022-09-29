#include <iostream>
#include <queue>
#include <string>
#include <set>
#define psi pair<string, int>
using namespace std;

set<string> s;
char board[3][3];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main(void) {
	string tmp;
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cin >> board[i][j];
			tmp.push_back(board[i][j]);
		}
	}
	
	if(tmp=="123456780") {
		cout << 0;
		return 0;
	}
	
	queue<psi> q;
	s.insert(tmp);
	q.push({tmp, 0});
	
	while(!q.empty()) {
		string c = q.front().first;
		int cnt = q.front().second;
		q.pop();
		
		int t = c.find('0');
		int x = t/3;
		int y = t%3;
		for(int i=0; i<4; i++) {
			string temp = c;
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(nx>=0 && nx<3 && ny>=0 && ny<3) {
				swap(temp[x*3+y], temp[nx*3+ny]);
				
				if(temp == "123456780") {
					cout << cnt+1;
					return 0;
				}
				
				if(s.find(temp)==s.end()) {
					s.insert(temp);
					q.push({temp, cnt+1});
				}
			}
		}
	}
	cout << -1;
		
	return 0;
}
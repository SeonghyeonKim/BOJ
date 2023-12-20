#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

char v[211][561];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int N, M;
	cin >> N >> M;
	
	for(int i=0; i<3*N; i++) {
		for(int j=0; j<8*M; j++) {
			cin >> v[i][j];
		}
	}
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			int x = 3*i+1;
			int y = 8*j+1;
			
			if(v[x][y+5]=='.') {
				if(v[x][y]+v[x][y+2]-'0' == v[x][y+4]) {
					v[x][y-1] = '*';
					v[x][y+5] = '*';
					for(int a=0; a<5; a++) {
						v[x-1][y+a] = '*';
						v[x+1][y+a] = '*';
					}
				}
				else {
					v[x-1][y+2] = '/';
					v[x][y+1] = '/';
					v[x+1][y] = '/';
				}
			}
			else {
				if(v[x][y]+v[x][y+2]-'0' == (v[x][y+4]-'0')*10 + v[x][y+5]) {
					v[x][y-1] = '*';
					v[x][y+6] = '*';
					for(int a=0; a<6; a++) {
						v[x-1][y+a] = '*';
						v[x+1][y+a] = '*';
					}
				}
				else {
					v[x-1][y+2] = '/';
					v[x][y+1] = '/';
					v[x+1][y] = '/';
				}
			}
		}
	}
	
	
	for(int i=0; i<3*N; i++) {
		for(int j=0; j<8*M; j++) {
			cout << v[i][j];
		}
		cout << "\n";
	}
    
    return 0;
}
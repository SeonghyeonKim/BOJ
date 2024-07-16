#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	while(T--) {
		int M, N, x, y, state=1;
		cin >> M >> N >> x >> y;
		for(int i=0; x+M*i<=M*N; i++) {
			if((x+M*i-1)%N+1==y) {
				cout << x+M*i << "\n";
				state=0;
				break;
			}
		}
		if(state) cout << "-1\n";
	}
	
	return 0;
} 
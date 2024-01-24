#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int N, M, ans=0;
		cin >> N >> M;
		
		for(int i=0; i<N; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			
			if(M <= 1.0*a*b/c) ans++;
		}
		cout << ans << "\n";
	}
	
	return 0;
}

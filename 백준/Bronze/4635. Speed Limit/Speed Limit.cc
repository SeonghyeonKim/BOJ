#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int N;
		cin >> N;
		
		if(N==-1) break;
		
		int ans=0, cnt=0;
		for(int i=0; i<N; i++) {
			int a, b;
			cin >> a >> b;
			
			ans += a*(b-cnt);
			cnt = b;
		}
		
		cout << ans << " miles\n";
	}
	
	return 0;
}

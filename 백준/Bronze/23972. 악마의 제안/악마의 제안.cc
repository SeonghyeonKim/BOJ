#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	long long K, N;
	cin >> K >> N;
	
	if(N==1) cout << -1;
	else {
		long long ans = (N*K) / (N-1);
		if((N*K) % (N-1) == 0) cout << ans;
		else cout << ans+1;
	}
	
	return 0;
}

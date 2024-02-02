#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		double a;
		cin >> a;
		
		if(a==0) break;
		
		double tmp = 0;
		int ans = 1;
		while(tmp < a) {
			tmp += 1.0/(ans+1);
			ans++;
		}
		
		cout << ans-1 << " card(s)\n";
	}

	return 0;
}


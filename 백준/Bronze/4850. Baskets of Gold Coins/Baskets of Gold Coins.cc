#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long n, w, d, s;
	while(cin >> n >> w >> d >> s) {
		long long num = n * (n-1) / 2;
		if(w*num - s == 0) cout << n << "\n";
		else cout << (w*num - s)/d << "\n";		
	}
	
	return 0;
}

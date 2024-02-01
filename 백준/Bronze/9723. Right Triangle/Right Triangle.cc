#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for(int t=1; t<=T; t++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		cout << "Case #" << t << ": ";
		if(a*a==b*b+c*c || c*c==b*b+a*a || b*b==a*a+c*c) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
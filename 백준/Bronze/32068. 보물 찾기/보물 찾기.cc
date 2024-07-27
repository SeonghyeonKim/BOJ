#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int L, R, S;
		cin >> L >> R >> S;
		cout << min((S-L)*2+1, (R-S)*2) << "\n"; 
	}

	return 0;
}
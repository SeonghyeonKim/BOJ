#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	for(int t=1; t<=T; t++) {
		cout << "Case " << t << ":\n";
		
		int n;
		cin >> n;
		
		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			if(a<6) cout << a+1 << "\n";
		}
	}

	return 0;
}

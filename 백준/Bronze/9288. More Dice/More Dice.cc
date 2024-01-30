#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	for(int t=1; t<=T; t++) {
		int a;
		cin >> a;
		
		cout << "Case " << t << ":\n";
		for(int i=1; i<=6; i++) {
			if(a-i < i) break;
			if(a-i > 6) continue;
			cout << "(" << i << "," << a-i << ")\n";
		}
	}

	return 0;
}

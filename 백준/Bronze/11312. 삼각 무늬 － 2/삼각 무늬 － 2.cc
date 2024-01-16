#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		long long a, b;
		cin >> a >> b;
		
		cout << (a/b * a/b) << "\n";
	}
		
	return 0;
}

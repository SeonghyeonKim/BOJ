#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int a, n;
		cin >> a >> n;
		
		int tmp = (n+1)*n/2;
		cout << a << " "  << tmp << " " << tmp*2-n << " " << tmp*2 << "\n";
	}

	return 0;
}

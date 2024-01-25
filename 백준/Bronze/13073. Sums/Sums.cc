#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int n;
		cin >> n;
		
		int tmp = n*(n+1)/2;
		cout << tmp << " ";
		cout << tmp*2-n << " ";
		cout << tmp*2 << "\n";
	}
	
	return 0;
}

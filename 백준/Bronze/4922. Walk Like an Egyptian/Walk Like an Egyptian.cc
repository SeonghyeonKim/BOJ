#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a;
		cin >> a;
		
		if(!a) break;
		
		cout << a << " => " << (a-1)*(a-1) + a << "\n"; 
	}

	return 0;
}


#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b;
	cin >> a >> b;
	
	if(a >= 6) {
		cout << "Love is open door";
		return 0;
	}
	else {
		for(int i=1; i<a; i++) {
			b = (b+1)%2;
			cout << b << "\n";
		}
	}
		
	return 0;
}

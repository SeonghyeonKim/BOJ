#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b;
	cin >> a >> b;
	
	if(a%2==0 || b%2==0) cout << 0;
	else if(a>b) cout << b;
	else cout << a;
	
	return 0;
}

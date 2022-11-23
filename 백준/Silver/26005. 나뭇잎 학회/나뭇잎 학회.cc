#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long a;
	cin >> a;
	if(a==1) cout << 0;
	else cout << (a*a+1)/2;
	
	return 0;
}

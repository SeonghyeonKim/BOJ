#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long a, b, c;
	cin >> a >> b >> c;
	
	if(a==0) cout << c*c-b;
	else if(b==0) cout << c*c-a;
	else cout << (int)(sqrt(a+b));
	
	return 0;
}
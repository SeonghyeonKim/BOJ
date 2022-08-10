#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(c-a==0 && b<=0) cout << 1;
	else if(c-a > 0 && b/(c-a) <= d) cout << 1;
	else cout << 0;
	
	return 0;
}

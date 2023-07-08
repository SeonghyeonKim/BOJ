#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a*b == c*d) cout << "E";
	else if(a*b > c*d) cout << "M";
	else cout <<"P";
	
	return 0;
}
		

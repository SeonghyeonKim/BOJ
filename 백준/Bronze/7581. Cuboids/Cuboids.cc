#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if(!a && !b && !c && !d) return 0;
		
		if(!a) cout << d/b/c << " " << b << " " << c << " " << d << "\n";
		else if(!b) cout << a << " " << d/a/c << " " << c << " " << d << "\n"; 
		else if(!c) cout << a << " " << b << " " << d/a/b << " " << d << "\n";
		else cout << a << " " << b << " " << c << " " << a*b*c << "\n";
	}

	return 0;
}
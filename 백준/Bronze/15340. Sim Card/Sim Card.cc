#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a, b;
		cin >> a >> b;
		
		if(!a && !b) break;
		
		cout << min(min(30*a+40*b, 35*a+30*b), 40*a+20*b) << "\n";
	}

	return 0;
}
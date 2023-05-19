#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	
	cout << min(a, 60+b)*1500 + max(0, a-60-b)*3000;
 	
	return 0;
}




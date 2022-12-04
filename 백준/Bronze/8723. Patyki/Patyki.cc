#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	sort(n, n+3);
	
	if(n[0]==n[1] && n[1]==n[2]) cout << 2;
	else if(n[0]*n[0] + n[1]*n[1] == n[2]*n[2]) cout << 1;
	else cout << 0;

	return 0;
}

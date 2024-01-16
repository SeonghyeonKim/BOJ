#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	
	int tmp1 = int(-a - sqrt(a*a - b));
	int tmp2 = int(-a + sqrt(a*a - b));
	
	if(tmp1 == tmp2) cout << tmp1;
	else cout << tmp1 << " " << tmp2;
	
	return 0;
}

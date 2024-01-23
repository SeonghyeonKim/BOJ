#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	
	int tmp1 = (a+1)*a/2;
	int tmp2 = (a+2)*(a+1)/2 - 1;
	
	if(tmp1%2==0 && tmp2%2==0) cout << "Even";
	else if(tmp1%2 && tmp2%2) cout << "Odd";
	else cout << "Either";
	
	return 0;
}

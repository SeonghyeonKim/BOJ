#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	
	int tmp = (c-a)/b;
	
	if(a+b*tmp==c && tmp>=0) cout << tmp+1;
	else cout << "X";
	
	return 0;
}

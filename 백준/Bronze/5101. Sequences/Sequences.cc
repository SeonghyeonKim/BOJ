#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a==0 && b==0 && c==0) break;
		
		int tmp = (c-a)/b;
		if(a + b*tmp == c && tmp>=0) cout << tmp+1 << "\n";
		else cout << "X\n";
	}
 
	return 0;
}

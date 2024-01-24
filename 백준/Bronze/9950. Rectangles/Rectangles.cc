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
		
		if(!a && !b && !c) break;
		
		if(a==0) a = c/b; 
		else if(b==0) b = c/a;
		else c = a*b;
		cout << a << " " << b << " " << c << "\n";
	}

	return 0;
}

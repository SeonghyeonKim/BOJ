#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, t=1;
	cin >> a >> b;
	
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			if((i+j)%2) cout << ".";
			else cout << "*";
		}
		cout << "\n";
	}
 
	return 0;
}

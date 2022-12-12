#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=0; i<8; i++) {
		int a;
		cin >> a;
		
		if(a!=0 && a!=1) {
			cout << "F";
			return 0;
		}
	}
	
	cout << "S";
	
	return 0;
} 
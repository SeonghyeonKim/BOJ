#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a;
		cin >> a;
		
		if(a==0) break;
		
		for(int i=1; i<=a; i++) {
			for(int j=0; j<i; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
			
	
	return 0;
}

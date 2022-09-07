#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	while(N--) {
		int flag=1;
		long long int num;
		cin >> num;
			
		for(int i=2; i<1000000; i++) {
			if(num%i==0) {
				flag = 0;
				break;
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}	
	
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int L, D, X;
	cin >> L >> D >> X;

	for(int i=L; i<=D; i++) {
		if(i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10 == X) {
			cout << i << "\n";
			break;
		}
	}	
	
	for(int i=D; i>=L; i--) {
		if(i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10 == X) {
			cout << i << "\n";
			break;
		}
	}
		
	return 0;
}

#include <iostream>
using namespace std;

int main(void) {
	int N,S;
	
	while(cin >> N) {
		cin >> S;	
		
		cout << S/(N+1) << "\n";
	}
	
	return 0;
}
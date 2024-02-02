#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A=0, B=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		
		if(a>b) {
			A += a+b;	
		}
		else if(a==b) {
			A += a;
			B += b;
		}
		else {
			B += a+b;
		}
	}
	cout << A << " " << B;

	return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A=0, B=0, C=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		A+=a;
		B+=b;
		C+=c;
		
		if(A>=30 && B>=30 && C>=30) {
			int m = min(min(A, B), C);
			A-=m;
			B-=m;
			C-=m;
			cout << m << "\n";
		}	
		else {
			cout << "NO\n";
		}
	}

	return 0;
}

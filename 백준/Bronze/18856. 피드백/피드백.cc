#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, i=2;
	cin >> N;
	cout << N << "\n";
	
	for(i=1; i<N; i++) {
		cout << i << " ";
	}
	
	while(i++) {
		int flag=1;
		for(int j=2; j*j<=i; j++) {
			if(i%j==0) {
				flag=0;
				break;
			}
		}
		if(flag) {
			cout << i;
			break;	
		}
	}
		
	return 0;
}

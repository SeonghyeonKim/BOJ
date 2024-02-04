#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int N, tmp=0;
		cin >> N;
		
		for(int i=1; i<N; i++) {
			if(N%i==0) tmp+=i;
		}
		
		cout << N << " is ";
		if(tmp==N) cout << "a perfect";
		else if(tmp<N) cout << "a deficient";
		else cout << "an abundant";
		cout << " number.\n\n";
	}
	
    return 0;
}
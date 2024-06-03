#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int K;
	cin >> K;
	
	for(int i=0; i<3*K; i++) {
		for(int j=0; j<4*K; j++) {
			if(i<K) {
				if(j<K) cout << "G";
				else cout << ".";
			}
			else if(i<2*K) {
				if(j>=K && j<2*K) cout << "I";
				else if(j>=3*K) cout << "T";
				else cout << ".";
			}
			else {
				if(j>=2*K && j<3*K) cout << "S";
				else cout << ".";
			}
		}
		cout << "\n";
	}
	
	return 0;
}
#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	
	while(T--) {
		int N, M;
		int maxN=0, maxM=0;
		
		cin >> N >> M;
		
		for(int i=0; i<N; i++) {
			int tmp;
			cin >> tmp;
			maxN = max(maxN, tmp);
		}
		
		for(int i=0; i<M; i++) {
			int tmp;
			cin >> tmp;
			maxM = max(maxM, tmp);
		}
		 
		if(maxN >= maxM) cout << "S\n";
		else cout << "B\n"; 
	}
	
	
	return 0;
}
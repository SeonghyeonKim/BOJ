#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	for(int t=1; t<=T; t++) {
		int N;
		cin >> N;
		
		cout << "Case " << t << ": " << N-1 << " ";
		for(int i=N; i>=0; i--) {
			int a;
			cin >> a;
			
			if(i) cout << a*i << " ";
		} 
		cout << "\n";
	}
	
    return 0;
}
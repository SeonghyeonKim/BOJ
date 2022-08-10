#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int N;
		cin >> N;
		
		string temp = "";
		for(int i=0; i<N; i++) temp+="#";
		vector<string> v(N, temp);
		
		for(int i=1; i<N-1; i++) {
			for(int j=1; j<N-1; j++) {
				v[i][j] = 'J';
			}
		}
		
		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				cout << v[i][j];
			}
			cout << "\n";
		}
	
		cout << "\n";	
	}
	
	return 0;
}

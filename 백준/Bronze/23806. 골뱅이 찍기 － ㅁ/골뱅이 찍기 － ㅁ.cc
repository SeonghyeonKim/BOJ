#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<N*5; i++) {
		for(int j=0; j<N*5; j++) {
			if(i>=N && i<N*4 && j>=N && j<N*4) cout << " ";
			else cout << "@";
		}
		cout << "\n";
	}	
	
	return 0;
}

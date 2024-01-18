#include <iostream>
#include <cmath>
#include <vector>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	int N;
	cin >> N;
	
	for(int i=0; i<5*N; i++) {
		for(int j=0; j<5*N; j++) {
			if((i<4*N && j>=3*N && j<4*N) || (i>=N && j>=N && j<2*N)) cout << " ";
			else cout << "@";
		}
		cout << "\n";
	}
	
	return 0;
}

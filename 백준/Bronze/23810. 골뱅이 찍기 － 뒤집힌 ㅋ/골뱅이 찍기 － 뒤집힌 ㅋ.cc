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
		if((i>=N && i<2*N) || i>=3*N) for(int j=0; j<N; j++) cout << "@";
		else for(int j=0; j<5*N; j++) cout << "@";
		cout << "\n";
	}
	
	return 0;
}

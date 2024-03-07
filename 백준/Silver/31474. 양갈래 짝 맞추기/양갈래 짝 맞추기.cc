#include <iostream>
using namespace std;

long long nCk[29][29];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N;
	cin >> N;
	
	for(int i=0; i<=28; i++) {
		nCk[i][0] = 1;
		nCk[i][i] = 1;
			
		for(int j=1; j<i; j++) {
			nCk[i][j] = nCk[i-1][j-1] + nCk[i-1][j];
			nCk[i][i-j] = nCk[i][j];
		}
	}
	
	__int128 ans = 1;
	for(int i=N; i>0; i-=2) {
		ans *= nCk[i][2];
	}
	
	for(long long i=2; i<=N/2; i++) {
		ans /= i;
	}
	
	cout << (long long)ans;
	
	return 0;
}
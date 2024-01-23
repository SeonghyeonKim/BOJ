#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, cnt=0;
	cin >> N;
	for(int i=0; i<N-1; i++) {
		long long a;
		cin >> a;
		
		cnt += a;
	}
	cout << N*(N+1)/2-cnt;
	
 
	return 0;
}

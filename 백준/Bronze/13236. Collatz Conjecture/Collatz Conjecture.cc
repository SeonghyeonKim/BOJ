#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	while(1) {
		cout << N << " ";
		if(N == 1) break;
		
		if(N%2) N = N*3+1;
		else N /= 2;
	}
	
	return 0;
}

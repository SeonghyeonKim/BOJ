#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, cnt=0;
	cin >> N;
	
	while(N!=1) {
		if(N%2) N++;
		else N/=2;
		cnt++;
	}
	cout << cnt;
	 
	return 0;
}

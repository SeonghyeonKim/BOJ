#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, cnt=0;
	cin >> N;
	for(int i=0; i<100; i++) {
		if(N-i>=0 && N-i<100) cnt++;
	}
	cout << cnt;
 
	return 0;
}

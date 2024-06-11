#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N;
	cin >> N;
	
	cout << 10 + int(log2(N));
	
	return 0;
}

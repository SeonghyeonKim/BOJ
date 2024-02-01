#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b;
	cin >> a >> b;
	
	cout << (b+1) * ((a-2)*(b+1) + (4-a))/2;

	return 0;
}

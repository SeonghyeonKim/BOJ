#include <iostream>
#include <cmath>
#include <vector>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	char c;
	cin >> c;
	cout << 84 + abs(int(c - 'I'));
	
	return 0;
}

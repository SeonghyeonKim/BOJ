#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	
	
	int N;
	cin >> N;
	cout << (N-1)*(N-2)*(N-3)/3/2;
	
	return 0;
}

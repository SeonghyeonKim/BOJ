#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int X, N;
	cin >> X >> N;
	
	X += X*N;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		X -= a;
	}
	cout << X;

	return 0;
}

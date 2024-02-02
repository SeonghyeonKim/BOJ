#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	for(int i=0; i<N; i++) {
		int x1, y1, f1, x2, y2, f2;
		cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;
		
		cout << abs(x2-x1) + abs(y2-y1) + f1 + f2 << "\n";
	}

	return 0;
}

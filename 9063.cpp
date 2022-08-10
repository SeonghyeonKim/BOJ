#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int minX = 10000, minY = 10000, maxX = -10000, maxY = -10000;
	
	for(int i=0; i<N; i++) {
		int x, y;
		cin >> x >> y;
		
		minX = min(minX, x);
		maxX = max(maxX, x);
		minY = min(minY, y);
		maxY = max(maxY, y);
	}
	
	cout << (maxX-minX) * (maxY-minY);
	
	return 0;
}

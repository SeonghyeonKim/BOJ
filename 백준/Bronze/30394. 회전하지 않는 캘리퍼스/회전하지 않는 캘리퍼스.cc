#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, a=9876543211, b=-9876543211;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int x, y;
		cin >> x >> y;
		a = min(a, y);
		b = max(b, y);
	}
	cout << b-a;
	
    return 0;
}
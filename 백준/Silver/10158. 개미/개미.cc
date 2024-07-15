#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int w, h, p, q, t;
	cin >> w >> h >> p >> q >> t;

	int x = (t+p) % (2 * w);
	int y = (t+q) % (2 * h);

	if (x > w) x = 2 * w - x;
	if (y > h) y = 2 * h - y;
	cout << x << " " << y;

	return 0;
}
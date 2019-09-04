#include<iostream>
#include<cmath>
using namespace std;

float reach(int, int, int, int);

int main()
{
	int x1, y1, x2, y2, r1, r2, T;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << -1 << "\n";
		else if (abs(r1 - r2) < reach(x1, y1, x2, y2) && reach(x1, y1, x2, y2) < r1 + r2)
			cout << 2 << "\n";
		else if (reach(x1, y1, x2, y2) == r1 + r2 || reach(x1, y1, x2, y2) == abs(r1 - r2))
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}

	return 0;
}

float reach(int x1, int y1, int x2, int y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

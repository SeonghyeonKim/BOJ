#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cout.precision(7);
	cout << fixed;

	int a, b, c;
	cin >> a >> b >> c;
	cout << a * c * 1.0 / b;

	return 0;
}
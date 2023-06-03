#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double a;
	cin >> a;
	
	cout.precision(4);
	cout << fixed;
	
	cout << (100.0/a) << "\n" << (100.0/(100.0-a));
	
	
	return 0;
}

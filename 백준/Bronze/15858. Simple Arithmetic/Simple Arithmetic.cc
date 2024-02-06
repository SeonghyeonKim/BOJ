#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	long long a, b, c;
	cin >> a >> b >> c;
	cout.precision(7);
	cout << fixed;
	cout << a*b*1.0/c;
	
    return 0;
}
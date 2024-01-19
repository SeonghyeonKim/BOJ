#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	
	cout << (c / (7 * a+b)) * 7 + (((c % (7 * a+b)) % a) == 0 ? ((c % (7 * a+b)) / a) : ((c % (7 * a+b)) / a)+1) ;

    return 0;
}


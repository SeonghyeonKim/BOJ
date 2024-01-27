#include <iostream>
#include <vector>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	
	cout << max(0, a - (b*c)) << " " << max(0, a - (b*c)+b-1);	

    return 0;
}

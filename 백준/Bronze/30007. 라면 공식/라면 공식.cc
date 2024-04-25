#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define MOD 1000000007
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		cout << a*(c-1)+b << "\n";
	}
	
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int n;
		cin >> n;
		
		if(n>=3) cout << "3\n";
		else cout << "1\n";
	}
	
    return 0;
}


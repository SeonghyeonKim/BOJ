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
		
		if((n+1) % (n%100) == 0) cout << "Good\n";
		else cout << "Bye\n";
	}
   
    return 0;
}


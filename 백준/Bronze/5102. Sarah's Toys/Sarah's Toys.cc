#include <iostream>
#include <set>
#define pii pair<int, int>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a, b;
		cin >> a >> b;
		
		if(a==0 && b==0) break;
		
		if((a-b)%2) {
			if(a-b==1) cout << "0 0\n";
			else cout << (a-b)/2-1 << " 1\n";	
		}
		else cout << (a-b)/2 << " 0\n";
	}
	
    return 0;
}


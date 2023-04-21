#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int n, m, k;
	cin >> n;
	
	vector<char> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	cin >> m >> k;
	
	for(int i=0; i<m; i++) {
		int flag=1;
		
		for(int j=0; j<k; j++) {
			int a;
			cin >> a;
			
			if(v[a-1]=='P') flag=0;
		}
		
		if(flag) {
			cout << "W";
			return 0;
		}
	}
	
	cout << "P";
	
 	return 0;
}

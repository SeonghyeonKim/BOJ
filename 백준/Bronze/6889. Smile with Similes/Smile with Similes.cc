#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;	
	
	vector<string> a(n), b(m);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<m; i++) cin >> b[i];
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout << a[i] << " as " << b[j] << "\n";
		}
	}
	
	return 0;
}
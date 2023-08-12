#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, ans=0;
	cin >> T;
	
	while(T--) {
		int a, b;
		cin >> a >> b;
		
		ans = max(ans, a*b);
	}
	cout << ans;

    return 0;
}


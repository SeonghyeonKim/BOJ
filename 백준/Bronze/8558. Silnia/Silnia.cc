#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int ans=1;
	for(int i=1; i<=n; i++) {
		ans = (ans*i)%10;
	}
	cout << ans;
	
	return 0;
}

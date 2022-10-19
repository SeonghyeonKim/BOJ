#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int tmp=1000000001;
	int ans=0;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(tmp > a) {
			tmp = a;
		}
		else {
			ans = max(ans, a-tmp);
		}
	}

	cout << ans;	
	
	return 0;
}
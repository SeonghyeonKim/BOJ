#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, T;
	cin >> N >> T;
	
	T = (T-1) % (2+4*(N-1)) + 1;
	
	int ans=1, idx=1, flag=0;
	while(idx < T) {
		if(ans==2*N) flag=1;
		
		if(flag) ans--; 
		else ans++;
		idx++;
	}
	
	cout << ans;

	return 0;
}
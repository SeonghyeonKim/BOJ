#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int Q;
	cin >> Q;
	
	while(Q--) {
		int N, ans=0;
		cin >> N;
		
		while(N>=10) {
			int tmp=0, cnt=10;
			
			while(cnt < N) {
				tmp = max(tmp, (N/cnt)*(N%cnt));
				cnt *= 10;	
			}
			
			N = tmp;
			ans++;
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}

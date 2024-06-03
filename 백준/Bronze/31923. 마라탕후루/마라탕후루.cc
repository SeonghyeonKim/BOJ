#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, P, Q, T=0, idx=0;
	cin >> N >> P >> Q;
	
	vector<int> a(N), b(N), ans(N, 0);
	for(int i=0; i<N; i++) cin >> a[i];
	for(int i=0; i<N; i++) cin >> b[i];
	
	while(T<10000) {
		if(idx==N) {
			cout << "YES\n";
			for(int i=0; i<N; i++) {
				cout << ans[i] << " ";
			}
			return 0;
		}
		
		while(a[idx]==b[idx]) {
			idx++;
			
			if(idx==N) break;
		}
		
		if(idx==N) continue;
		
		a[idx]+=P;
		b[idx]+=Q;
		ans[idx]++;
		T++;
	}
	cout << "NO";
	
	return 0;
}
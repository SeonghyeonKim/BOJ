#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<int> ans(N+M);
	for(int i=0; i<N; i++) cin >> ans[i];
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N+M; j++) {
			int a;
			cin >> a;
			
			ans[i]-=a;
			ans[j]+=a;
		}
	}
	
	for(int i=0; i<N+M; i++) cout << ans[i] << " ";
	
	return 0;
}
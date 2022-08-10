#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v1(N), v2(N);
	
	for(int i=0; i<N; i++) cin >> v1[i];
	for(int i=0; i<N; i++) cin >> v2[i];
	
	int ans1=0, ans2=0;
	for(int i=0; i<N; i++) {
		ans1+=v1[i];
		if(!v2[i]) ans2+=v1[i];
	}
	
	cout << ans1 << "\n" << ans2;
	
	return 0;
}

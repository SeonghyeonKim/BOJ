#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, X;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	cin >> X;
	
	sort(v.begin(), v.end());
	
	int idx = 0;
	
	for(int i=0; i<N; i++) {
		if(v[i] >= X) {
			idx = i;
			break;	
		} 
	}
	
	if(v[idx]==X) {
		cout << 0;
		return 0;
	}
	
	int ans=0;
	for(int i=v[idx-1]+1; i<=X; i++) {
		for(int j=X; j<=v[idx]-1; j++) {
			ans++;
		}
	}
	
	cout << ans-1;
	
	return 0;
}

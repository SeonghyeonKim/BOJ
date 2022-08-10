#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	
	int N, L, H;
	cin >> N >> L >> H;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	int ans=0;
	
	for(int i=L; i<N-H; i++) ans+=v[i];
	printf("%.9f", ans * 1.0 / (N-H-L));
	
	return 0;
}

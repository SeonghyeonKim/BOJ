#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<int> v(M);
	for(int i=0; i<M; i++) cin >> v[i];
	
	
	int cnt = 0;
	for(int i=1; i<N; i++) {
		int sum = 0;
		
		for(int j=0; j<M; j++) {
			int a;
			cin >> a;
			
			sum = sum + abs(a-v[j]);
		}
		if(sum>2000) cnt++;
	}
	
	if(cnt >= N/2) cout << "YES";
	else cout << "NO"; 
	
	return 0;
}
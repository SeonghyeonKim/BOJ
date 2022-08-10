#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	int X, Y;
	cin >> X >> Y;
	
	int cnt=0;
	for(int i=0; i<N; i++) {
		if(v[i] >= Y) cnt++;
	}
	
	cout << N*X/100 << " " << cnt;
	
	return 0;
}

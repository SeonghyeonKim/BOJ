#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int N, T, P;
	cin >> N;
	vector<int> v(6);
	for(int i=0; i<6; i++) cin >> v[i];
	cin >> T >> P;
	
	int ans = 0;
	for(int i=0; i<6; i++) {
		if(v[i]==0) continue;
		ans += (v[i]-1)/T+1;
	}
	
	cout << ans << "\n";
	cout << N/P << " " << N%P;
    
    return 0;
}
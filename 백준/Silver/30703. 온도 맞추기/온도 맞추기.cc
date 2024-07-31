#include <iostream>
#include <vector>
using namespace std;

struct lo {
	long long f, e, d;
};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<lo> v(N);
	for(int i=0; i<N; i++) cin >> v[i].f;
	for(int i=0; i<N; i++) cin >> v[i].e;
	for(int i=0; i<N; i++) cin >> v[i].d;

	long long f1=0, f2=0, ans=0;
	for(int i=0; i<N; i++) {
		long long tmp = (v[i].e - v[i].f)/v[i].d;
		if(v[i].f + v[i].d*tmp != v[i].e) {
			cout << -1;
			return 0;
		}
		
		ans = max(ans, abs(tmp));
		
		if(tmp%2==0) f1=1;
		else f2=1;
		
		if(f1 && f2) {
			cout << -1;
			return 0;
		}
	}
	cout << ans;
		
    return 0;
}

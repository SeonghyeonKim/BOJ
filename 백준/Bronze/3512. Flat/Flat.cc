#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	long long N, K, ans=0, cnt=0;
	double sum=0;
	cin >> N >> K;
	
	for(int i=0; i<N; i++) {
		int a;
		string s;
		
		cin >> a >> s;
		
		if(s=="bedroom") {
			cnt += a;	
			ans += a;
			sum += a;
		}
		else if(s=="balcony") {
			sum += a/2.0;
			ans += a;
		} 
		else {
			ans += a;
			sum += a;	
		}
	}
	cout.precision(7);
	cout << fixed;
	
	cout << ans << "\n" << cnt << "\n" << sum*K;  
	
    return 0;
}
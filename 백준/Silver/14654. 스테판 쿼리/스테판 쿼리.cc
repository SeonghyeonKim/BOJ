#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int ans1=0, ans2=0, cnt1=0, cnt2=0;
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(a==1) {
			if(v[i]==1) {
				if(cnt1 > cnt2) {
					ans1 = max(ans1, cnt1);
					cnt1 = 0;
					cnt2++;
				}	
				else {
					ans2 = max(ans2, cnt2);
					cnt2 = 0;
					cnt1++;
				}
			}
			else if(v[i]==2) {
				ans2 = max(ans2, cnt2);
				cnt2 = 0;
				cnt1++;
			}
			else {
				ans1 = max(ans1, cnt1);
				cnt1 = 0;
				cnt2++;
			}
		}	
		else if(a==2) {
			if(v[i]==1) {
				ans1 = max(ans1, cnt1);
				cnt1 = 0;
				cnt2++;
			}
			else if(v[i]==2) {
				if(cnt1 > cnt2) {
					ans1 = max(ans1, cnt1);
					cnt1 = 0;
					cnt2++;
				}	
				else {
					ans2 = max(ans2, cnt2);
					cnt2 = 0;
					cnt1++;
				}
			}
			else {
				ans2 = max(ans2, cnt2);
				cnt2 = 0;
				cnt1++;
			}
		}	
		else {
			if(v[i]==1) {
				ans2 = max(ans2, cnt2);
				cnt2 = 0;
				cnt1++;
			}
			else if(v[i]==2) {
				ans1 = max(ans1, cnt1);
				cnt1 = 0;
				cnt2++;
			}
			else {
				if(cnt1 > cnt2) {
					ans1 = max(ans1, cnt1);
					cnt1 = 0;
					cnt2++;
				}	
				else {
					ans2 = max(ans2, cnt2);
					cnt2 = 0;
					cnt1++;
				}
			}
		}
	}
	ans1 = max(ans1, cnt1);
	ans2 = max(ans2, cnt2);
	
	cout << max(ans1, ans2);
	
	return 0;
}

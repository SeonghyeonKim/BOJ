#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double C;
	int N, mx=0;
	cin >> C >> N;
	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
		mx = max(mx, v[i]);	
	}
	
	int k=0;
	
	if(C>=1.98) k=2;
	else if(C>=0.99) k=1;
	
	int left=0, right=0, cnt=0, ans=0, K=0;
	while(left<=right && right < N) {
		ans = max(ans, cnt);
		
		if(left == right) {
			if(v[right]==0) {
				if(K<k) {
					K++;
					cnt++;
					right++;
				}
				else {
					left++;
					right++;
				}
			}	
			else {
				cnt++;
				right++;
			}
		}
		else if(v[right]==0) {
			if(K<k) {
				K++;
				cnt++;
				right++;
			}
			else {
				if(v[left]==0 && K>0)
					K--;
				
				cnt--;
				left++;
			}
		}
		else {
			right++;
			cnt++;
		}
	}
	ans = max(ans, cnt);
	
	cout << ans << "\n" << mx;
	 
	return 0;
}



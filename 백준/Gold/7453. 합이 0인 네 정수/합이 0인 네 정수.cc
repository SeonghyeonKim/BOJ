#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<long long> a(N), b(N), c(N), d(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	
	vector<long long> v1, v2;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			v1.push_back(a[i] + b[j]);
			v2.push_back(c[i] + d[j]);
		}
	}
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<long long> ());
	
	long long left=0, right=0, ans=0; 
	int s1 = v1.size(), s2 = v2.size();
	
	while(left<s1 && right<s2) {
		int tmp = v1[left] + v2[right];
	
		if(tmp==0) {
			int tmp1 = 1;
			int tmp2 = 1;
			
			while(v1[left] == v1[left+1] && left+1<s1) {
				left++;
				tmp1++;
			}
			
			while(v2[right] == v2[right+1] && right+1<s2) {
				right++;
				tmp2++;
			}
			
			ans += tmp1 * 1LL * tmp2;
			left++;
			right++;
		}
		else if(tmp>0) right++;
		else left++;
	}
	
	cout << ans;
	 
	return 0;
}
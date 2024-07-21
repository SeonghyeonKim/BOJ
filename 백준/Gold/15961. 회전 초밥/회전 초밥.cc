#include <iostream>
#include <vector>
using namespace std;

int arr[3001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, d, k, c;
	cin >> N >> d >> k >> c;
	
	vector<int> v(2*N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
		v[N+i] = v[i];
	}
	
	int left = 0, right = k, cnt=0, ans=0;
	for(int i=0; i<k; i++) {
		if(arr[v[i]]==0) cnt++;
		arr[v[i]]++;
	}
	
	ans = max(ans, arr[c]==0 ? cnt+1 : cnt);
	
	while(right < 2*N) {
		arr[v[left]]--;
		if(arr[v[left]]==0) cnt--;
		arr[v[right]]++;
		if(arr[v[right]]==1) cnt++;
		
		left++;
		right++;
		ans = max(ans, arr[c]==0 ? cnt+1 : cnt);	
	}
	
	cout << ans;

	return 0;
}
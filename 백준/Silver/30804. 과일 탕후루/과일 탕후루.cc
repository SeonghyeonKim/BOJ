#include <iostream>
#include <vector>
using namespace std;

int arr[10];

int check() {
	int cnt = 0;
	for(int i=1; i<=9; i++) {
		if(arr[i]) cnt++;
	}
	
	if(cnt<=2) return 1;
	return 0;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	int left=0, right=1, ans=1;
	arr[v[0]]++;
	
	int cnt = 1;
	while(left < right && right <= N) {
		if(check()) {
			ans = max(ans, cnt);
			
			cnt++;
			if(right<N) arr[v[right]]++;
			right++;
		}
		else {
			cnt--;
			arr[v[left]]--;
			left++;
		}
	}
	
	cout << ans;
	
	return 0;
}

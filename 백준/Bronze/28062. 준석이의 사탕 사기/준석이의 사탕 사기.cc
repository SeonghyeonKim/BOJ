#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, ans=0;
	cin >> n;
	
	vector<int> v;
	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		
		if(a%2) v.push_back(a);
		else ans+=a;
	}
	
	sort(v.begin(), v.end(), greater<int>());
	
	if(v.size()>=2) {
		for(int i=0; i<v.size()-1; i+=2) {
			ans += v[i] + v[i+1];	
		}
	}
	
	cout << ans;
	
	return 0;
}


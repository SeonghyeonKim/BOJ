#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	vector<pair<string, int> > v(n);
	int tmp=0;
	for(int i=0; i<n; i++) {
		cin >> v[i].first >> v[i].second;
		
		if(v[i].first=="jinju") tmp = v[i].second;
	}
	int ans=0;
	for(int i=0; i<n; i++) {
		if(v[i].second > tmp) ans++;
	}
	cout << tmp << "\n" << ans;
   
    return 0;
}


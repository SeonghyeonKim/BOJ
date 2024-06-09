#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
	return a.second < b.second;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pair<string, int>> v;
	for(int i=0; i<N; i++) {
		string a, b, c;
		int d, e;
		cin >> a >> b >> c >> d >> e;
		
		if(b=="jaehak" && c=="notyet" && (d==-1 || d>3)) {
			v.push_back({a, e});
		}
	}
	
	sort(v.begin(), v.end(), comp);
	vector<string> ans;
	for(int i=0; i<min(int(v.size()), 10); i++) {
		ans.push_back(v[i].first);
	}
	
	sort(ans.begin(), ans.end());
	
	cout << ans.size() << "\n";
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << "\n";
	}
	
	return 0;
}
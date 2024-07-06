#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#define pic pair<int, char>
using namespace std;

map<char, int> m1;
map<int, char> m2;

bool comp (pair<pic, pic> a, pair<pic, pic> b) {
	int ac, bc;
	
	if((a.first.first-1)%15 == (a.second.first)%15 || (a.first.first)%15 == (a.second.first-1)%15) ac = 1;
	else if(a.first.first == a.second.first) ac = 2;
	else ac = 3;
	
	if((b.first.first-1)%15 == (b.second.first)%15 || (b.first.first)%15 == (b.second.first-1)%15) bc = 1;
	else if(b.first.first == b.second.first) bc = 2;
	else bc = 3;
	
	if(ac==bc) {
		int fa=0, fb=0;
		if(a.first.second == a.second.second) fa = 1;
		if(b.first.second == b.second.second) fb = 1;
		
		if(fa != fb) return fa > fb;
		
		int ma1, mb1, ma2, mb2;
		char ca, cb;
		
		if(a.first.first >= a.second.first) {
			ma1 = a.first.first;
			ma2 = a.second.first;
			ca = a.first.second;
		} 
		else {
			ma1 = a.second.first;
			ma2 = a.first.first;
			ca = a.second.second;
		}
		
		if(b.first.first >= b.second.first) {
			mb1 = b.first.first;
			mb2 = b.second.first;
			cb = b.first.second;
		}
		else {
			mb1 = b.second.first;
			mb2 = b.first.first;
			cb = b.second.second;
		}
		
		if(ma1 == mb1) {
			if(ma2 == mb2) {
				return ca < cb;
			}
			return ma2 > mb2;
		}
		return ma1 > mb1;
	}
	return ac < bc;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for(int i=1; i<=9; i++) {
		m1.insert({char('0'+i), i});
		m2.insert({i, char('0'+i)});
	}
	for(int i=0; i<6; i++) {
		m1.insert({char('a'+i), 10+i});
		m2.insert({10+i, char('a'+i)});
	}

	string s;
	cin >> s;
	
	vector<pic> v(6);
	for(int i=0, j=0; i<s.size(); i+=3, j++) {
		v[j].first = m1[s[i]];
		v[j].second = s[i+1];
	}

	vector<pair<pic, pic> > ans;
	for(int i=0; i<6; i++) {
		for(int j=i+1; j<6; j++) {
			ans.push_back({v[i], v[j]});
		}
	}
 
	sort(ans.begin(), ans.end(), comp);
	
	for(int i=0; i<ans.size(); i++) {
		cout << m2[ans[i].first.first] << ans[i].first.second << m2[ans[i].second.first] << ans[i].second.second << "\n";
	}

	return 0;
}
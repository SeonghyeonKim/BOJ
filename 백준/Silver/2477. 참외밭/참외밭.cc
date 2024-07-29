#include <iostream>
#include <vector>
using namespace std;

int cnt[5];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pair<int, int> > v(6);
	
	for(int i=0; i<6; i++) {
		cin >> v[i].first >> v[i].second;
	
		cnt[v[i].first]++;
	}
	
	for(int i=0; i<5; i++) {
		if(cnt[v[i].first] == 1 && cnt[v[i+1].first] == 1) break;
		
		v.push_back(v[i]);
	}	
	
	int w, h, x, y, f1=0, f2=0;
	
	for(int i=v.size()-6; i<v.size(); i++) {
		if(cnt[v[i].first]==1) {
			if(f1==0) w = v[i].second;
			else if(f1==1) h = v[i].second;
			f1++;
		}
		else {
			if(f2==1) x = v[i].second;
			else if(f2==2) y = v[i].second;
			f2++;
		}
	}
	
	cout << (w*h - x*y) * N;
	
	return 0;
}

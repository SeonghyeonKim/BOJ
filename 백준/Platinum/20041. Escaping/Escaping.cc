#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int check[4];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
		
	int N, thx, thy;
	cin >> N; 
	
	vector<pair<int, int> > v; 
	for(int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		
		v.push_back({a,b});
	}
	cin >> thx >> thy;
	
	int cnt = 0;

	for(int i=0; i<N; i++) {
		int subx = v[i].first-thx;
		int suby = v[i].second-thy;
		
		int x = abs(subx);
		int y = abs(suby);
		
		if(subx>=0 && suby>=0) {
			if(x>=y) check[0] = 1;
			if(x<=y) check[1] = 1;
		}
		if(subx<=0 && suby>=0) {
			if(x>=y) check[2] = 1;
			if(x<=y) check[1] = 1;	
		}
		if(subx>=0 && suby<=0) {
			if(x>=y) check[0] = 1;
			if(x<=y) check[3] = 1;
		}
		if(subx<=0 && suby<=0) {
			if(x>=y) check[2] = 1;
			if(x<=y) check[3] = 1;
		}
	}
	for(int i=0; i<4; i++) if(check[i]) cnt++;
	 
	if(cnt==4) cout << "NO";
	else cout << "YES";
		
	return 0;
}

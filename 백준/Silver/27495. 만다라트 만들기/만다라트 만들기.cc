#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define psi pair<string, int>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<string> v[8];
	vector<psi> ans;
	int cnt = 0;
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			string s;
			cin >> s;
			
			if(i<3) {
				if(j<3) {
					if(i==1 && j==1) continue;
					v[0].push_back(s); 
				}
				else if(j<6) {
					if(i==1 && j==4) continue;
					v[1].push_back(s); 
				}
				else {
					if(i==1 && j==7) continue;
					v[2].push_back(s); 
				}
			}	
			else if(i<6) {
				if(j<3) {
					if(i==4 && j==1) continue;
					v[3].push_back(s); 
				}
				else if(j<6) {
					if(i==4 && j==4) continue;
					ans.push_back({s, cnt++}); 
				}
				else {
					if(i==4 && j==7) continue;
					v[4].push_back(s); 
				}
			}	
			else {
				if(j<3) {
					if(i==7 && j==1) continue;
					v[5].push_back(s); 
				}
				else if(j<6) {
					if(i==7 && j==4) continue;
					v[6].push_back(s); 
				}
				else {
					if(i==7 && j==7) continue;
					v[7].push_back(s); 
				}
			}
		}
	}
	
	for(int i=0; i<8; i++) sort(v[i].begin(), v[i].end());
	sort(ans.begin(), ans.end());
	
	for(int i=0; i<8; i++) {
		cout << "#" << i+1 << ". " << ans[i].first << "\n";
		for(int j=0; j<8; j++) {
			cout << "#" << i+1 << "-" << j+1 << ". " << v[ans[i].second][j] << "\n";
		}
	}

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define psi pair<string, int>
using namespace std;

bool comp(psi a, psi b) {
	return a.first < b.first;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<psi> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}	

	sort(v.begin(), v.end(), comp);
	
	string ans1, ans2;
	int idx1=N, idx2=N, cnt=-1;
	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			string s1 = v[i].first;
			string s2 = v[j].first;
			int i1 = v[i].second;
			int i2 = v[j].second;
			
			int si = min(s1.size(), s2.size());
			int tmp = 0;
			for(int k=0; k<si; k++) {
				if(s1[k] != s2[k]) break;
				tmp++;
			}
			
			if(tmp > cnt) {
				if(i1 < i2) {
					idx1 = i1;
					idx2 = i2;
					cnt = tmp;
					ans1 = s1;
					ans2 = s2;
				}
				else {
					idx1 = i2;
					idx2 = i1;
					cnt = tmp;
					ans1 = s2;
					ans2 = s1;
				}
			}
			else if(tmp == cnt) {
				if(i1 < i2) {
					if(i1 < idx1) {
						idx1 = i1;
						idx2 = i2;
						cnt = tmp;
						ans1 = s1;
						ans2 = s2;
					}
					else if(i1 == idx1){
						if(i2 < idx2) {
							idx1 = i1;
							idx2 = i2;
							cnt = tmp;
							ans1 = s1;
							ans2 = s2;
						}	
					}
				}
				else {
					if(i2 < idx1) {
						idx1 = i2;
						idx2 = i1;
						cnt = tmp;
						ans1 = s2;
						ans2 = s1;
					}
					else if(i2 == idx1) {
						if(i1 < idx2) {
							idx1 = i2;
							idx2 = i1;
							cnt = tmp;
							ans1 = s2;
							ans2 = s1;
						}
					}
				}
			}
			else {
				break;
			}
		}
	}
	
	cout << ans1 << "\n" << ans2;
	
	return 0;
}
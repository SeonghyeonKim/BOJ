#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<long long> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	vector<long long> ans(N, 0);
	for(int i=0; i<N; i++) {
		int f1 = 0;
		// 양의 기울기 
		long long x1=-1, y1=-1;
		// 음의 기울기 
		long long x2=-1, y2=-1;
				
		for(int j=i+1; j<N; j++) {
			// 내려다 보기 
			if(v[i] > v[j]) {
				if(x1==-1 && y1==-1) {
					if(x2==-1 && y2==-1) {
						ans[i]++;
						ans[j]++;
						
						x2 = j-i;
						y2 = v[j]-v[i];
					}
					else {
						long long tx = j-i;
						long long ty = v[j]-v[i];
						
						if(tx*y2 < ty*x2) {
							x2 = tx;
							y2 = ty;
							ans[i]++;
							ans[j]++;
						}
					}
				}
			}
			// 올려 보기 
			else if(v[i] < v[j]) {
				if(x1==-1 && y1==-1) {
					ans[i]++;
					ans[j]++;
					
					x1 = j-i;
					y1 = v[j]-v[i];
				}
				else {
					long long tx = j-i;
					long long ty = v[j]-v[i];
					
					if(tx*y1 < ty*x1) {
						x1 = tx;
						y1 = ty;
						ans[i]++;
						ans[j]++;
					}
				}
			}
			// 같은 높이 
			else {
				if(x1==-1 && y1==-1) {
					if(x2==-1 && y2==-1) {
						ans[i]++;
						ans[j]++;
						
						x2 = j-i;
						y2 = 0;
					}
					else {
						long long tx = j-i;
						long long ty = v[j]-v[i];
						
						if(tx*y2 < ty*x2) {
							x2 = tx;
							y2 = ty;
							ans[i]++;
							ans[j]++;
						}
					}
				}	
			}
		}
	}
	
	long long answer=0;
	for(int i=0; i<N; i++) answer = max(answer, ans[i]);
	cout << answer;
	  
	return 0;
}

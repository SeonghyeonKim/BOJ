#include <iostream>
#include <vector>
#include <cmath>
#define pii pair<int, int>
using namespace std;
 
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<pii> v(M);
	for(int i=0; i<M; i++) {
		cin >> v[i].first >> v[i].second;
	}
	
	for(int cond=0; cond<(1 << N); cond++) {
		int flag = 1;
		
		for(int i=0; i<M; i++) {
			int xi=v[i].first, yi=v[i].second;
			bool x=(cond & (1 << (abs(xi)-1)));
			bool y=(cond & (1 << (abs(yi)-1)));
			
			if(xi<0) x = !x;
			if(yi<0) y = !y;
			
			if((x || y) == false) {
				flag = 0;
				break;
			}
		}
		
		if(flag) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
    
    return 0;
}
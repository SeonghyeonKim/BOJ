#include <iostream>
#include <vector>
#include <algorithm>
#define pii pair<long long, long long>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	while(N--) {
		vector<pii> v(4);
		for(int i=0; i<4; i++) cin >> v[i].first >> v[i].second;
		
		vector<long long> len;
		
		for(int i=0; i<4; i++) {
			for(int j=i+1; j<4; j++) {
				long long a = v[i].first - v[j].first;
				long long b = v[i].second - v[j].second;
				
				len.push_back(a*a + b*b);
			}
		}
		
		sort(len.begin(), len.end());
		
		if(len[0]==len[1] && len[1]==len[2] && len[2]==len[3] && 
			len[4]==len[5]) cout << "1\n";
		else cout << "0\n";
	}

	return 0;
}
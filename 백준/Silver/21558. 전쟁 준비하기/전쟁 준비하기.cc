#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int sum = 0;
	vector<int> v(N), pref(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
		sum += v[i];
		
		if(i==0) pref[i] = v[i];
		else pref[i] = v[i] + pref[i-1];
	}
	
	vector<int> tmp;
	for(int i=1; i<=sum; i++) {
		if(sum%i==0) 
			tmp.push_back(i);
	}
	
	int idx=0;
	for(int i=0; i<N; i++) {
		for(int j=tmp.size()-1; j>=0; j--) {
			int cnt = 0;
			
			for(int k=0; k<pref.size(); k++) {
				if(pref[k]%tmp[j] == 0) cnt++;
			}
			
			if(cnt >= N-i) {
				idx = j;
				break;	
			}
		}
		
		cout << tmp[idx] << " ";
	}

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define pii pair<int, int>
using namespace std;

int arr[100001][2];

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
	cin >> N;

	vector<pii> p(N);
	map<int, int> m;
	for(int i=0; i<N; i++) {
		cin >> p[i].first >> p[i].second;
		m.insert({p[i].second, p[i].first}); 
	}
		
	sort(p.begin(), p.end());
	
	for(int i=1; i<=N; i++) {
		arr[i][0] = p[i-1].second;
	}
	
	vector<int> v;
	for(int i=1; i<=N; i++) {
		if(v.size()==0 || v.back()<arr[i][0]) {
			v.push_back(arr[i][0]);
            arr[i][1] = v.size()-1;
		}
		else {
			int left = 0;
            int right =  v.size()-1;

            while(left<right) {
                int mid = (left + right)/2;

                if(v[mid]>=arr[i][0]) right = mid;
                else left = mid+1;
            }
            v[left] = arr[i][0];
            arr[i][1] = left;
		}
	}
	cout << N - v.size() << "\n";
	
	vector<int> ans;
    int index = v.size()-1;
    for(int i=N; i>0; i--) {
        if(arr[i][1]==index) {
            index--;
            ans.push_back(m[arr[i][0]]);
        }
    }
    
    sort(ans.begin(), ans.end());
    
    int idx = 0;
    for(int i=0; i<N; i++) {
    	if(p[i].first == ans[idx]) idx++;
    	else cout << p[i].first << "\n";
	}
    
	return 0;
}
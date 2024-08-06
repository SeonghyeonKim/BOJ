#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
vector<int> ans;

void dfs(int idx, int cnt) {
	if(cnt == M) {	
		for(int i=0; i<M; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return ;
	}
	
	for(int i=0; i<v.size(); i++) {
		ans.push_back(v[i]);
		dfs(i, cnt+1);
		ans.pop_back();
	}
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

	set<int> s;
    for (int i = 0; i < N; i++) {
    	int a;
    	cin >> a;
    	s.insert(a);
	}
	
	for(auto it=s.begin(); it!=s.end(); it++) {
		v.push_back(*it);	
	}

	sort(v.begin(), v.end());
    
    dfs(0, 0);
    
    return 0;
}
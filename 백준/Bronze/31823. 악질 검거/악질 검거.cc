#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	
	vector<pair<string, int> > v;
	set<int> st;
	for(int i=0; i<N; i++) {
		int ans=0, tmp=0;
		for(int j=0; j<M; j++) {
			char a;
			cin >> a;
			
			if(a=='*') {
				tmp = 0;
			}
			else {
				tmp++;
				ans = max(ans, tmp);
			}
		}
		string s;
		cin >> s;
		
		v.push_back({s, ans});
		st.insert(ans);
	} 
	
	cout << st.size() << "\n";
	for(int i=0; i<N; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}
	
    return 0;
}
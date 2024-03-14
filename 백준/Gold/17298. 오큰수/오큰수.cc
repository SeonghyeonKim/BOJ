#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v(N), ans(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	stack<int> st;
	for(int i=N-1; i>=0; i--) {
		int cur = v[i];
		
		while(!st.empty()) {
			if(st.top() <= cur) st.pop(); 
			else break;
		}
		
		if(st.empty()) {
			ans[i] = -1;
		}
		else {
			ans[i] = st.top();
		}
		
		st.push(cur);
	}
	
	for(int i=0; i<N; i++) {
		cout << ans[i] << " ";
	}
	
	return 0;
}
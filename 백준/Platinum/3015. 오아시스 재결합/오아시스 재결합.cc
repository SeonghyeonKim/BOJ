#include <iostream>
#include <stack>
#define ll long long
#define pll pair<long long, long long>
using namespace std;
 
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    stack<pll> s;
    ll ans=0;
    for(int i=0; i<N; i++) {
    	// 현재 사람의 키, 같은 키의 사람 수 
    	ll a, cnt=1;
    	cin >> a;
    	
    	// 이전 사람이 더 작은 경우 
		while(!s.empty() && s.top().first < a)	{
			// 이전 사람과 쌍 형성 
			ans += s.top().second;
			s.pop();
		}
    	
    	if(!s.empty()) {
			// 이전 사람과 같은 키인 경우				
			if(s.top().first == a) {
				ans += s.top().second;
				cnt = s.top().second+1;
				s.pop();
				
				if(!s.empty()) ans++; 
			}
			// 이전 사람보다 더 큰 키인 경우 
    		else {
    			ans++; 
			}	
		}
		
		s.push({a, cnt});
	}
    
    cout << ans;
    
    return 0;
}
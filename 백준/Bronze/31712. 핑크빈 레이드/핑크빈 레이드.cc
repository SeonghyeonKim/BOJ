#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a,b,c,d,e,f,g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	
	int ans=0, sum=0;
	
	while(1) {
		if(ans%a==0) sum+=b;
		if(ans%c==0) sum+=d;
		if(ans%e==0) sum+=f;
		
		if(sum >= g) break;
		
		ans++;
	}
	cout << ans;
	
	return 0;
}
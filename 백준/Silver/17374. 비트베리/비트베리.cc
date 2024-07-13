#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int p,q,a,b,c,d;
		cin >> p >> q >> a >> b >> c >> d;
		
		int tmp = (q/c)*d;
		int x = (p-tmp)/(a+b);
		cout << max(max(min(p-a*x, tmp+b*x), min(p-a*(x+1), tmp+b*(x+1))), min(p-a*(x-1), tmp+b*(x-1))) << "\n";
	}
	 
	return 0;
}
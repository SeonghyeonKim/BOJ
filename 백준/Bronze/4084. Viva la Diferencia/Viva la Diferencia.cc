#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	while(1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if(a==0 && b==0 && c==0 && d==0) break;
		
		if(a==b && b==c && c==d) {
			cout << "0\n";
			continue;
		}
		
		int cnt = 1;
		while(1) {
			int na = abs(a-b);
			int nb = abs(b-c);
			int nc = abs(c-d);
			int nd = abs(d-a);
			
			if(na==nb && nb==nc && nc==nd) break;
			
			a = na;
			b = nb;
			c = nc;
			d = nd;
			
			cnt++;
		}
		cout << cnt << "\n";
	}
	
    return 0;
}


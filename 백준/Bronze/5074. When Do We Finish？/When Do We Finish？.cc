#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);
	
	while(1) {
		int a, b, c, d;
		scanf("%d:%d %d:%d", &a, &b, &c, &d);
		
		if(a==0 && b==0 && c==0 && d==0) break;
		
		int tmp = a*60+c*60+b+d;
		int k = tmp/(24*60);
		
		if(tmp>=24*60) printf("%02d:%02d +%d\n", (tmp-k*24*60)/60, tmp%60, k);
		else printf("%02d:%02d\n", tmp/60, tmp%60);
	}
	 
	return 0;
}
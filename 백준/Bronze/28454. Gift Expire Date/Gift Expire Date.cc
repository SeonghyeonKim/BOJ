#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);
	
	int a, b, c, N;
	scanf("%d-%d-%d", &a, &b, &c);
	scanf("%d", &N);
	
	int ans=0;
	for(int i=0; i<N; i++) {
		int q, w, e;
		scanf("%d-%d-%d", &q, &w, &e);
	
		if(q>a) ans++;
		else if(q==a) {
			if(w>b) ans++;
			else if(w==b) {
				if(e>=c) ans++;
			}
		} 
	}
	printf("%d", ans);
	
	return 0;
}

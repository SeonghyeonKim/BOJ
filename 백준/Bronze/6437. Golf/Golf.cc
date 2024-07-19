#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);
	
	int t=1;
	while(1) {
		int a, b;
		cin >> a >> b;
		
		if(a==0) return 0;
		 
		printf("Hole #%d\n", t++);
		if(b==1) printf("Hole-in-one.\n\n");
		else if(a-b==3) printf("Double eagle.\n\n");
		else if(a-b==2) printf("Eagle.\n\n");
		else if(a-b==1) printf("Birdie.\n\n");
		else if(a-b==0) printf("Par.\n\n");
		else if(a-b==-1) printf("Bogey.\n\n");
		else printf("Double Bogey.\n\n");
	}
	  
	return 0;
}

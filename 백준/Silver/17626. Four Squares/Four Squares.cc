#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	int cnt[4] = {0,0,0,0};
	int sn = sqrt(N);
	
	for(int a=0; a<=sn; a++) {
		for(int b=a; b<=sn; b++) {
			for(int c=b; c<=sn; c++) {
				for(int d=c; d<=sn; d++) {
					if(a*a+b*b+c*c+d*d==N) {
						if(c==0) cout << 1;
						else if(b==0) cout << 2;
						else if(a==0) cout << 3;
						exit(0);	
					}	
					if(a>0) {
						cout << 4;
						exit(0);
					}
				}
			}
		}
	}
	
	return 0;
}
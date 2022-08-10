#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int A, B, C, M;
	cin >> A >> B >> C >> M;    
    
    int cnt=0, fat=0;
    
    for(int i=0; i<24; i++) {
    	if(fat + A <= M) {
    		cnt+=B;
    		fat+=A;
		}
    	else fat=max(0, fat-C);
	}
	
	cout << cnt;

    return 0;
}

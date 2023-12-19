#include <iostream>
#include <vector>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int T, N;
	cin >> T >> N;
   	
	for(int i=0; i<N; i++) {
		int F;
		cin >> F;
		
		T-=F;	
	}
	if(T>0) cout << "Padaeng_i Cry";
	else cout << "Padaeng_i Happy";
    
    return 0;
}
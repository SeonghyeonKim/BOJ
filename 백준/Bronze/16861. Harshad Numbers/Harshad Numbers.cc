#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	long long n;
	cin >> n;
	
	while(1) {
		long long tmp=0;
		for(int i=n; i>0; i/=10) {
			tmp += i%10;
		}
		if(n%tmp==0) {
			cout << n;
			return 0;	
		}
		
		n++;
	}
	
    return 0;
}
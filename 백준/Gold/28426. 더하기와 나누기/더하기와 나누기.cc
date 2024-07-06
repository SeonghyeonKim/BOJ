#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, sum=0;
	cin >> N;
    
    if(N==1) {
        cout << 2;
        return 0;
    }
    
    int tmp = 2*(N-1);
	for (int i=1; i<N-1; i++) {
		cout << i * 2 << " ";
		sum += i * 2;
	}
    
    for(long long i=tmp; i<1000000; i+=2) {
        for(long long j=3; j<1000000; j+=2) {
            if((sum+i+j)%j==0) {
                cout << i << " " << j;
                return 0;
            } 
        }
    } 
 
	return 0;
}    
#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int n)
{   
    if(n==1 || n==6)
    	return 0;
    else if(n==2 || n==3)
    	return 1;
    
    for(int i=2; i<=sqrt(n); i++) {
    	if(n%i==0) {
    		return 0;
		}
	}
    return 1;
}
int main(void)
{
    int num[100]={0}, N, count=0;
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
    	cin >> num[i];
		
		if(is_prime(num[i]))
			count++;
	}
    cout << count;
    
    return 0;
}

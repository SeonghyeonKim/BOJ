#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int);

int main(void)
{
    int a, b;
    
    cin >> a >> b;
    
    for(int i=a; i<=b; i++) {
    	if(is_prime(i)) cout << i << "\n";
	}
    
    return 0;
}

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

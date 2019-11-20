#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(unsigned long long int);

int main(void)
{
	unsigned long long int N, prime=2;
	cin >> N;
	
	while(N) {
		if(is_prime(prime)) N--;
		prime++;
	}
	
	cout << --prime;
	
	return 0;
}

bool is_prime(unsigned long long int n)
{
	if(n==2 || n==3 || n==5 || n==7 ) return true;
	if(n%2==0 || n%3==0 || n%5==0 || n%7==0 ) return false;
	for(long long int i=7; i<sqrt(n)+1; i+=2) {
		if(n%i==0) return false;
	}
	return true;
}

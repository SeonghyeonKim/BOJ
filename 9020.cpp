#include<iostream>
using namespace std;

int is_prime(int);

int main(void)
{
	int T, num, i;
	cin >> T;
	
	while(T--) {
		cin >> num;
		for(i=num/2; i>0; i--) {
			if(is_prime(i) && is_prime(num-i)) break;
		}
		cout << i << " " << num-i << "\n";
	}
	
	return 0;
}

int is_prime(int n)
{
	if(n==1 || n==0) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(int i=n-1; i>2; i--) {
		if(n%i==0) return 0;
	}
	return 1;
}

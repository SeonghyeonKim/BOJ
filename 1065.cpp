#include <iostream>
using namespace std;

int is_han(int);

int main(void)
{
	int N, count=0;
	
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		if(is_han(i)) {
			count++;
		}
	}
	
	cout << count;
}

int is_han(int num)
{
	int d, n;
	
	if(num<100) 
		return 1;
	
	d = num%100/10 - num%10;
	n = num%100/10;
	
	for(num=num/100; num!=0; num=num/10) {
		if(num % 10 != n+d)
			return 0;
		else
			n=num%10;
	}
	return 1;
}

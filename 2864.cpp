#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;
	int min_sum = A+B;
	int max_sum = A+B;
	
	for(int i=0; i<7; i++) {
		if(A%10==5) max_sum+=pow(10,i);
		if(B%10==5) max_sum+=pow(10,i);
		if(A%10==6) min_sum-=pow(10,i);
		if(B%10==6) min_sum-=pow(10,i);
		A/=10;
		B/=10;
	}
	
	cout << min_sum << " " << max_sum;
	
	return 0;
}

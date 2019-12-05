#include<iostream>
using namespace std;

int main(void)
{
	long long int A, B;
	cin >> A >> B;
	
	if(B>A) {
		int temp = A;
		A = B;
		B = temp;
	}
	if(B>0) {
		cout << A*(A+1)/2 - B*(B-1)/2;
	}
	else if(A>0 && B<0) {
		A = A;
		B = -B;
		cout << A*(A+1)/2 - B*(B+1)/2;
	}
	else {
		A = -A;
		B = -B;
		cout << (B*(B+1)/2 - A*(A-1)/2)*-1;
	}
	
	return 0;
}

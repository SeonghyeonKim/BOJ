#include<iostream>
using namespace std;

int jump(int*, int*, int*);

int main(void)
{
	int A, B, C, count=0;
	cin >> A >> B >> C;
	
	while(jump(&A,&B,&C)) count++;
	cout << count;
	
	return 0;
}

int jump(int* A, int* B, int* C)
{
	if(*C-*B==1 && *B-*A==1) return 0;
	else {
		if(*C-*B > *B-*A) {
			int temp = *B;
			*B = *C-1;
			*A = temp;
		}
		else {
			int temp = *B;
			*B = *A+1;
			*C = temp;
		}
	}
	return 1;
}

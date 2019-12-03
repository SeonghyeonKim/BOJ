#include<iostream>
using namespace std;

int jump(int*, int*, int*);

int main(void)
{
	int A, B, C;
	
	
	
	return 0;
}

int jump(int* A, int* B, int* C)
{
	int high, low, middle;
	
	if(A>B && A>C) 
		if(B>C) {
			high = *A;
			middle = *B;
			low = *C;
		}
		else {
			high = *A;
			middle = *C;
			low = *B;
		}
	else if(B>C)
		if(A>C) {
			high = *B;
			middle = *A;
			low = *C;
		}
		else {
			high = *B;
			middle = *C;
			low = *A;
		}
	else
		if(A>B) {
			high = *C;
			middle = *A;
			low = *B;
		}
		else{
			high = *C;
			middle = *B;
			low = *A;
		}
}

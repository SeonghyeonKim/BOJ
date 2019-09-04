#include <iostream>
using namespace std;

int main(void)
{
	int N, temp, A[51]={0}, B[51]={0}, sum=0;
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> A[i];
	}
	for(int i=0; i<N; i++) {
		cin >> B[i];
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<N-1; j++) {
			if(A[j]>A[j+1]) {
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}		
		}
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<N-1; j++) {
			if(B[j]<B[j+1]) {
				temp=B[j+1];
				B[j+1]=B[j];
				B[j]=temp;
			}		
		}
	}
	for(int i=0; i<N; i++) {
		sum = sum + A[i]*B[i];
	}
	
	cout << sum;
	
	return 0;
}

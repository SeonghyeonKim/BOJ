#include<iostream>
using namespace std;

int power(int *);

int main(void)
{
	int A_fst[5], B_fst[5], A_we[5], B_we[5], A_lst[5], B_lst[5];
	
	for(int i=0; i<5; i++) 
		cin >> A_fst[i];	
	for(int i=0; i<5; i++) 
		cin >> B_fst[i];
	for(int i=0; i<5; i++) 
		cin >> A_we[i];
	for(int i=0; i<5; i++) 
		cin >> B_we[i];
	
	for(int i=0; i<5; i++) {
		A_lst[i] = A_fst[i]-A_we[i]+B_we[i];
		B_lst[i] = B_fst[i]-B_we[i]+A_we[i];
	} 
		
		
	if(power(A_fst)>power(A_lst)) cout << "-\n";
	else if(power(A_fst)<power(A_lst)) cout << "+\n";
	else cout << "0\n";
	if(power(B_fst)>power(B_lst)) cout << "-\n";
	else if(power(B_fst)<power(B_lst)) cout << "+\n";
	else cout << "0\n";
	
	return 0;
}

int power(int *a)
{	
	return a[0] * (1+a[1]/100.0) * (((1-min(a[2], 100)/100.0) + min(a[2], 100)/100.0) * a[3]/100.0) * (1+a[4]/100.0);
}

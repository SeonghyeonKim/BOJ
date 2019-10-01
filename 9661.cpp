#include<iostream>
using namespace std;


int main(void)
{
	long long int N;
	cin >> N;
	
	if(N%5==2 || N%5==0) cout << "CY";
	else cout << "SK";
	
	return 0;
}



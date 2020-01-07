#include<iostream>
using namespace std;

int main(void)
{
	int A, B, C, I, J, K;
	cin >> A >> B >> C >> I >> J >> K;
	double rate_A, rate_B, rate_C;
	
	rate_A = (double) A/I;
	rate_B = (double) B/J;
	rate_C = (double) C/K;
	
	cout.precision(8);
	if(rate_A<=rate_B && rate_A<=rate_C) {
		cout << A-I*rate_A << " " << B-J*rate_A << " " << C-K*rate_A;
	}
	else if(rate_B<=rate_C) {
		cout << A-I*rate_B << " " << B-J*rate_B << " " << C-K*rate_B;
	}
	else {
		cout << A-I*rate_C << " " << B-J*rate_C << " " << C-K*rate_C;
	}
	
	return 0;
}

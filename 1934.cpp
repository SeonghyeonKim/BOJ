#include<iostream>
using namespace std;

int main(void)
{
	int T, A, B, temp, Ai, Bi;
	
	cin >>T;
	
	for(int i=0; i<T; i++) {
		cin >> A >> B;
		Ai=A;
		Bi=B;
		for(;Bi!=0; ) {
			temp = Ai;
			Ai = Bi;
			Bi = temp % Ai;
		}
		cout << (A/Ai) * (B/Ai) * Ai << "\n";
	}
	
	return 0;	
}


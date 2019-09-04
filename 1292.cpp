#include <iostream>
using namespace std;

int main(void)
{
	int A, B, sum=0, k=1;
	
	cin >> A >> B;
	
	for(int i=1; i<=50; i++) {
		for(int j=1; j<=i; j++) {
			if(k>=A && k<=B) sum = sum + i;
			k++;
		}
	}
	cout << sum << endl;
}

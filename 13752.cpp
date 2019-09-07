#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> k;
		for(int j=0; j<k; j++) {
			cout << "=";
		}
		cout << endl;
	}
}

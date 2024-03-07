#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	int suma=0, sumb=0;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		suma += a;
	}
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		sumb += a;
	}
	
	cout << sumb << " " << suma;
	
	return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	if(N%3==0) {
		int a = N/3;
		int b = N-a;
		
		cout << a << "\n";
		for(int i=1; i<=a; i++) {
			cout << 3*i << " ";
		}
		
		cout << "\n" << b << "\n";
		for(int i=1; i<=a; i++) {
			cout << 3*i-1 << " " << 3*i-2 << " ";
		}
	}
	else if(N%3==1) {
		int a = N/3;
		int b = N-a-1;
		
		cout << a << "\n";
		for(int i=0; i<a; i++) {
			cout << 3*i+4 << " ";
		}
		cout << "\n" << b << "\n";
		for(int i=0; i<a; i++) {
			cout << 3*i+2 << " " << 3*i+3 << " ";
		}
	}
	else {
		int a = (N-2)/3+1;
		int b = N-a;
		
		cout << a << "\n";
		cout << "2 ";
		for(int i=1; i<a; i++) {
			cout << 3*i+2 << " ";
		}
		
		cout << "\n" << b << "\n";
		cout << "1 ";
		for(int i=1; i<a; i++) {
			cout << 3*i << " " << 3*i+1 << " ";
		}	
	}
	
	
	return 0;
}
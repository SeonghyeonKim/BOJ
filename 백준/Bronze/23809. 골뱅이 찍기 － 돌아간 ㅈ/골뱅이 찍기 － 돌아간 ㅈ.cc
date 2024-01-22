#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) cout << "@";
		for(int j=0; j<3*N; j++) cout << " ";
		for(int j=0; j<N; j++) cout << "@";
		cout << "\n";
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) cout << "@";
		for(int j=0; j<2*N; j++) cout << " ";
		for(int j=0; j<N; j++) cout << "@";
		cout << "\n";
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<3*N; j++) cout << "@";
		cout << "\n";		
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) cout << "@";
		for(int j=0; j<2*N; j++) cout << " ";
		for(int j=0; j<N; j++) cout << "@";
		cout << "\n";
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) cout << "@";
		for(int j=0; j<3*N; j++) cout << " ";
		for(int j=0; j<N; j++) cout << "@";
		cout << "\n";
	}
	
	return 0;
}

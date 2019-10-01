#include<iostream>
using namespace std;

int gcd(int, int);

int main(void)
{
	int N, ring[101];
	cin >> N;
	for(int i=0; i<N; i++) 	cin >> ring[i];
	for(int i=1; i<N; i++) 	cout << ring[0]/gcd(ring[0],ring[i]) << "/" << ring[i]/gcd(ring[0],ring[i]) << "\n";
	
	return 0;
}

int gcd(int a, int b) {
	if(b==0) return a;
	else return gcd(b, a%b);
}

#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int M, N, sum=0, min=10000;
	
	cin >> M >> N;
	for(int i=(int)ceil(sqrt(M)); i<=(int)sqrt(N); i++) {
		sum = sum + i*i;
		if(i*i<min) min = i*i;
	}
	if(sum==0) cout << "-1";
	else cout << sum << endl << min << endl;
	
	return 0;
}

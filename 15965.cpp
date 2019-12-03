#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

bool prime[7500000];
vector<int> v;


int main(void)
{
	int N;
	
	memset(prime, 1, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	
	for(int i=2; i<=sqrt(7500000); i++)
		if(prime[i])
			for(int j=i*i; j<=7500000; j+=i)
				prime[j] = false;
			
	
	for(int i=0; i<7500000; i++)
		if(prime[i])
			v.push_back(i);
	
	cin >> N;
	cout << v[N-1];
	
	return 0;
}

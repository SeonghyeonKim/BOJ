#include<iostream>
using namespace std;

int main(void)
{
	int N, M, min_one=1000, min_set=1000, one, set;
	cin >> N >> M;
	
	while(M--) {
		cin >> set >> one;
		min_one = min(min_one, one);
		min_set = min(min_set, set);
	}
	
	int a = min_one*N;
	int b = (N/6+1)*min_set;
	int c = N/6*min_set + N%6*min_one;
	
	cout << min(min(a,b),c);
	
	return 0;
}

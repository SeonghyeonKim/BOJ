#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	int N, num;
	vector<int> v;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	
	for(int i=0; i<N; i++) {
		cout << v[i] << "\n";	
	}	
		
	return 0;
}

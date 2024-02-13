#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int n, b, a;
	cin >> n >> b >> a;
	
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	long long sum=0;
	for(int i=0; i<n; i++) {
		if(i < a) 
			sum += v[i]/2;
		else 
			sum += v[i]/2 + v[i-a]/2;
		
		if(sum > b) {
			cout << i;
			return 0;
		}
	}
	cout << n;
	
    return 0;
}
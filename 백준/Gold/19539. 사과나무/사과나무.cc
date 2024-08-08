#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	int sum=0, one=0, two=0;
	vector<int> v(N);	
	for(int i=0; i<N; i++) {
		cin >> v[i];
		sum += v[i];
		
		one += v[i]%2;
		two += v[i]/2;
	}
	
	if(sum%3!=0) cout << "NO";
	else if(one > two) cout << "NO";
	else {
		int tmp = (two-one)/3;
		if(one+tmp*2 == two-tmp) cout << "YES";
		else cout << "NO";
	}

	return 0;
}
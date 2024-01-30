#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	
	vector<int> v;
	for(int i=1; i<=N; i++) {
		if(i%10!=K%10 && i%10!=(K*2)%10) v.push_back(i);
	}
	cout << v.size() << "\n";
	for(int i=0; i<v.size(); i++) cout << v[i] << " ";

	return 0;
}

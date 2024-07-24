#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int B, C, D, sum=0;
	cin >> B >> C >> D;
	
	vector<int> b(B), c(C), d(D);
	for(int i=0; i<B; i++) {
		cin >> b[i];
		sum += b[i];	
	}
	for(int i=0; i<C; i++) {
		cin >> c[i];
		sum += c[i];	
	}
	for(int i=0; i<D; i++) {
		cin >> d[i];
		sum += d[i];	
	}
		
		
	sort(b.begin(), b.end(), greater<int>());
	sort(c.begin(), c.end(), greater<int>());
	sort(d.begin(), d.end(), greater<int>());
	
	int tmp = 0;
	for(int i=0; i<min(min(B, C), D); i++) tmp += b[i] + c[i] + d[i];
	
	cout << sum << "\n" << (sum-tmp) + tmp - tmp/10;
	
    return 0;
}

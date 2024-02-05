#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;
	
	int tmp1=0, tmp2=0;
	
	for(int i=0; i<a.size(); i++) {
		if(a[i] < '0' || a[i] > '9') {
			cout << "NaN";
			return 0;
		}
		tmp1 = tmp1*10 + (a[i]-'0');
	}
	
	for(int i=0; i<b.size(); i++) {
		if(b[i] < '0' || b[i] > '9') {
			cout << "NaN";
			return 0;
		}
		tmp2 = tmp2*10 + (b[i]-'0');
	}
	
	cout << tmp1 - tmp2;
	
    return 0;
}
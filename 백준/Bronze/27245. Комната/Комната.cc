#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a<b) swap(a, b); 
	
	if(b >= 2*c && a <= 2*b) cout << "good";
	else cout << "bad";
		
	return 0;
}
		

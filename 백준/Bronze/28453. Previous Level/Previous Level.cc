#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	while(N--) {
		int a;
		cin >> a;
			
		if(a==300) cout << "1 ";
		else if(a>=275) cout << "2 ";
		else if(a>=250) cout << "3 ";
		else cout << "4 ";
	}
	
	
	return 0;
}
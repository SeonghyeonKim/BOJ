#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int v[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int a, b;
		cin >> a >> b;
		
		if(a<24 && b<60) cout << "Yes ";
		else cout << "No "; 
		
		if(a<13){
			if(b<=v[a] && b!=0) cout << "Yes\n";
			else cout << "No\n";
		}
		else cout << "No\n";
	}

	return 0;
}

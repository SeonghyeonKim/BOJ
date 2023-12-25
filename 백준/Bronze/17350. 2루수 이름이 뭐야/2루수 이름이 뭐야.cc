#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T, flag=0;
	cin >> T;
	
	while(T--) {
		string s;
		cin >> s;
		
		if(s=="anj") flag=1;
	}
	
	if(flag) cout << "뭐야;";
	else cout << "뭐야?";
	
	return 0;
}
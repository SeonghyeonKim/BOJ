#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string P, K;
	getline(cin, P);
	cin >> K;
	
	for(int i=0; i<P.size(); i++) {
		char tmp = P[i]-K[i%K.size()]+'a'-1;
		
		if(tmp<'a') tmp = tmp+'z'-'a'+1;
		
		if(P[i]!=' ') cout << tmp;
		else cout << " ";
	}
	
	return 0;
}
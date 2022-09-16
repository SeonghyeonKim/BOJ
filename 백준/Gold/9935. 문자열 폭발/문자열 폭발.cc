#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string P, T;
	cin >> P >> T;
	
	int ps = P.size(), ts = T.size();
	vector<char> v;
	
	for(int i=0; i<ps; i++) {
		v.push_back(P[i]);
		
		if(v.size()>=ts && v[v.size()-1]==T[ts-1]) {
			int flag = 1;
			
			for(int j=0; j<ts; j++) {
				if(v[v.size()-ts+j] != T[j]) {
					flag = 0;
					break;
				}
			}
			
			if(flag) {
				for(int j=0; j<ts; j++) v.pop_back();
			}
		}
	}
	
	if(v.empty()) cout << "FRULA";
	else {
		for(int i=0; i<v.size(); i++) cout << v[i];
	}
 	
	 
	return 0;
}
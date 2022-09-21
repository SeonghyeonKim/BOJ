#include <iostream>
#include <map>
#include <string>
using namespace std;

int time[]={4,6,4,10};

int main(void) {
	int N;
	cin >> N;
	
	map<string, int> m;
	while(N--) {
		for(int i=0; i<4; i++) {
			for(int j=0; j<7; j++) {
				string s;
				cin >> s;
				
				if(s!="-") {
					if(m.find(s)==m.end()) {
						m.insert({s, time[i]});
					}
					else {
						m[s]+=time[i];
					}
				}		
			}
		}
	}
	
	int MIN=987654321, MAX=0;
	map<string, int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++) {
		MIN = min(MIN, it->second);
		MAX = max(MAX, it->second);
	}
	
	if(MAX-MIN<=12 || MAX-MIN==987654321) cout << "Yes";
	else cout << "No";
	
	return 0;
}
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <set>
#define psi pair<string, int>
using namespace std;

bool comp(string a, string b) {
	return a>b;
}

set<string> s[11];

int main(void) {
	string N;
	int K;
	cin >> N >> K;
	
	vector<string> v;
	queue<psi> q;
	q.push({N, 0});
	while(!q.empty()) {
		string c = q.front().first;
		int cnt = q.front().second;
		q.pop();
		
		if(cnt==K) {
			v.push_back(c);
			continue;
		}
		
		int si = c.size();
		for(int i=0; i<si; i++) {
			for(int j=i+1; j<si; j++) {
				string tmp = c;
				
				swap(tmp[i], tmp[j]);
				if(tmp[0]!='0') {
					if(s[cnt+1].find(tmp)==s[cnt+1].end()) {
						q.push({tmp, cnt+1});
						s[cnt+1].insert(tmp);	
					}	
				}	
			}
		}
		
	}
	
	if(v.empty()) cout << "-1";
	else {
		sort(v.begin(), v.end(), comp);
		cout << v[0];
	}
	
			
	return 0;
}	


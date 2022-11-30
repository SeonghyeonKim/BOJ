#include <iostream>
#include <set>
#include <string>
using namespace std;

set<string> s;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int ans=1;
	s.insert("ChongChong");
	for(int i=0; i<n; i++) {
		string a, b;
		cin >> a >> b;
		
		int f1=0, f2=0;
		if(s.find(a)!=s.end()) f1=1;
		if(s.find(b)!=s.end()) f2=1;
 		
 		if(f1==1 && f2==0) {
 			s.insert(b);
 			ans++;
		}
		if(f1==0 && f2==1) {
			s.insert(a);
 			ans++;
		} 
	}
	cout << ans;

	return 0;
}

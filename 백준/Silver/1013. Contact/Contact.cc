#include <iostream>
#include <string>
using namespace std;

void check(string s) {
	int idx = 0;
	int end = s.size();
	int flag = 0;
	while(idx<end) {
		if(s[idx]=='0') {
			if(flag) {
				if(idx+1!=end) idx++;
				else {
					cout << "NO\n";
					return ;
				}
			}	
			else {
				if(idx+1!=end && s[idx+1]=='1') {
					idx+=2;
				}
				else { 
					cout << "NO\n";
					return ;
				}
			}
		}
		else {
			if(flag) {
				if(idx+1!=end && s[idx+1]=='1') {
					idx++;
					flag = 2;
				}
				else if(flag==2 && idx+2!=end && s[idx+1]=='0' && s[idx+2]=='0'){
					flag = 1;
					idx+=3;
				}
				else if(idx+2!=end && s[idx+1]=='0' && s[idx+2]=='1') {
					flag = 0;
					idx+=3;
				}
				else if(idx+1!=end){
					cout << "NO\n";
					return ;
				}
				else {
					idx++;
					flag = 2;
				}
			}
			else {
				if(idx+2!=end && s[idx+1]=='0' && s[idx+2]=='0') {
					flag = 1;
					idx+=3;
				}
				else {
					cout << "NO\n";
					return ;
				}
			}
		}
	}
	if(flag!=1) cout << "YES\n";
	else cout << "NO\n";
	return ;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	while(N--) {
		string s;
		cin >> s;
		
		check(s);	
	}
	return 0;
}
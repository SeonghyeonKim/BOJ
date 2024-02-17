#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#define ll long long
#define piv pair<int, vector<int> >
using namespace std;

string arr[] = {
	"Never gonna give you up",
	"Never gonna let you down",
	"Never gonna run around and desert you",
	"Never gonna make you cry",
	"Never gonna say goodbye",
	"Never gonna tell a lie and hurt you",
	"Never gonna stop"
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, flag=1;
	cin >> N;
	cin.ignore();
	
	for(int i=0; i<N; i++) {
		string s;
		getline(cin, s);
		
		int x=1;
		for(int j=0; j<7; j++) {
			if(s==arr[j]) {
				x=0;
				break;
			}
		}
		
		if(x) {
			flag=0;
			break;
		}
	}
	
	if(flag) cout << "No";
	else cout << "Yes";
		
	return 0;
}
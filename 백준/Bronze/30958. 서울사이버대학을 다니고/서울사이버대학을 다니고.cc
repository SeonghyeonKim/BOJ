#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int N;
	string s;
	cin >> N;
	cin.ignore();
	getline(cin, s);
	
	vector<int> arr(26, 0);
	for(int i=0; i<N; i++) {
		if(s[i]>='a' && s[i]<='z') arr[s[i]-'a']++;
	}
	
	sort(arr.begin(), arr.end());
	cout << arr[25];
    
    return 0;
}
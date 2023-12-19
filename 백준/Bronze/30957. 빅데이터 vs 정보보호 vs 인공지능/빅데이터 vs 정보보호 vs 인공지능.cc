#include <iostream>
#include <vector>
#include <set>
#include <string>
#define ll long long
using namespace std;

int arr[3];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int N;
	string s;
	cin >> N >> s;
	
	for(int i=0; i<N; i++) {
		if(s[i]=='B') arr[0]++;
		else if(s[i]=='S') arr[1]++;
		else if(s[i]=='A') arr[2]++;
	}
	
	if(arr[0]==arr[1] && arr[1]==arr[2]) cout << "SCU";
	else if(arr[0]==arr[1] && arr[1]>arr[2]) cout << "BS";
	else if(arr[0]==arr[2] && arr[2]>arr[1]) cout << "BA";
	else if(arr[1]==arr[2] && arr[1]>arr[0]) cout << "SA";
	else if(arr[0]>arr[1] && arr[0]>arr[2]) cout << "B";
	else if(arr[1]>arr[0] && arr[1]>arr[2]) cout << "S";
	else if(arr[2]>arr[0] && arr[2]>arr[1]) cout << "A";
    
    return 0;
}
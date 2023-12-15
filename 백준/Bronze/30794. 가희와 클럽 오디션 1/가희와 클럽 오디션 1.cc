#include <iostream>
#include <vector>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int n;
	string s;
	
	cin >> n >> s;
	if(s == "miss") cout << 0;
	else if(s == "bad") cout << n*200;
	else if(s == "cool") cout << n*400;
    else if(s == "great") cout << n*600;
    else if(s == "perfect") cout << n*1000;
    
    return 0;
}
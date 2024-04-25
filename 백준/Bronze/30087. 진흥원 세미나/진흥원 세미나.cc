#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#define MOD 1000000007
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		string s;
		cin >> s;
		
		if(s=="Algorithm") cout << "204\n"; 
		else if(s=="DataAnalysis") cout << "207\n";
		else if(s=="ArtificialIntelligence") cout << "302\n";
		else if(s=="CyberSecurity") cout << "B101\n";
		else if(s=="Network") cout << "303\n";
		else if(s=="Startup") cout << "501\n";
		else if(s=="TestStrategy") cout << "105\n";
	}
	
	return 0;
}
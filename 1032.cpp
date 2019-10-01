#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	char s[51], pat[51];
	
	cin >> pat;
	for(int i=1; i<N; i++) {
		cin >> s;
		for(int j=0; pat[j]!='\0'; j++) {
			if(pat[j]!=s[j]) pat[j]='?';
		}	
	}
	cout << pat;
	
	return 0;
}

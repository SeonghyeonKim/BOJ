#include<iostream>
using namespace std;

int main(void)
{
	long long num[26] = {0 ,}, max=0, count=0;
	char str[1000001];
	
	cin >> str;
	
	for(long long i=0; str[i]!=0; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
		num[str[i]-'A']++;
	}
	
	for(int i=0; i<26; i++) {
		if(num[i] > num[max]) max = i;
	}
	
	for(int i=0; i<26; i++) {
		if(num[i] == num[max]) count++;
	}
	
	if(count > 1) cout << "?";
	else cout << (char)((char) max + 'A');
	
	return 0;
}


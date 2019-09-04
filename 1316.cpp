#include<iostream>
using namespace std;

int main(void)
{
	int T, count;
	char str[101], present;
	
	cin >> T;
	count = T;
	for(int i=0; i<T; i++) {
		cin >> str;
		int alpha[26] = {0,};
		
		present = str[0]; 
		for(int j=0; str[j]!=0; j++) {
			if(present!=str[j] && alpha[str[j]-'a']!=0) {
				count--;
				break;
			}
			else {
				alpha[str[j]-'a']++;
				present = str[j];
			}
		}
	}
	cout << count;
	
	return 0;
}


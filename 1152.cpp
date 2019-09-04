#include <iostream>
using namespace std;

int main(void)
{
	char str[1000000];
	int  count=0, is_space=1;
	
	scanf("%[^\n]s", str);
	
	for(int i=0; str[i]; i++) {
		if(str[i]==' ')
			is_space=1;
		else if(is_space) {
			is_space=0;
			count++;
		}
	}

	cout << count;	
	
	return 0;
}

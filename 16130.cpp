#include<iostream>
using namespace std;

int main(void)
{
	int N, sum_bee, check, year, judge;
	char bee[20][31];
	
	cin >> N;
	for(int i=0; i<N; i++) {
		check=0;
		sum_bee=0;
		year=0;
		judge=0;
		cin >> bee[i];
		for(int j=0; bee[i][j]!='\0'; j++) {
			if('0'<=bee[i][j] && bee[i][j]<='9') {
				sum_bee+=bee[i][j]-'0';
			}
			else if('A'<=bee[i][j] && bee[i][j]<='Z') {
				sum_bee+=bee[i][j]-'A'+10;
			}
			if(check<sum_bee/10) {
				if(sum_bee/10>4) {
					judge = 2;
					break;
				}
				else if(sum_bee/10==4) {
					judge = 1;
					break;	
				}	
				year+=sum_bee/10;
			}
			check = sum_bee/10;
		}
		if(judge==2) cout << year << "(09)\n";
		else if(judge==1) cout << year << "(weapon)\n";
		else cout << year << "\n";
	}
	
	return 0;
}

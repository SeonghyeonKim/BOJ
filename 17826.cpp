#include<iostream>
using namespace std;

int main(void)
{
	int score[50], sc, rank=1;
	for(int i=0; i<50; i++) {
		cin >> score[i];
	}
	cin >> sc;
	
	int i=0;
	while(score[i++]!=sc) rank++;
	
	if(rank<=5) cout << "A+";
	else if(rank<=15) cout << "A0";
	else if(rank<=30) cout << "B+";
	else if(rank<=35) cout << "B0";
	else if(rank<=45) cout << "C+";
	else if(rank<=48) cout << "C0";
	else if(rank<=50) cout << "F";
	
	return 0;
}

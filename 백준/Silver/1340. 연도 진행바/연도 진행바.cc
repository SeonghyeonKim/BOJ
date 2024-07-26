#include <iostream>
#include <string>
using namespace std;

char month[][20] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

int mon[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int a) {
	if((a%4==0 && a%100!=0) || a%400==0) return 1;
	return 0;
}

int main(void) {
    //cin.tie(NULL);
    //ios_base::sync_with_stdio(false);

	char s[20];
	int d, y, h, m;
	scanf("%s %d, %d %d:%d", s, &d, &y, &h, &m);
	int sum = 0, tmp = 0;
	
	for(int i=0; i<12; i++) {
		if(month[i][0] == s[0] && month[i][1] == s[1] && month[i][2] == s[2]) 
			tmp = i;
	}
		
	for(int i=0; i<tmp; i++) {
		if(i==1 && isLeap(y)) sum++;
		sum += mon[i];
	}
	
	sum += d-1;
	
	double ans = (sum * 24.0 * 60 + h*60.0 + m) / ((isLeap(y) ? 366.0 : 365.0) * 24.0 * 60) *100.0;
	printf("%.13f", ans);
	
    return 0;
}
#include<iostream>
using namespace std;

int main(void)
{
	double case0, case1, case2, case3;
	double A, B, C, D;
	cin >> A >> B >> C >> D;
	case0 = A/C+B/D;
	case1 = C/D+A/B;
	case2 = D/B+C/A;
	case3 = B/A+D/C;
	double max_value = max(max(case0, case1),max(case2,case3));
	
	if(max_value==case0) cout << "0";
	else if(max_value==case1) cout << "1";
	else if(max_value==case2) cout << "2";
	else cout << "3";
	
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N, M, Q;
	cin >> N >> M >> Q;
	
	// (그룹 번호, 회사 명) 
	vector<string> group[101];
	// (회사 명, 주가) 
	map<string, long long> company;
	// (회사 명, 보유 주식)
	map<string, long long> stock; 
	
	for(long long i=0; i<N; i++) {
		long long a, c;
		string b;
		cin >> a >> b >> c;
		
		group[a].push_back(b);
		company.insert({b, c});
		stock.insert({b, 0});
	}
	
	while(Q--) {
		int a;
		cin >> a;
		
		if(a==1) {
			string A;
			long long B;
			cin >> A >> B;
			
			if(company[A]*B <= M) {
				M -= company[A]*B;
				stock[A] += B;
			}
		}
		else if(a==2) {
			string A;
			long long B;
			cin >> A >> B;
			
			long long tmp = min(stock[A], B);
			M += company[A]*tmp;
			stock[A] -= tmp;
		}
		else if(a==3) {
			string A;
			long long C;
			cin >> A >> C;
			
			company[A] += C;
		}
		else if(a==4) {
			long long D, C;
			cin >> D >> C;
			
			for(int i=0; i<group[D].size(); i++) {
				company[group[D][i]] += C;
			}		
		}
		else if(a==5) {
			long long D, E;
			cin >> D >> E;
			
			for(int i=0; i<group[D].size(); i++) {
				company[group[D][i]] = company[group[D][i]] * (100 + E) / 100;
				company[group[D][i]] -= company[group[D][i]] % 10;
			}
		}
		else if(a==6) {
			cout << M << "\n";
		}
		else if(a==7) {
			long long tmp = 0;
			
			for(auto it=stock.begin(); it!=stock.end(); it++) {
				tmp += (company[it->first]) * (it->second);
			}	
			
			cout << tmp + M << "\n";	
		}
	}
	
	return 0;
}
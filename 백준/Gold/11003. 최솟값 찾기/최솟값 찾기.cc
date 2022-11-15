#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

struct comp{
	bool operator() (pii a, pii b) {
		return a.second > b.second;
	}
};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, L;	
	cin >> N >> L;
	
	priority_queue<pii, vector<pii>, comp> pq;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		pq.push({i,a});
		while(i-L+1 > pq.top().first) pq.pop(); 
		
		cout << pq.top().second << " ";
	}
	
	
	return 0;
}
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	priority_queue<int> pq;
	
	int T;
	cin >> T;
	
	while(T--) {
		int n;
		cin >> n;
			
		if(n!=0) {
			while(n--) {
				int temp;
				cin >> temp;
				
				pq.push(temp);
			}
		}	
		else {
			if(pq.empty()) {
				cout << "-1\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}
	
	return 0;
}

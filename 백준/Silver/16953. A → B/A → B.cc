#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
    int A, B;
    cin >> A >> B;

    queue<pair<long long, long long> > q;
    q.push({A, 0});
	
    while(!q.empty()) {
		long long num=q.front().first, cnt=q.front().second;
		q.pop();

        if(num==B) {
            cout << cnt+1;
            exit(0);
        }

		if(num*2<=B) q.push({num*2, cnt+1});
		if(num*10+1<=B) q.push({num*10+1, cnt+1});
	}
    cout << -1;

	return 0;
}
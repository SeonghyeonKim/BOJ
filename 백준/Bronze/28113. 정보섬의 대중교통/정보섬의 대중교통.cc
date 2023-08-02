#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A, B;
	cin >> N >> A >> B;
	
	if(A < B) cout << "Bus";
	else if(A > B) cout << "Subway";
	else cout << "Anything";
	
    return 0;
}

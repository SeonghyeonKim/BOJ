#include <iostream>

#include <vector>

using namespace std;

int main() {

	cin.tie(NULL);ios_base::sync_with_stdio(false);

int n;

cin >> n;

 vector<int> v(n);

for(int i=0; i<n; i++) cin >> v[i];

int ans = 0, tmp=0;

for(int i=0; i<n; i++) {

if(tmp < v[i]) {

ans=ans+v[i]-tmp;

tmp=v[i];

}

tmp = tmp - v[i] + v[i]/10;

}

cout << ans;

	return 0;

}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<char> v;

void dfs(int start, int end) {
	if (end - start == 1) return ;

	for (int i = start + (end - start) / 3; i<start+(end-start)/3*2; i++) {
		v[i] = ' ';
	}

	dfs(start, start + (end - start) / 3);
	dfs(start + (end - start) / 3, start + (end - start) / 3*2);
	dfs(start + (end - start) / 3*2, end);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	while (cin >> N) {
		v = vector<char> (int(pow(3, N)), '-');

		dfs(0, int(pow(3, N)));

		for (int i = 0; i<int(pow(3, N)); i++) {
			cout << v[i];
		}
		cout << "\n";
	}

	return 0;
}
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int dp[1003][1003];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string a, b;
	cin >> a >> b;
	a = "0"+a;
	b = "0"+b;
	
	for(int i=1; i<b.size(); i++) {
		for(int j=1; j<a.size(); j++) {
			if(a[j]==b[i]) dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	cout << dp[b.size()-1][a.size()-1] << "\n";
	
	int i = b.size()-1;
    int j = a.size()-1;
	stack<int> st;
 
    while (dp[i][j] != 0)
    {
        if (dp[i][j] == dp[i][j - 1])
            j--;
 
        else if (dp[i][j] == dp[i - 1][j])
            i--;
 
        else if (dp[i][j] - 1 == dp[i - 1][j - 1])
        {
            st.push(j);
            i--;
            j--;
        }
    }

    while (!st.empty())
    {
        cout << a[st.top()];
        st.pop();
    }
 
	return 0;
}
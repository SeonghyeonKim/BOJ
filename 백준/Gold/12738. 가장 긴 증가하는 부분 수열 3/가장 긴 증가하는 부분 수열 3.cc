#include <iostream>
#include <vector>
using namespace std;

int arr[1000001][2];

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
	cin >> N;

	vector<int> v;
	
    for(int i=1; i<=N; i++) cin >> arr[i][0];

    for(int i=1; i<=N; i++) {
		if(v.size()==0 || v.back()<arr[i][0]) {
			v.push_back(arr[i][0]);
            arr[i][1] = v.size()-1;
		}
		else {
			int left = 0;
            int right = v.size()-1;

            while(left<right) {
                int mid = (left + right)/2;

                if(v[mid]>=arr[i][0]) right = mid;
                else left = mid+1;
            }
            v[left] = arr[i][0];
            arr[i][1] = left;
		}
	}
	cout << v.size() << "\n";
	
	return 0;
}
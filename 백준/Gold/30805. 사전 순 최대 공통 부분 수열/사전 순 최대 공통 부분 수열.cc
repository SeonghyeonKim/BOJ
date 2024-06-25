#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N;
	vector<int> A(N);
	for(int i=0; i<N; i++) cin >> A[i];
	cin >> M;
	vector<int> B(M);
	for(int i=0; i<M; i++) cin >> B[i];
	
	vector<int> ans;
	int idx1=-1, idx2=-1;
	for(int k=100; k>0; k--) {
		int flag = 0;
		int tmp1, tmp2;
		
		for(int i=idx1+1; i<N; i++) {
			if(A[i]==k) {
				tmp1 = i;
				flag++;
				break;
			}
		}
		
		for(int i=idx2+1; i<M; i++) {
			if(B[i]==k) {
				tmp2 = i;
				flag++;
				break;
			}
		}
		
		if(flag==2) {
			ans.push_back(k);
			idx1 = tmp1;
			idx2 = tmp2;
			k++;
		}
	}
	
	cout << ans.size() << "\n";
	for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
	
	return 0;
}

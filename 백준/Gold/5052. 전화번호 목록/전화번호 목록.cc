#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct TRIE{
	bool Finish;
	
	TRIE *Node[10];
	
	TRIE() {
		Finish = false;
		for(int i=0; i<10; i++) Node[i] = NULL;
	}	
	
	~TRIE() {
		for(int i=0; i<10; i++) {
			if(Node[i]) delete Node[i];
		}
	} 

	void Insert(string s) {
		if(s == "") {
			Finish = true;
			return ;
		}
		
		int Cur = s[0] - '0';
		if(Node[Cur] == NULL) Node[Cur] = new TRIE();
		Node[Cur]->Insert(s.substr(1)); 
	} 
	
	bool Find(string s) {
		if(s == "") {
			for(int i=0; i<10; i++) {
				if(Node[i] != NULL) return true;
			}
			return false;
		}
		
		int Cur = s[0] - '0';
		if(Node[Cur] == NULL) return false;
		return Node[Cur]->Find(s.substr(1));
	} 
};

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int N, flag=0;
		cin >> N;
		
		TRIE *root = new TRIE();
		vector<string> v(N);
		
		for(int i=0; i<N; i++) 
			cin >> v[i];
			
		sort(v.begin(), v.end(), greater<string> ());
		
		for(int i=0; i<N; i++) {
			if(root->Find(v[i])) flag = 1;	
			root->Insert(v[i]);	
		}
		
		if(flag) cout << "NO\n";
		else cout << "YES\n";
	}
		
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct TRIE{
	bool Finish;
	
	TRIE *Node[26];
	
	TRIE() {
		Finish = false;
		for(int i=0; i<26; i++) Node[i] = NULL;
	}	
	
	~TRIE() {
		for(int i=0; i<26; i++) {
			if(Node[i]) delete Node[i];
		}
	} 

	void Insert(string s) {
		if(s == "") {
			Finish = true;
			return ;
		}
		
		int Cur = s[0] - 'a';
		if(Node[Cur] == NULL) Node[Cur] = new TRIE();
		Node[Cur]->Insert(s.substr(1)); 
	} 
	
	bool Find(string s) {
		if(s == "") return true;
		
		int Cur = s[0] - 'a';
		if(Node[Cur] == NULL) return false;
		return Node[Cur]->Find(s.substr(1));
	} 
};

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	TRIE *root = new TRIE();
		
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		root->Insert(s);
	}
	
	int cnt=0;
	for(int i=0; i<M; i++) {
		string s;
		cin >> s;
		
		if(root->Find(s)) cnt++;
	}
	
	cout <<cnt;
	
	return 0;
}
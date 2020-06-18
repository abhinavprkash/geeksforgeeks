
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

struct trie {
	map<char, trie*> children;
};

bool noPrefix(trie *t, string &word) {
	trie *cur = t;
	string prefix;
	for (int i = 0; i < word.length(); ++i)
	{
		prefix += word[i];

		if (cur->children['$']) {
			return false;
		}

		if (!cur->children[word[i]]) {
			cur->children[word[i]] = new trie;
		}

		cur = cur->children[word[i]];
	}
	if (cur->children.size() > 0) {
		return false;
	}
	cur->children['$'] = new trie;

	return true;
}

int main()
{
	int n;
	cin >> n;
	trie *dictionary = new trie;

	for (int i = 0; i < n; ++i) {
		string word;
		cin >> word;

		if (!noPrefix(dictionary, word)) {
			cout << "BAD SET" << endl << word;
			return 0;
		}
	}

	cout << "GOOD SET";

	return 0;
}
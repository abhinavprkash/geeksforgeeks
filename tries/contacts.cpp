
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

struct Node
{
	Node* next[26];
	bool leaf;
	int total;
	Node() {
		for (int i = 0; i < 26; ++i)
		{
			next[i] = NULL;
		}
		leaf = false;
		total = 0;
	}
};

Node* head = new Node();

void add(string s) {
	int n = s.size(), i = 0;
	Node* curr = head;
	while (i < n) {
		int a = s[i] - 97;
		if (curr->next[a] == NULL)
		{
			Node* temp = new Node();
			curr->next[a] = temp;
		}
		curr = curr->next[a];
		curr->total = curr->total + 1;
		i++;
	}

	curr->leaf = true;
}

int find(string s) {
	int n = s.size(), i = 0;

	Node* curr = head;

	while (i < n) {
		int a = s[i] - 97;
		if (curr->next[a] == NULL) {
			return 0;
		}
		curr = curr->next[a];
		i++;
	}

	if (curr == NULL) {
		return 0;
	}

	return curr->total;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int a0 = 0; a0 < n; a0++) {
		string op;
		string contact;
		cin >> op >> contact;
		if (op == "add") {
			add(contact);
		}
		else if (op == "find") {
			cout << find(contact) << endl;
		}
	}
	return 0;
}


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
	int data;
	struct Node *next;
}*first = NULL;


void create(int A[], int n) {
	int i;
	struct Node *t, *last;
	first = (struct Node *)malloc(sizeof(struct Node ));
	first->data = A[0];
	first->next = NULL;
	last - first;

	for (int i = 1; i < n; ++i)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last-> next = t;
		last = t;
	}
}


void Display(struct Node *p) {
	while (p != NULL) {
		cout << p->data;
		p = p->next;
	}
}


int count(struct Node *p)
{
	int l = 0;
	while (p)
	{
		l++;
		p = p->next;
	}
	return l;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{

	}
	return 0;
}

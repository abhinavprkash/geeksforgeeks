#include <bits/stdc++.h>

using namespace std;

int query(int* tree, int start, int end, int treeNode, int left, int right){
	
	//Completely out
	if (left>end || right<start)
	{
		return INT_MAX;
	}

	//Completely inside
	if (start>=left && end<=right)
	{
		return tree[treeNode];
	}

	//Partially inside
	int mid = (start+end)/2;

	int l = query(tree, start, mid, 2*treeNode+1, left, right);
	int r= query(tree, mid+1, end, 2*treeNode+2, left, right);

	return min(l, r);
}


void update(int* arr, int* tree, int start, int end, int treeNode, int idx, int value){
	int mid = (start+end)/2;

	if (start == end)
	{
		arr[idx] = value;
		tree[treeNode] = value;
		return;
	}

	if (idx<=mid)
	{
		update(arr, tree, start, mid, 2*treeNode+1, idx, value);
	}else{

		update(arr, tree, mid+1, end, 2*treeNode+2, idx, value);
	}

	tree[treeNode] = min(tree[2*treeNode+1], tree[2*treeNode+2]);
}


void create(int* arr, int* tree, int start, int end, int treeNode){
	if (start == end)
	{
		tree[treeNode] = arr[start];
		return;
	}

	int mid = (start+end)/2;

	create(arr, tree, start, mid, 2*treeNode+1);
	create(arr, tree, mid+1, end, 2*treeNode+2);

	tree[treeNode] = min(tree[2*treeNode+1], tree[2*treeNode+2]);
	return;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	int n, q;
	cin>>n>>q;

	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int* tree = new int[4*n];

	create(arr, tree, 0, n-1, 0);

	

	while(q--){
		char a;
		int b, c;
		cin>>a>>b>>c;

		if (a=='q')
		{
			cout << query(tree, 0, n-1, 0, b-1, c-1) << '\n';
		}else{
			update(arr, tree, 0, n-1, 0, b-1, c);
		}

	}


	return 0 ; 



}
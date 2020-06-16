#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, sum=0,boundrySum=0;
	cin>>n;
	int ** arr =  new int*[n];
	for (int i = 0; i < n; i++){
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin>>arr[i][j];
		}
	}
	for (int col = 0; col < n; col++)
	{
		for (int row = 0; row < n; row++){
			if (row == 0 || col == 0 || row == n - 1 || col == n - 1) {
                boundrySum = boundrySum + arr[row][col];
            }
        }
    }
    int diagonal1Sum = 0, diagonal2Sum = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == col)
                diagonal1Sum = diagonal1Sum + arr[row][col];

            else if ((row + col) == (n - 1))
                diagonal2Sum = diagonal2Sum + arr[row][col];
        }
    }
    sum = boundrySum + diagonal1Sum + diagonal2Sum
            - (arr[0][0] + arr[0][n - 1] + arr[n - 1][0] + arr[n - 1][n - 1]);
    cout<<sum;
	for (int i = 0; i < n; i++)
	{
		delete arr[i];
	}
	delete[] arr;
	return 0;
}
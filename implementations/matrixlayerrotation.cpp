#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void matrixRotation(vector<vector<int> > &A, int R);
};
Solution::Solution(){}
int min(int a, int  b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}

void Solution::matrixRotation(vector<vector<int> > &A, int R)
{
    int M = A.size();
    int N = A[0].size();

    int NumberofRings = min(M, N)/2;
    for(int iter = 0; iter < NumberofRings; iter++)
    {
        int numRotation = R%(2*(M+N-4*iter)-4);
        for(int rotation = 0; rotation < numRotation; rotation++)
        {
            for(int jter = iter; jter < N-iter-1; jter++)
            {
                int temp = A[iter][jter];
                A[iter][jter] = A[iter][jter+1];
                A[iter][jter+1] = temp;
            }
            for(int jter = iter; jter < M-iter-1; jter++)
            {
                int temp = A[jter][N-iter-1];
                A[jter][N-iter-1] = A[jter+1][N-iter-1];
                A[jter+1][N-iter-1] = temp;
             }
            for(int jter = N-iter-1; jter > iter; jter--)
            {
                int temp = A[M-iter-1][jter];
                A[M-iter-1][jter] = A[M-iter-1][jter-1];
                A[M-iter-1][jter-1] = temp;
            }
            for(int jter = M-iter-1; jter > iter+1; jter--)
            {
                int temp = A[jter][iter];
                A[jter][iter] = A[jter-1][iter];
                A[jter-1][iter] = temp;
            }
        }
    }
    for(vector<vector<int> >::iterator iter = A.begin(); iter != A.end(); iter++)
    {
        for(vector<int>::iterator jter = iter->begin(); jter != iter->end(); jter++)
        {
            cout << *jter << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int m, n, R;
    cin >> m >> n >> R;
    vector<vector<int> > A;
    for(int iter = 0; iter < m; iter++)
    {
        vector<int> temp;
        for(int jter = 0; jter < n ;jter++)
        {
            int data;
            cin >> data;
            temp.push_back(data);
        }
        A.push_back(temp);
    }
    sol.matrixRotation(A, R);
    return 0;
}
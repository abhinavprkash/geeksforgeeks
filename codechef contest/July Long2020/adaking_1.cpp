#include <bits/stdc++.h>
using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;

/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
*/

#define N 8

void solve(ll test_case)
{
    int k;
    cin >> k;
    k--;
    queue<vi> q_board;
    char board[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = 'X';
        }
    }
    board[0][0] = 'O';
    q_board.push({0, 0});

    while (!q_board.empty() && k > 0)
    {
        vi cell = q_board.front();
        q_board.pop();

        vi right = {cell[0] + 1, cell[1]};
        vi bottom = {cell[0], cell[1] + 1};
        vi diag = {cell[0] + 1, cell[1] + 1};

        // Try right
        if (right[0] >= 0 && right[0] < N && right[1] >= 0 && right[1] < N)
        {
            if (board[right[0]][right[1]] == 'X')
            {
                board[right[0]][right[1]] = '.';
                q_board.push({right[0], right[1]});
                k--;
                if (k == 0)
                    break;
            }
        }

        // Try bottom
        if (bottom[0] >= 0 && bottom[0] < N && bottom[1] >= 0 && bottom[1] < N)
        {
            if (board[bottom[0]][bottom[1]] == 'X')
            {
                board[bottom[0]][bottom[1]] = '.';
                q_board.push({bottom[0], bottom[1]});
                k--;
                if (k == 0)
                    break;
            }
        }

        // Try diag
        if (diag[0] >= 0 && diag[0] < N && diag[1] >= 0 && diag[1] < N)
        {
            if (board[diag[0]][diag[1]] == 'X')
            {
                board[diag[0]][diag[1]] = '.';
                q_board.push({diag[0], diag[1]});
                k--;
                if (k == 0)
                    break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << "";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, t1 = 0;
    cin >> t;
    while (t1 < t)
    {
        solve(t1 + 1);
        t1++;
    }
} 
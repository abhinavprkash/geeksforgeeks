
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
int main()
{
	ios::sync_with_stdio(false);
	int N;
    cin >> N;

    vvi colors(400000);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        colors[a].emplace_back(b);
        colors[b].emplace_back(a);
    }

    int sum = 0;
    vector<bool> flag(colors.size(), false);
    for (int i = 0; i < colors.size(); i++) {
        if (flag[i] || colors[i].size() == 0) {
            continue;
        }
        bool loop = false;
        int num = 0;
        queue<int> que;
        que.push(i);
        while (!que.empty()) {
            auto idx = que.front();
            que.pop();
            if (flag[idx]) {
                loop = true;
                continue;
            }
            flag[idx] = true;
            num++;
            int cnt = 0;
            for (auto next : colors[idx]) {
                if (!flag[next]) {
                    que.push(next);
                } else {
                    cnt++;
                }
            }
            if (cnt > 1) {
                loop = true;
            }
        }
        // cout << i << " , " << num << " , " << loop << endl;
        if (!loop) {
            num--;
        }
        sum += num;
    }
    cout << sum << endl;
}

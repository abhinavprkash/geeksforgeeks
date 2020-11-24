// * As per culinary standard, a death forcefield surrounds the kitchen.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstring>
#include <cassert>
#include <unordered_map>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
typedef long long ll;
const ll A = 1201021;
const ll B = 2327138083;
const int N = 100010;

int res[N];

struct Node {
    Node* sons[26];
    unordered_map<ll, int> m;
    unordered_map<ll, int>* myb;
    vector<pair<int, ll>> q;
    //string dbg;
    Node() {
        memset(sons, 0, sizeof(sons));
    };

    ll add(string &s, int i) {
        if(i == s.size()) {
            m[0]++;
            return 0;
        }
        int x = s[i] - 'a';
        if(sons[x] == 0) {
            sons[x] = new Node();
            //sons[x]->dbg = dbg + s[i];
        }
        ll h = sons[x]->add(s, i + 1);
        h = (h * A + x + 1) % B;
        m[h]++;
        //cout << s.substr(0, i) << "->" << h << endl;
        return h;
    }

    void addQ(string &s, int i, pair<int, ll> h) {
        if(i == s.size()) {
            q.push_back(h);
            //cout << s << ": " << h.second << endl;
        } else {
            if(sons[s[i] - 'a'] != 0)
                sons[s[i] - 'a']->addQ(s, i + 1, h);
        }
    }

    void solve() {
        unordered_map<ll, int>* best = &m;
        rep(i, 0, 26) if(sons[i] != 0) {
            sons[i]->solve();
            if(sons[i]->myb->size() > best->size()) {
                best = sons[i]->myb;
            }
        }
        if(best != &m) {
            for(auto x : m) (*best)[x.first] += x.second;
        }
        rep(i, 0, 26) if(sons[i] != 0) {
            if(best != sons[i]->myb) {
                for(auto x : *(sons[i]->myb)) {
                    (*best)[x.first] += x.second;
                }
            }
        }
        //cout << dbg << endl;
        //for(auto x : *best) cout << x.first << ": " << x.second << endl;
        //cout << endl;
        rep(i,0,q.size()){
            res[q[i].first] = (*best)[q[i].second];
        }
        myb = best;
    }
};

int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    Node root;
    //root.dbg = "";
    rep(i, 0, n) {
        string s;
        cin >> s;
        root.add(s, 0);
    }

    rep(j, 0, q) {
        string s;
        cin >> s;
        string a, b;
        rep(i, 0, s.size()) {
            if(s[i] == '*') {
                a = s.substr(0, i);
                b = s.substr(i + 1);
                break;
            }
        }
        ll h = 0;
        per(i, 0, b.size()) h = (h * A + b[i] - 'a' + 1) % B;
        root.addQ(a, 0, {j, h});
    }
    root.solve();
    rep(i, 0, q) cout << res[i] << endl;
    return 0;
}

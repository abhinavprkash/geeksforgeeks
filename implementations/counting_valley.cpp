#include <bits/stdc++.h>
using namespace std;

int countingValleys(int n, string s);
{
    int level = 0;
    int valleys = 0;
    for (const char &c : s)
    {
        if (c == 'U')
        {
            if (level == -1)
                valleys++;
            level++;
        }
        else
        {
            level--;
        }
    }

    return valleys;
}
  
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}

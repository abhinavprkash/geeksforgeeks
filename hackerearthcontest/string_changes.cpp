#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    char s[n];
    int count =0;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        s[i] = toupper(s[i]);
    }
    for (int i = 1; i < n; i++)
    {
            if (s[i] != s[i + 1] && s[i] == s[i - 1])
            {
                count++;
                s[i + 1] = s[i];
            }
            else if (s[i] != s[i - 1] && s[i] == s[i + 1])
            {
                count++;
                s[i - 1] = s[i];
            }
            else
            {
                count = 0;
            }
            
    }
    cout << count;
    return 0;
    }
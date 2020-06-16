#include <bits/stdc++.h>

using namespace std;

bool skillSort(vector<int> &skills, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    int n = skills.size();
    int mid = (start + end) / 2;
    int left = skillSort(skills, start, mid);
    int right = skillSort(skills, mid + 1, end);
    if (left != 1 || right != 1)
    {
        return 0;
    }
    if (skills[mid] - skills[mid + 1] > 1)
    {
        return 0;
    }
    if (skills[mid + 1] < skills[mid])
    {
        swap(skills[mid], skills[mid + 1]);
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> skills;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            skills.push_back(temp);
        }
        if (skillSort(skills, 0, n - 1) == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

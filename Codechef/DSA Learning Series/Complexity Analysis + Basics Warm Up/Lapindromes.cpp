#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unordered_map<char, int> umap;
    string s;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        cin >> s;
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            umap[s[i]]++;
            umap[s[j]]--;
            i++;
            j--;
        }
        for (auto x : umap)
            if (x.second != 0)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        if (flag == 0)
            cout << "YES" << endl;
        umap.clear();
    }
    return 0;
}

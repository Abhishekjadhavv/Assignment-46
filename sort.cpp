// Sort a given map in descending order based on values instead of keys in C++ STL.
// Key value
// 1 6
// 2 8
// 6 3
// 8 2

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> &p, pair<int, int> &p2)
{
    return p.second > p2.second;
}

void sort(map<int, int> &mp)
{
    vector<pair<int, int>> v;

    for (auto &it : mp)
    {
        v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    map<int, int> mp;
    mp[1] = 16;
    mp[2] = 48;
    mp[3] = 20;
    mp[4] = 78;

    sort(mp);
    return 0;
}
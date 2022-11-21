
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 89));
    mp.insert(pair<int, int>(2, 75));
    mp.insert(pair<int, int>(3, 45));
    mp.insert(pair<int, int>(4, 31));

    auto it = mp.find(3);
    if (it != mp.end())
    {
        mp[it->first] = 50;
    }

    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << "key : " << it->first << ", value : " << it->second << endl;
    }

    return 0;
}
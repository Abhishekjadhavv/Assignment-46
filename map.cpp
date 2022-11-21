// Create a map, insert at least 5 pairs of keys and values and print it.
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 20));
    mp.insert(pair<int, int>(2, 57));
    mp.insert(pair<int, int>(3, 98));
    mp.insert(pair<int, int>(4, 28));
    mp.insert(pair<int, int>(5, 78));
    map<int, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        cout << "key : " << it->first << ", value : " << (*it).second << endl;
        it++;
    }
    return 0;
}
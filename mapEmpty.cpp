// Create a map, use a member function to tell whether a map is empty or not and then
// insert some pairs into the map and find the size of map.

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 49));
    mp.insert(pair<int, int>(2, 89));
    mp.insert(pair<int, int>(3, 65));
    mp.insert(pair<int, int>(4, 36));
    if (mp.empty())
    {
        cout << "Map is empty" << endl;
    }
    else
    {
        cout << "Map is not empty" << endl;
    }

    mp.insert(pair<int, int>(5, 98));
    mp.insert(pair<int, int>(6, 78));
    mp.insert(pair<int, int>(7, 54));

    cout << "Size of map is " << mp.size() << endl;

    return 0;
}
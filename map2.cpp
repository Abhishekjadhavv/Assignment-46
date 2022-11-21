// Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen.

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert(pair<string, int>("Abhishek", 80));
    mp.insert(pair<string, int>("sagar", 70));
    mp.insert(pair<string, int>("Akshay", 98));
    mp.insert(pair<string, int>("vicky", 56));

    map<string, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        cout << "Name : " << it->first << ", Marks : " << it->second << endl;
        it++;
    }
    return 0;
}

// Create a map, insert some pairs and print all elements in reverse order using rbegin
// and rend function.

#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main(){
     map<int ,int> mp({
        {1,20},
        {2,36},
        {6,87},
        {4,56},

     });
    
    for(auto it = mp.rbegin();it != mp.rend();it++){
       cout<<"key : "<<it->first<<", value : "<<it->second<<endl; 
    }
    return 0;
}
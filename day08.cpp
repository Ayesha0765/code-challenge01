#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int entries = 0;
    cin >> entries;
    cin.ignore();
    
    map<string, int> myMap;
    for(int i = 0; i < entries; i++)
    {
        string name, number;
        getline(cin, name, ' ');
        getline(cin, number, '\n');

        myMap[name] = stoi(number);
    }

    string query;
    while(getline(cin, query))
    {
        if(myMap.find(query) != myMap.end())
            cout << query << "=" << myMap[query] << endl;
        else
            cout << "Not found" << endl;
    }  
    return 0;
}


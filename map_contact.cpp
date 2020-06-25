#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(){
    int n, num;
    string name;
    map<string, int> contact;
    map<string, int>::iterator itr;

    cin >> n;
    int n2 = n;
    while(n--){
        cin >> name >> num;
        contact.insert(pair<string, int>(name, num));
    }

    string s;

    for(int i = 0; i < n2; i++){
        cin >> s;
        itr = contact.find(s);
        if(itr ->first == s)
            cout << itr->first << "=" << itr->second << endl;
        else 
            cout << "Not found" << endl;
    }
        
    return 0;
}
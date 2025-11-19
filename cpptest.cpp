#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> names;
    string input;
    for(int i = 0; i < 5; i++){
        cin >> input;
        names.push_back(input);
    }
    
    for(int i = 0; i < 5; i++){
        cout << names.back() << " ";
        names.pop_back();
    }
    

    cout << endl;
    return 0;
}
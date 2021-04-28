#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int fuel = 0;
    vector<int> mass;
    while(true) {
        string n;
        getline(cin, n);
        if(n == "") {
            break;
        }
        else {
            mass.push_back(stoi(n));
        }
    }
    for(int i = 0; i < mass.size(); i++) {
        fuel += mass[i] / 3 - 2;
    }
    cout << fuel << endl;
}
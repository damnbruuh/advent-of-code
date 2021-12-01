#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    string in;
    vector<int> depths;
    int increases;

    while(getline(cin, in)) {
        if(in == "") {
            break;
        }
        else {
            depths.push_back(stoi(in));
        }
    }

    for(int i = 1; i < depths.size(); i++) {
        if(depths[i] > depths[i - 1]) {
            increases++;
        }
    }
    cout << increases << endl;
    return 0;
}
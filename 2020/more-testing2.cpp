#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {

    string line;
    vector<string> vin;

    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            vin.push_back(line);
        }
    }
    for(int i = 0; i < vin.size(); i++) {
        cout << vin[i] << endl;
    }

    if(vin[1] == "") {
        cout << "TRUE" << endl;
    }
    return 0;
}
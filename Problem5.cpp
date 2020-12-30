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
    
    return 0;
}
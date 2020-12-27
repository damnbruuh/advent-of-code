#include <vector>
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

    vin[0] += vin[0];
    vin[1] += vin[1];

    cout << vin[0] << endl;
    cout << vin[1] << endl;
    
    return 0;
}
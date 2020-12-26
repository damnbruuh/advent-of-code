#include <vector>
#include <iostream>

using namespace std;

int main() {

    string line;
    vector<string> vin;
    
    // get input
    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            vin.push_back(line);
        }
    }
    // determine n times to repeat pattern
    int size = vin.size();
    int repeating = size * 3;

    int rightslopecounter = 3;
    int trees = 0;

    // for each line
    for(int i = 0; i < size; i++) {
        string str = vin[i];            
        // add str to each line
        for(int x = 0; x < repeating; x++) {
            vin[i] += str;
        }
        // determine if string hit a tree
        if(vin[i][rightslopecounter] == '#') {
            trees++;
        }
        rightslopecounter += 3;
    }
    cout << trees << endl;
    return 0;
}
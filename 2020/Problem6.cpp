#include <vector>
#include <iostream>
#include <set>

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
    // empty line
    vin.push_back("");

    vector<string> group;
    set<char> questions;
    int sum;
    for(int i = 0; i < vin.size(); i++) {
    // input loop
        if(vin[i] == "") {
            // line loop
            for(int x = 0; x < group.size(); x++) {
                // char loop
                for(int k = 0; k < group[x].size(); k++) {
                    questions.insert(group[x][k]);
                }
            }
            int elements = questions.size(); 
            sum += elements;
            // end of group
            group.clear();
            questions.clear();
        }
        else {
            group.push_back(vin[i]);
        }

    }
    
    cout << sum << endl;

    return 0;
}
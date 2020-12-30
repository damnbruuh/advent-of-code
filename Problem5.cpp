#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string line;
    vector<string> vin;
    vector<int> ids;
    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            vin.push_back(line);
        }
    }

    for(int i = 0; i < vin.size(); i++) {
        string str = vin[i];
        string row = str.substr(0, 7);
        string column = str.substr(7, 3);

        for(int x = 0; x < row.size(); x++) {

            if(row[x] == 'F') {
                row[x] = '0';
            }
            else {
                row[x] = '1';
            }
        }

        for(int k = 0; k < column.size(); k++) {
            if(column[k] == 'L') {
                column[k] = '0';
            }
            else {
                column[k] = '1';
            }
        }

        int rown = stoi(row, 0, 2);
        int coln = stoi(column, 0, 2);

        int seat = rown * 8 + coln;

        ids.push_back(seat);
    }

    sort(ids.begin(), ids.end(), greater<int>());

    cout << ids[0] << endl;
    return 0;


}
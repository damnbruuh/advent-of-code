#include <iostream>
#include <string>

using namespace std;

int main() {

    string n;
    cin >> n;

    string row = n.substr(0, 7);
    string column = n.substr(7, 3);

    // replace rows and columns with binary
    for(int i = 0; i < row.size(); i++) {

        if(row[i] == 'F') {
            row[i] = '0';
        }
        else {
            row[i] = '1';
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

    cout << row << endl;
    cout << column << endl;

    int rown = stoi(row, 0, 2);
    int coln = stoi(column, 0, 2);

    cout << rown << endl;
    cout << coln << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int determine_increases(const vector<int> &vec) {
    int increases = 0;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] > vec[i - 1]) {
            increases++;
        }
    }
    return increases;
}

int main() {

    string in;
    vector<int> depths;
    vector<int> sums;

    while(getline(cin, in)) {
        if(in == "") {
            break;
        }
        else{
            depths.push_back(stoi(in));
        }
    }

    int i = 0;
    while(i < depths.size() - (depths.size() % 3)) {
        sums.push_back(depths[i] + depths[i + 1] + depths[i + 2]);
        i++;
    }

    cout << determine_increases(sums) << endl;
    return 0;
}
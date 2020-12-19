#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<int> vin;
    string in;
    
    bool var = true;

    while(var == true) {

        cin >> in;

        if(in == "stop") {

            var = false;

            cout << "Stopped receiving input.\n";

        }

        else {

            vin.push_back(stoi(in));

            cout << "Received " + in + " as input\n"; 

        } 
    }
}


#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int main() {
	
	string in;
	vector<string> inputVec;

	fstream f;
	f.open("day1.txt");
	if(f.is_open()) {
		while(getline(f, in)) {
			inputVec.push_back(in);
		}
	}

	int max = 0;
	int counter = 0;
	for(int i = 0; i < inputVec.size(); i++) {
		if(inputVec[i] != "") {
			counter += stoi(inputVec[i]);
		}
		else {
			if(counter > max) {
				max = counter;
			}
			counter = 0;

		}	
	}
	cout << max << endl;
	return 0;
}

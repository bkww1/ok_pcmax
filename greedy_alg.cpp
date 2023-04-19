#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numArray;
    int num;

    ifstream data_file("dane.txt");
    if (!data_file) {
        cerr << "Can't open file";
        exit(1);
    }

    while (data_file >> num) {
        numArray.push_back(num);
    }

    data_file.close();
    for (int i = 0; i < numArray.size(); i++) {
        cout << numArray[i] << " ";
    }
    cout << endl;

    return 0;
}

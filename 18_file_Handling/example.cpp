#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ofstream file;
    vector<int> v; 
    cout << "Enter element: ";
    for (int i = 0; i < 5; i++) {
        int element;       
        cin >> element;
        v.push_back(element); 
    }
    file.open("example.txt"); 


    file << "Unsorted vector: \n";
    for (int i = 0; i < v.size(); i++) {
        file << v[i] << " "; // Write to the file
    }
    file << endl;


    sort(v.begin(), v.end()); // Sort the vector


    file << "Sorted vector: \n";
    for (int i = 0; i < v.size(); i++) {
        file << v[i] << " "; // Write to the file
    }
    file << endl;

    
    file.close(); // Close the file
    return 0;
}
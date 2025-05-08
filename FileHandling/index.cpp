// Writing to a File

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
//     ofstream outFile("example.txt");  // creates/opens file
//     if (outFile.is_open()) {
//         outFile << "Hello, File Handling in C++!\n";
//         outFile << "This is a second line.\n";
//         outFile.close();  // always close the file
//     } 
//     else {
//         cout << "Unable to open file for writing.\n";
//     }
//     return 0;
// }





// Reading from a File

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main() {
//     ifstream inFile("example.txt");
//     string line;
//     if (inFile.is_open()) {
//         while (getline(inFile, line)) {
//             cout << line << endl;
//         }
//         inFile.close();
//     } 
//     else {
//         cout << "Unable to open file for reading.\n";
//     }
//     return 0;
// }



// Read & Write (Using fstream)

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("example.txt", ios::in | ios::out | ios::app);  // read + write + append
    if (file.is_open()) {
        file << "Adding a line using fstream.\n";
        file.seekg(0);  // move cursor to beginning to read
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "File could not be opened.\n";
    }
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
        cout << "Enter a sentence: ";
    getline(cin, name);
        cout << "Length of the sentence: " << name.length() << endl;
    size_t pos = name.find("C++");
        if (pos != string::npos) {
            string part = name.substr(pos, 3);
            cout << "Found: " << part << endl;
            name.replace(pos, 3, "Programming");
            cout << "New sentence: " << name << "\n";
        } else {
            cout << "Not found!" << endl;
    }

    return 0;
}
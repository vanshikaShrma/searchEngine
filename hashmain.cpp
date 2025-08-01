#include <iostream>
#include "../Pro/HashTable.h"
using namespace std;

int main() {
     HashTable<string, string> ht;

    ht.insert("name", "Vanshika");
    ht.insert("city", "Delhi");
    ht.insert("lang", "C++");

    ht.display();

    cout << "\nRemoving key 'city':\n";
    ht.remove("city");

    ht.display();

    string value;
    if (ht.search("lang", value))
        cout << "Found: " << value << endl;
    else
        cout << "Not found\n";

    return 0;
}
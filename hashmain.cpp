#include <iostream>
#include "../Pro/HashTable.h"
using namespace std;

int main() {
    HashTable<string, int> ht;

    ht.insert("apple", 50);
    ht.insert("banana", 30);
    ht.insert("cherry", 80);

    ht.display();

    int val;
    if (ht.search("banana", val))
        cout << "Found! Value: " << val << endl;
    else
        cout << "Not Found\n";

    return 0;
}
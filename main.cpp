#include<iostream>
#include "../Pro/LinkedListHeader.h"
using namespace std;
int main(){
    List<int> myList;
    cout<<"Start";
    myList.addAtStart(0);
    myList.addAtStart(1);
    myList.addAtStart(2);
    myList.display();
    cout<<"End";
    return 0;
}
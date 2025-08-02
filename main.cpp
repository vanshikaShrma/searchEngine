#include<iostream>
#include "../Pro/LinkedListHeader.h"
using namespace std;
int main(){
    List<int> myList;
    cout<<"Start";
    myList.addAtStart(0);
    myList.addAtLast(1);
    myList.addAtLast(2);
    myList.deleteatIndex(1);
    myList.display();
    cout<<"End";
    return 0;
}
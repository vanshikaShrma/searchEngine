#include<iostream>
using namespace std;
template <typename T>
class Node{
    public : 
    T val;
    Node* next;
    //Constructors
    Node(T val) {
        this -> val = val;
        this -> next = NULL;
    }
};

template<typename T>
class List {
    Node<T>* head = NULL;
    public : 
    //add Node
    void addAtStart(T data);
    void addInMiddle(int index, T data);
    void addAtLast(T data);

    //display list
    void display();

};

template<typename T>
void List<T>::addAtStart(T data) {
    Node<T>* newNode = new Node<T>(data);
    newNode->next = head; 
    head = newNode;     
}

//add after the given index (0 indexed)
template<typename T>
void List<T> :: addInMiddle(int index, T data){
    Node<T>* temp = head;
    Node<T>* tail = NULL;
    Node<T>* newNode = new Node<T>(data);
    int i=0;
    while(temp && i <= index){
        tail = temp;
        temp = temp -> next;
        i++;
    }

    if(temp == NULL){
        head = newNode;
    }
    else {
        tail.next = newNode;
    }
}

template<typename T>
void List<T> :: addAtLast(T data){

}

template<typename T>
void List<T> :: display(){
    Node<T>* temp = head;
    while(temp){
        cout<<(temp -> val)<<"\n";
        temp = temp -> next;
    }
}
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int dta){
        data = dta;
        next = NULL;
    }
};
class Linked_list{
    public:
    Node *head;
    Node *last;
    Linked_list(){
        head = NULL;
    }
    void insert_at_head(int data){
        Node *newnode = new Node(data);
        if (head==NULL){
            head = newnode;
            last = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }
    void normal_insert(int data){
        Node *newnode = new Node(data);
        if (head==NULL){
            head = newnode;
            last = newnode;
        }
        else{
            last->next = newnode;
            last = newnode;
        }

    }
    void Display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
};
 int main(){
     Linked_list list;
     list.normal_insert(12);
     list.normal_insert(13);
     list.normal_insert(14);
     list.normal_insert(15);
     list.Display();
     return 0;

 }

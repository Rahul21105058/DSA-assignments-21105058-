/*  name--rahul
    sid--21105058
 
                                                       
[Ques.1] While traversing a single-circular linked list, 
which condition establishes that the traversing element/variable has reached the first element?
Here's an example and create a basic circular linked list 
*/
#include <iostream>
using namespace std;
class Node{
  
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//inserting node at end
void append(Node*&head,int data){
    Node*temp=head;
    Node*new_node=new Node(data);
  
    if(temp==NULL){head=new_node;new_node->next=head;return;}
    //to establishes that the traversing element(temp) has reached the first element
    while(temp->next!=head){temp=temp->next;}   
    temp->next=new_node;
    new_node->next=head;
}
//Function to print elements from first to last
void print(Node*&head){
  
    Node*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
  
    Node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    print(head);
}
/*
In the above example of circular linked list.
In line number 28 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.
We Know that in circular linked list last node of linked list points to head of that linked list,
hence we can check if any node points to head of linked list then that node is the end of circular linked list.
*/


/*[Ques.2]  What are the practical applications of a circular linked list? (Try to find applications
in your respective fields).
Practical applications of circular linked list are :

1)Audio/Video Streaming: Circular linked list is also used in audio and video streaming,for ex. 
when one copmlete audio list finishes playing in music player then it again starts playing from start
2)Implementation of Data Structure: Data structures such as stacks and queues 
are implemented with the help of the circular linked lists,used to create Circular Queue.
In a Queue we have to keep two pointers, FRONT and REAR in memory all the time,
where as in Circular Linked List, only one pointer is required.
3)Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
4)Computer Networking:Circular linked list is also used in computer networking for token scheduling.
5)Computing Resources:Circular Linked Lists is used to manage the computing resources of the computer.
6)Multiplayer Games: All the Players are kept in a Circular Linked List and the pointer keeps on moving
forward as a player's chance ends.
*/

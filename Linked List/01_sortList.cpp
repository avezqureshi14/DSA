#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
    }
};

Node *sortList(Node *head)
{
    Node *temp1 = head;
    Node *temp2 = head;
    while (temp1 != NULL)
    {
        while (temp2 != NULL)
        {
            if (temp1->data > temp2->data)
            {
                Node*temp = temp2;
                temp2 = temp1;
                temp1 = temp;
            }
            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }

    return head;
}

void printLinkedList(Node*n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main()
{
    Node*head = new Node(4);    
    Node*second = new Node(2);    
    Node*third = new Node(1);    
    Node*fourth = new Node(3);    
    cout<<"Before Sorting"<<endl;
    printLinkedList(head);
    cout<<"After Sorting"<<endl;
    // printLinkedList(sortList(head));
    return 0;
}
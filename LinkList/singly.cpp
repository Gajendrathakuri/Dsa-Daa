#include<iostream>
class Node{
    public:
    Node *next;
    int data;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};

class LinkedList{
    Node *head,*tail;
    public:
    LinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }
    void insertAtstart(int data){
        Node *newnode=new Node(data);
        if(head==nullptr)
        {
            head=tail=newnode;
        }else
        {
            newnode->next=head;
            head=newnode;
        }
        std::cout<<"insertion complete";
    }

    //deletion at start
    void deletionAtfirst()
    {
        if(head==nullptr)
        {
            std::cout<<"Void deletion";
        }else
        {
            head=head->next;
        }
        std::cout<<"deletion complete";
    }
    // insertion at start
    void insertionAtEnd(int data)
    {  Node *newnode=new Node(data);
        Node* temp=head;
            if(tail==nullptr)
            {
                head=newnode;
                tail=newnode;
            }else
            {
               tail->next=newnode;
               tail=newnode;
            }
    }

    //deletion at end
    void deletionAtend()
    {
        if(tail==nullptr)
        {
            std::cout<<"void deletion";
        }else
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            
        }
    }
};

int main()
{
    LinkedList *newlist=new LinkedList();
    newlist->insertAtstart(10);
}
#include<iostream>
using namespace std;

class Node{
    public:
    string key;
    int value;
    Node* next;
    
    Node(string key,int value){
        this->key=key;
        this->value=value;
        this->next=nullptr;
    }
};

class HashTable{
    int totalsize;
    int currSize;
    Node** table;
    private:
    int hashfunction(string key){
        int idx=0;
        for (int i = 0; i < totalsize; i++)
        {
            idx=idx+(key[i]*key[i])%totalsize;
        }
        return idx;
        
    }
    public:
    HashTable(int size){
        totalsize=size;
        currSize=0;
        table=new Node*[totalsize];
        for(int i=0;i<totalsize;i++){
            table[i]=nullptr;
        } 

          for(int i=0;i<totalsize;i++){
            cout<<table[i];
        } 
    }

    

    void insert(string key,int value){
      int idx=hashfunction(key);
      Node* newNode=new Node(key,value);
      Node* head=table[idx];
        newNode->next=head;
        head=newNode;   //0(1)
    }

    void erase(string key){

    }

    void search(string key){

    }
};






int main(){
HashTable hs(4);
}
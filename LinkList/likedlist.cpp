#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class linkedList {
public:
    Node* head;
    Node* tail;
    linkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void pushFront(int data) {
        Node* newnode = new Node(data);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void atend(int data) {
        Node* newnode = new Node(data);
        if (tail == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void display() {
        Node* temp = head;
        cout << "linked list" << endl;
        while (temp != nullptr) {
            cout << "|" << temp->data << "|" << "---->";
            temp = temp->next;
        }
        cout << "Null" << endl;
    }
};

// Floyd’s cycle detection
bool isCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

// Remove cycle correctly
void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // detect cycle
    do {
        if (fast == nullptr || fast->next == nullptr) return;
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    // move fast to head
    fast = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = nullptr; // break cycle
    cout << "Cycle removed" << endl;
}

// Split at mid
Node* splitHead(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;
    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != nullptr) {
        prev->next = nullptr;
    }
    return slow;
}

// Merge two sorted lists
Node* merge(Node* left, Node* right) {
    Node dummy(0);
    Node* tail = &dummy;

    while (left != nullptr && right != nullptr) {
        if (left->data < right->data) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }
    if (left != nullptr) tail->next = left;
    if (right != nullptr) tail->next = right;

    return dummy.next;
}

// Merge sort on linked list
Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;

    Node* mid = splitHead(head);
    Node* left = mergeSort(head);
    Node* right = mergeSort(mid);
    return merge(left, right);
}

Node* reversed(Node* head)
{
    Node* pre=nullptr;
    Node* next=nullptr;
    Node* cur=head;
    while(cur!=nullptr)
    {
        next=cur->next;
        cur->next=pre;
    }
    return pre;
 
}

Node* zigzag(Node* head)
{
    Node* right=splitHead(head);
    Node* revers=reversed(right);
}

int main() {
    linkedList s;
    s.atend(4);
    s.atend(2);
    s.atend(5);
    s.atend(10);
    s.pushFront(100);

    // Create a cycle
    s.tail->next = s.head;
    cout << isCycle(s.head) << "  true or false" << endl;

    removeCycle(s.head);
    cout << isCycle(s.head) << "  true or false (after removal)" << endl;

    // Now test merge sort
    s.head = mergeSort(s.head);
    s.display();
}

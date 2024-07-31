

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *insertfirst(struct Node *head , int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = head;
    ptr->data  =data;
    return head;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocate memory for nodes in the linked list on the heap
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 66;
    fourth->next = nullptr;

    linkedListTraversal(head);
   head insertfirst(head,20);
    linkedListTraversal(head);


    // Free the allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
 
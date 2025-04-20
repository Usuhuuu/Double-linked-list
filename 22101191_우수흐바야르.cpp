#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
};

Node *head = nullptr;
Node *tail = nullptr;

Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int insertAtBegin(int data)
{
    Node *newNode = createNode(data);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->right = head;
        head->left = newNode;
        head = newNode;
    }
    return 0;
}

int insertAtEnd(int data)
{
    Node *newNode = createNode(data);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->right = newNode;
        newNode->left = tail;
        tail = newNode;
    }
    return 0;
}

int insertAtPosition(int data, int pos)
{
    Node *newNode = createNode(data);
    if (pos < 1)
    {
        cout << "Invalid position\n";
        return -1;
    }

    if (head == nullptr && pos == 1) // If list is empty and position is 1
    {
        head = newNode;
        tail = newNode;
        return 0;
    }

    if (pos == 1) // Insert at the beginning
    {
        newNode->right = head;
        head->left = newNode;
        head = newNode;
        return 0;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->right;
    }

    if (temp == nullptr)
    {
        cout << "Position out of bounds\n";
        return -1;
    }

    newNode->right = temp->right;
    if (temp->right != nullptr)
        temp->right->left = newNode;
    else
        tail = newNode; // Update tail if inserting at end

    temp->right = newNode;
    newNode->left = temp;
    return 0;
}

int deleteFromBegin()
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return -1;
    }
    Node *temp = head;
    head = head->right;
    if (head != nullptr)
        head->left = nullptr;
    else
        tail = nullptr; // List became empty

    delete temp;
    return 0;
}

int deleteFromEnd()
{
    if (tail == nullptr)
    {
        cout << "List is empty\n";
        return -1;
    }
    Node *temp = tail;
    tail = tail->left;
    if (tail != nullptr)
        tail->right = nullptr;
    else
        head = nullptr; // List became empty

    delete temp;
    return 0;
}

int deleteAtPosition(int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return -1;
    }

    if (pos == 1)
        return deleteFromBegin();

    Node *temp = head;
    for (int i = 1; i < pos && temp != nullptr; i++)
    {
        temp = temp->right;
    }

    if (temp == nullptr)
    {
        cout << "Position out of bounds\n";
        return -1;
    }

    if (temp->left != nullptr)
        temp->left->right = temp->right;
    if (temp->right != nullptr)
        temp->right->left = temp->left;

    if (temp == head)
        head = temp->right;
    if (temp == tail)
        tail = temp->left;

    delete temp;
    return 0;
}

void displayForward()
{
    Node *temp = head;
    cout << "List (forward): ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

void displayBackward()
{
    Node *temp = tail;
    cout << "List (backward): ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->left;
    }
    cout << endl;
}

int main()
{

    while (true)
    {
        int choice;
        cout << "\n1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete from beginning\n";
        cout << "5. Delete from end\n";
        cout << "6. Delete at position\n";
        cout << "7. Display forward\n";
        cout << "8. Display backward\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertAtBegin(data);
        }
        else if (choice == 2)
        {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertAtEnd(data);
        }
        else if (choice == 3)
        {
            int data, pos;
            cout << "Enter data and position: ";
            cin >> data >> pos;
            insertAtPosition(data, pos);
        }
        else if (choice == 4)
        {
            deleteFromBegin();
        }
        else if (choice == 5)
        {
            deleteFromEnd();
        }
        else if (choice == 6)
        {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;
            deleteAtPosition(pos);
        }
        else if (choice == 7)
        {
            displayForward();
        }
        else if (choice == 8)
        {
            displayBackward();
        }
        else if (choice == 9)
        {
            break;
        }
    }
}
#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DLL
{
public:
    node *head;
    node *tail;
    int size;

    DLL()
    {
        head = tail = NULL;
        size = 0;
    }

    void insertathead(int value)
    {
        node *temp = new node(value);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertattail(int value)
    {
        node *temp = new node(value);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertatidx(int value, int idx)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid index\n";
        else if (idx == 0)
            insertathead(value);
        else if (idx == size)
            insertattail(value);
        else
        {
            node *t = new node(value);
            node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }

    int getatidx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid index\n";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteathead()
    {
        if (size == 0)
        {
            cout << "List is empty\n";
            return;
        }
        node *temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        size--;
    }

    void deleteattail()
    {
        if (size == 0)
        {
            cout << "List is empty\n";
            return;
        }
        node *temp = tail;
        if (tail->prev != NULL)
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        else
        {
            head = tail = NULL;
        }
        delete temp;
        size--;
    }

    void deleteatidx(int idx)
    {
        if (size == 0)
        {
            cout << "List is empty\n";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid index\n";
            return;
        }
        else if (idx == 0)
            deleteathead();
        else if (idx == size - 1)
            deleteattail();
        else
        {
            node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            if (temp->next != NULL)
                temp->next->prev = temp;
            delete toDelete;
            size--;
        }
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLL list;

    // Insertions
    list.insertathead(10);
    list.insertattail(20);
    list.insertattail(30);
    list.insertatidx(25, 2); // Insert 25 at index 2
    list.display();          // Output: 10 20 25 30

    // Accessing elements
    cout << "Element at index 2: " << list.getatidx(2) << endl; // Output: 25

    // Deletions
    list.deleteathead();
    list.display(); // Output: 20 25 30
    list.deleteattail();
    list.display(); // Output: 20 25
    list.deleteatidx(1);
    list.display(); // Output: 20

    return 0;
}

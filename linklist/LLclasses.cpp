#include <iostream>
using namespace std;
class node
{ // user define data type
public:
    int value;
    node *next;
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class Linklist
{
public:
    node *head;
    node *tail;
    int size;
    Linklist()
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
            tail = temp;
        }
        size++;
    }

    void insertatidx(int value, int idx)
    {
        if (idx < 0 || idx > size)
            cout << "invalid";
        else if (idx == size)
            insertattail(value);
        else if (size == 0)
            insertathead(value);
        // insert at middle         
        else
        {
            node *t = new node(value); // new wala
            node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getatidx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "invalid index";
            return -1;
        }
        else if (idx == 0)
            return head->value;
        else if (idx == size - 1)
            return tail->value;
        else
        {
            node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->value;
        }
    }

    void deleteathead()
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteattail()
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteatidx(int idx)
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid";
            return;
        }
        else if (idx == 0)
            return deleteathead();
        else if (idx == size - 1)
            return deleteattail();
        else
        {
            node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Linklist ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    ll.insertattail(30);
    ll.insertattail(40);
    ll.display();
    ll.insertathead(0);
    ll.display();
    ll.insertatidx(15, 2);
    ll.display();
    // cout<< ll.getatidx(2);
    // cout<<endl;
    // ll.deleteathead();
    //  ll.display();
    //  ll.deleteattail();
    //  ll.display();
    ll.deleteatidx(2);
    ll.display();
    //    ll.insertatidx(15,2);
    //    ll.display();
}

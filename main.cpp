#include <iostream>
#include"list.h"
#include "stack.h"

int main()
{

    my::list<int> mylist;
    int a=10;
    mylist.add(a);
    a+=10;
    mylist.add(a);
    a+=10;
    mylist.add(a);
    my::ListNode<int>* p=mylist.head;
    while (p->next!=nullptr)
    {
        p=p->next;
        std::cout<<p->data<<std::endl;

    }
    mylist.remove(10);
    p=mylist.head;
    while (p->next!=nullptr)
    {
        p=p->next;
        std::cout<<p->data<<std::endl;

    }
    my::stack<int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    while (mystack.top!=mystack.head)
    {
        std::cout<<mystack.pop()<<std::endl;
    }
}

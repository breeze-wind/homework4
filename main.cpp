#include <iostream>
#include"list.h"

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
}

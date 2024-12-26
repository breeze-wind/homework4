//
// Created by Lenovo on 24-12-20.
//

#include "stack.h"

namespace my {
    template <typename T>
    stack<T>::stack()
    {
        stacklist.head=new ListNode<T>();
        top=stacklist.head;
    }
    template <typename T>
    void stack<T>::push(const T& data)
    {
        ListNode<T>* newnode = new ListNode<T>(data);
        newnode->next=nullptr;
        ListNode<T>* p=stacklist.head;
        while (p->next!=nullptr)
        {
            p=p->next;
        }
        p->next=newnode;
        newnode->prev=p;
        top=newnode;
    }
    template <typename T>
     T stack<T>::pop(void)
    {
        T temp=top->data;
        top=top->prev;
        delete top->next;
        top->next=nullptr;
        return temp;

    }




} // my
//
// Created by Lenovo on 24-12-20.
//

#include "list.h"

#include <iostream>

namespace my
{      template <typename T>
    list<T>::list()
{
    head=new ListNode<T>;
}
    template <typename T>
    void list<T>:: add(const T& data)
    {
        ListNode<T>* newnode = new ListNode<T>(data);
        newnode->next=nullptr;
        ListNode<T>* p=this->head;
        while (p->next!=nullptr)
        {
            p=p->next;
        }
        p->next=newnode;
        newnode->prev=p;

    }
  template <typename T>
    bool list<T>::remove(const T& data)
    {
        ListNode<T>* p=this->head;
    while (p->next!=nullptr&&p->data!=data)
    {
        p=p->next;
    }
    if (p->next==nullptr)
    {
        return false;
    }
    else
    {
        p->next->prev=p->prev;
        p->prev->next=p->next;
        delete p;
        return true;
    }
    }
    template<typename T>
    bool list<T>::insert(const T& data1,const T& data2)
    {
        ListNode<T>* p =this->head;
        while (p->next!=nullptr&&p->data!=data1)
        {
            p=p->next;
        }
        if (p->next==nullptr)
        {
            delete p;
            return false;
        }
        else
        {
            ListNode<T>* newnode = new ListNode<T>(data2);
            newnode->next=p->next;
            p->next->prev=newnode;
            newnode->prev=p->prev;
            delete p;
            return true;
        }

    }
    template <typename T>
    void list<T>::clear()
    {
        ListNode<T>* p=this->head;
    while (p->next!=nullptr)
    {

        p=p->next;
        delete p->prev;
    }
    delete p->next;
    delete p;
    //std::cout<<typeid()<<" already clear"<<std::endl;

    }




} // my
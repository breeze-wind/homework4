//
// Created by Lenovo on 24-12-26.
//

#include "queue.h"

#include <algorithm>
#include <memory>

namespace my {
    template <typename T>
    queue<T>::queue()
    {
      queuelist.head =new ListNode<T>();
    }
template <typename T>
T queue<T>::pop()
{
    T tmp=queuelist.head->next->data;
        std::unique_ptr<ListNode<T>> p(queuelist.head->next);
        queuelist.head->next=queuelist.head->next->next;
        p.reset();
        return tmp;
}
    template <typename T>
    void queue<T>::push(const T& item)
    {
        queuelist.add(item);
    }
   template <typename T>
   void queue<T>::clear()
   {
       queuelist.clear();
   }
    template <typename T>
    T queue<T>::front() const
    {
        return queuelist.head->next->data;
    }



} // my
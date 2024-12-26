//
// Created by Lenovo on 24-12-20.
//

#ifndef STACK_H
#define STACK_H
#include "list.h"
#include "stack.h"
namespace my {
template <typename T>
class stack {
public: stack();
    ~stack()=default;
    ListNode<T>* top ;
    void push(const T& data);
    T pop(void);
   // ListNode<T>* head=stacklist.head;

    list<T> stacklist;


};

} // my
template class my::stack <int>;
template class my::stack <char>;
template class my::stack <float>;
template class my::stack <double>;
#endif //STACK_H

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
public: explicit stack() ;//初始化时给链表头结点分配空间
    ~stack()=default;
    ListNode<T>* top ;//标记栈顶位置，节省时间

    void push(const T& data);//压栈（直接调用的list.add）
    T pop(void);//出栈，自动返回栈顶

   // ListNode<T>* head=stacklist.head;

    list<T> stacklist;
    void clear(void);//清除栈
};

} // my
template class my::stack <int>;
template class my::stack <char>;
template class my::stack <float>;
template class my::stack <double>;
#endif //STACK_H

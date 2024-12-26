//
// Created by Lenovo on 24-12-26.
//

#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"

namespace my {
template <typename T>
class queue{//跟栈大差不差，都以链表为基础修改的
    public:
    queue();//初始化给头结点分配地址
    ~queue()=default;
    T pop(void);//出队返回数据
    void push(const T&);//进队
    void clear(void);//直接调用链表的clear
    T front(void) const;//返回队头的值
    list<T> queuelist ;

};
    template class queue<int>;
    template class queue<char>;
    template class queue <float>;
    template class queue <double>;
} // my

#endif //QUEUE_H

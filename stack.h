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
      T* top() ;
    void push(const T& data);
    void pop(const T& data);
private:
    list<T> stacklist ;

};

} // my

#endif //STACK_H

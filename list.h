
#ifndef LIST_H
#define LIST_H

namespace my {
    template <typename T>
    struct ListNode
    {
        T data;
        ListNode *next;
        ListNode *prev;
        inline ListNode() :data(0), next(nullptr), prev(nullptr)
        {
        }
       inline  ListNode(const T& data) : data(data), next(nullptr), prev(nullptr){}
        inline ListNode(const T& data1, ListNode *prev1, ListNode *next1):data(data1),next(next1),prev(prev1){}
    };
template <typename T>
     class list<T>{
         public:
         ListNode<T> *head;
         list();
         ~list();

         void add(const T& data);
         bool remove(const T& data);
         bool insert(const T& data1,const T& data2);
} // my

#endif //LIST_H

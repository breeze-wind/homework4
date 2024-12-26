
#ifndef LIST_H
#define LIST_H

namespace my
{
    template <typename T>
    struct ListNode
    {
        T data;
        ListNode *next;
        ListNode *prev;
        inline ListNode() :data(0), next(nullptr), prev(nullptr)//初始化为空节点
        {
        }
        inline  ListNode(const T& data) : data(data), next(nullptr), prev(nullptr){}//初始化为带数据的节点
        inline ListNode(const T& data1, ListNode *prev1, ListNode *next1):data(data1),next(next1),prev(prev1){}
    };
    template <typename T>
         class list{
    public:
        ListNode<T> *head;//头结点
       explicit list();
        ~list()=default;

        void add(const T& data);//链表结尾添加节点
        bool remove(const T& data);//搜索并删除节点
        bool insert(const T& data1,const T& data2);//搜索data1并在该节点后插入节点（数据为data2)
        void clear(void);
    };
    template class list<int>;
    template class list<char>;
    template class list <float>;
    template class list <double>;

}// my

#endif //LIST_H

#ifndef LINKEDLIST
#define LINKEDLIST

template <class T>
class DoubleLinkedList{

    public:
        DoubleLinkedList();
        DoubleLinkedList(T);
        DoubleLinkedList<T> *next = 0;
        DoubleLinkedList<T> *previous = 0;
        T info = 0;
        T get_value();
};

template <class T>
class TopDown{
    public:
        TopDown();
        void add_top(DoubleLinkedList<T>*);
        void add_down(DoubleLinkedList<T>*);
        void add_middle(DoubleLinkedList<T>*, int);
        void find_element(T);
        void remove_element(T);
        DoubleLinkedList<T>* top;
        DoubleLinkedList<T>* down;
};

#endif
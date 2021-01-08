#include "SSLS.h"
#include <iostream>

//TODO: Criar exceções

template <class T>
DoubleLinkedList<T>::DoubleLinkedList(){this->next = 0;}

template <class T>
DoubleLinkedList<T>::DoubleLinkedList(T data){
    this->info = data;
    this->next = 0; 
}

template <class T>
T DoubleLinkedList<T>::get_value(){
    return this->info;
}

template <class T>
TopDown<T>::TopDown(){
    this->top = 0;
    this->down = 0;
}

template <class T>
void TopDown<T>::add_top(DoubleLinkedList<T>* pointer){
    if (this->top == 0){
        this->top = pointer;
        this->down = pointer;
    }
    else if (this->top == this->down){
        pointer->next = this->top;
        this->top->previous = pointer;
        this->top = pointer;
    }
    else{
        pointer->next = this->top;
        this->top->previous = pointer;
        this->top = pointer;
    }

}

template <class T>
void TopDown<T>::add_down(DoubleLinkedList<T>* pointer){
    if (this->down == 0){
        this->top = pointer;
        this->down = pointer;
    }
    else if (this->top == this->down){
        this->down = pointer;
        this->top->next = this->down;
        this->down->previous = this->top;
    }
    else{
        pointer->previous = this->down;
        this->down->next = pointer;
        this->down = pointer;
    }
}

template <class T>
void TopDown<T>::add_middle(DoubleLinkedList<T>* pointer, int position){
    DoubleLinkedList<T>* aux_next = this->top;
    DoubleLinkedList<T>* aux_previous = this->top->next;
    int i = 0;
    while (aux_next->next != 0){
        i++;
        if (i == position)
            break;
        aux_next = aux_next->next;
    }

    i = 0;
    while (aux_previous->next != 0){
        i++;
        if (i == position + 1)
            break;
        aux_previous = aux_previous->next;
    }

    aux_next->next = pointer;
    pointer->next = aux_previous;
    aux_previous->previous = pointer;
    pointer->previous = aux_next;
}

template <class T>
void TopDown<T>::find_element(T data){
    DoubleLinkedList<T>* aux = this->top;
    int i=0;
    while (aux->next != 0){
        i++;
        if (aux->info == data){
            break;
        }
        aux = aux->next;
    }
    std::cout << "Elemento encontrado na posicao: " << i << std::endl;
}

template <class T>
void TopDown<T>::remove_element(T data){
    DoubleLinkedList<T>* aux = this->top;
    while (aux->next != 0){
        if (aux->info == data){
            aux->previous->next = aux->next;
            aux->next->previous = aux->previous;
        }
        aux = aux->next;
    }
}
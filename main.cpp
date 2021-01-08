#include "SSLS.cpp"
#include <iostream>

//Apenas testes extremamente basicos
//TODO: Criar menu e opcoes para operacoes corretas com a lista
int main(){


    TopDown<int> *elements = new TopDown<int>();

    elements->add_top(new DoubleLinkedList<int>(10));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->down->info << "\n\n" << std::endl;
    elements->add_top(new DoubleLinkedList<int>(20));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->top->next->info << std::endl;
    std::cout << elements->down->previous->info << std::endl;
    std::cout << elements->down->info << "\n\n" <<std::endl;
    elements->add_top(new DoubleLinkedList<int>(30));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->top->next->info << std::endl;
    std::cout << elements->down->previous->info << std::endl;
    std::cout << elements->down->info << "\n\n" <<std::endl;
    
    elements->add_down(new DoubleLinkedList<int>(40));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->down->info << "\n\n" << std::endl;
    elements->add_down(new DoubleLinkedList<int>(50));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->top->next->info << std::endl;
    std::cout << elements->down->previous->info << std::endl;
    std::cout << elements->down->info << "\n\n" << std::endl;
    elements->add_middle(new DoubleLinkedList<int>(100), 1);
    std::cout << elements->top->info << std::endl;
    std::cout << elements->top->next->info << std::endl;
    std::cout << elements->down->previous->info << std::endl;
    std::cout << elements->down->info << "\n\n" << std::endl;
    elements->find_element(50);
    elements->add_down(new DoubleLinkedList<int>(60));
    std::cout << elements->top->info << std::endl;
    std::cout << elements->top->next->info << std::endl;
    std::cout << elements->down->previous->info << std::endl;
    std::cout << elements->down->info << "\n\n" << std::endl;

    return 0;
}

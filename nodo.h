#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T>
class Nodo
{
    public:
        Nodo();
        Nodo(T);
        ~Nodo();
        Nodo *next;
        Nodo *izq;
        Nodo *der;
        T data;

        void delete_all();
        void print();
};

#endif // NODE_H

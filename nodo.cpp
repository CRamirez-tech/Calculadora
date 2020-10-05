#include "nodo.h"

template<typename T>
Nodo<T>::Nodo()
{
    data = NULL;
    next = NULL;
    izq = NULL;
    der = NULL;
}

template<typename T>
Nodo<T>::Nodo(T data_)
{
    data = data_;
    next = NULL;
    izq = NULL;
    der = NULL;
}

template<typename T>
void Nodo<T>::delete_all()
{
    if (izq)
        izq->delete_all();
    if (der)
        der->delete_all();
    delete this;
}

template<typename T>
void Nodo<T>::print()
{
    std::cout << data << "-> ";
}

template<typename T>
Nodo<T>::~Nodo()
{
}

#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "nodo.h"
#include "nodo.cpp"

template <class T>
class AB
{
    public:
        AB();
        ~AB();

        void add_end(T);
        void concat(AB);
        void del_all();
        void load_file(std::string);
        void print();
        void save_file(std::string);
        void search(T);

    private:
        Nodo<T> *cabeza;
        uint32_t num_nodos;
};

#endif // LIST_H

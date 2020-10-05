#include "ab.h"

template<typename T>
AB<T>::AB()
{
    num_nodos = 0;
    cabeza = NULL;
}

// Insertar
template<typename T>
void AB<T>::add_end(T data_)
{
    Nodo<T> *new_node = new Nodo<T> (data_);
    Nodo<T> *temp = cabeza;

    if (!cabeza) {
        cabeza = new_node;
    } else {
        if (!temp->izq) {
            cabeza = new_node;
        }
        if (!temp->der) {
            cabeza = new_node;
        }
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    num_nodos++;
}

// Concatenar a otra AB
template<typename T>
void AB<T>::concat(AB list)
{
    Nodo<T> *temp2 = list.cabeza;

    while (temp2) {
        add_end(temp2->data);
        temp2 = temp2->next;
    }
}

// Eliminar todos los nodos
template<typename T>
void AB<T>::del_all()
{
    cabeza->delete_all();
    cabeza = 0;
}

// Cargar una lista desde un archivo
template<typename T>
void AB<T>::load_file(std::string file)
{
    T line;
    std::ifstream in;
    in.open(file.c_str());

    if (!in.is_open()) {
        std::cout << "No se puede abrir el archivo: " << file << std::endl << std::endl;
    } else {
        while (in >> line) {
            add_end(line);
        }
    }
    in.close();
}

// Imprimir la Lista
template<typename T>
void AB<T>::print()
{
    Nodo<T> *temp = cabeza;
    if (!cabeza) {
        std::cout << "La Lista está vacía " << std::endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) std::cout << "NULL";
                temp = temp->next;
        }
  }
  std::cout << std::endl << std::endl;
}

// Buscar el dato de un nodo
template<typename T>
void AB<T>::search(T data_)
{
    Nodo<T> *temp = cabeza;
    int cont = 1;
    int cont2 = 0;

    while (temp) {
        if (temp->data == data_) {
            std::cout << "El dato se encuentra en la posición: " << cont << std::endl;
            cont2++;
        }
        temp = temp->next;
        cont++;
    }

    if (cont2 == 0) {
        std::cout << "No existe el dato " << std::endl;
    }
    std::cout << std::endl << std::endl;
}


// Guardar una lista en un archivo
template<typename T>
void AB<T>::save_file(std::string file)
{
    Nodo<T> *temp = cabeza;
    std::ofstream out;
    out.open(file.c_str());

    if (!out.is_open()) {
        std::cout << "No se puede guardar el archivo " << std::endl;
    } else {
        while (temp) {
            out << temp->data;
            out << " ";
            temp = temp->next;
        }
    }
    out.close();
}

template<typename T>
AB<T>::~AB() {}

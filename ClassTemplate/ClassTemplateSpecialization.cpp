#include "ClassTemplateSpecialization.hpp"
#include <iostream>
using namespace std;

template <class T> class Container {
private:
    T element;
public:
    // only prototype
    Container (T);
    T increase ();
};

// class method definition
template <class T>
Container<T> :: Container(T arg) {
    element = arg;
}

template <class T>
T Container<T> :: increase () {
    return ++element;
}

// class template specialization:
template <> class Container <char> { // specialized for char type
private:
    char element;
public:
    Container(char arg) {
        element = arg;
    }
    char uppercase() {
        if ((element >= 'a') && (element <= 'z')) {
            element += 'A'-'a';
            return element;
        }
        return '0';
    }
};








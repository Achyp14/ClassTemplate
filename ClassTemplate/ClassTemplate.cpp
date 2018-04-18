#include "ClassTemplate.hpp"
#include <iostream>
using namespace std;

template <class T> class Array {
private:
    T *array;
    int size;
public:
    Array(T arr[], int s)
    {
        array = new T[s];
        size = s;
        for(int i = 0; i < size; i++)
        {
            array[i] = arr[i];
        }
    };
    
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(array + i) << " ";
        }
        cout << "\n";
    }
};

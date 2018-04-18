#include <iostream>
#include "ClassTemplate.cpp"
#include "ClassTemplateSpecialization.cpp"
using namespace std;

int main(int argc, const char * argv[])
{
   
    int intArray[5] = {1, 2, 3, 4, 5};
    Array<int> *object1 = new Array<int>(intArray, 5);
    object1 -> print();
    
    string stringArray[3] = {"Mac OS", "Windows", "Linux"};
    Array<string> object2(stringArray, 3);
    object2.print();
    
    Container<int> myInt (7);
    Container<char> myChar ('j');
    cout << myInt.increase() << endl;
    cout << myChar.uppercase() << endl;
    
    return 0;
}

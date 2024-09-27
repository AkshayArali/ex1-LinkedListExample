#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    // instantiate a List class (the constructor takes NO arguments)
    List list;

    // NOTE:
    // List list();  is incorrect, when there are no arguments don't use ()

    // insert numbers into the list
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insert(5);
    list.insert(20);
    
    list.print();
    cout << list.sum() << endl;

    return 0;
}

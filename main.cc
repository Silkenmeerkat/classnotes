#include "vector.h"

int main(){
    vector v;

    v.append(10);

    //this only works with the dynamically allocated memory because of the deep copy constructor we just set up.
    vector w;
    w=v;//overloading the = operator

    v.print();




    }

#include "vector.h"
#include <assert.h>
#include <iostream>

vector:: vector()
{
    capacity = 8;
    size = 0;
    array = new int[capacity];
    growth = 2;
}

vector& vector:: operator = (const vector& ref)
{
    if (this != &ref)
    {
        size = ref.size;
        capacity = ref.size;
        array = new int[capacity];
        delete [] array;
        array = new int[capacity];

        for (int i = 0; i <size; i++)
        {
            array[i] = ref.array[i];
        }
    }

    return *this;
}

//This is a deep copy constructor that will properly create a new array and copy the rest of the data from the old array back.
vector:: vector(const vector &ref)
{
    capacity = ref.capacity;
    size = ref.size;
    array = new int[capacity];
    for (int i = 0; i <size; i++)
    {
        array[i] = ref.array[i];
    }

}
vector:: ~vector()
{
    //this will deallocate the array
    delete [] array;
}



void vector::append(int val)
{
    //a function that will evaluate the expression and if it is true, nothing happens and if it is false the program crashes
    if (size < capacity)
    {
    array[size] = val;
    size++;
    }
    else {
        int *p= new int[capacity*2];
        //copy values
        for (int i =0; i<size; i++)
        {
            p[i] = array[i];
        }
        //append the value
        p[size] = val;
        size ++;

        //delete the old array and adjust values
        delete [] array;
        array = p;
        //adjust values
        capacity*=2;
        }
}

    void vector:: print()
    {
        std:: cout << "Cap: " << capacity << "Size" << size << std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << std::endl;
        }

    }


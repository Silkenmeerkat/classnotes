#ifndef __vector__
#define __vector__

class vector{
    private:
    unsigned int capacity;
    unsigned int size;
    int *array;
    int growth;
    public:
        vector();
        vector(const vector&);
        vector& operator=(const vector&); //header for an operator overload method (overloading = )
        ~vector();

        void append(int);
        void print();
};
#endif

#include<iostream>

int main(){
    /*Pointer is a variable which stores the address of the data. There is always a type of a pointer which helps to understand 
    that how many bytes we have to skip in case we are iterating to next address */
    int var = 10;
    int *ptr = &var;
    std::cout<<"The address of var "<<&var<<std::endl;
    std::cout<<"The value of the ptr "<<ptr<<std::endl;
    std::cout<<"The value at the address "<<ptr<<" is the value "<<(*ptr)<<std::endl;

    // Two Dimensional Array as pointers

    // Dangling Pointers

    // Wild Pointers
    
    // Void Pointers

    // Const Pointers, Pointers to Const, Const Pointers to Const

    // Opaque Pointer

    // Pointer Arithmetic

    // Pointers to Functions


    return 0;
}
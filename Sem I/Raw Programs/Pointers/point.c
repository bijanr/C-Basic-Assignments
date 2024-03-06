#include<stdio.h>
void main()
{
    int a = 5;        // Declare an integer variable 'a' and assign it the value 5
    int* p = &a;      // Declare a pointer variable 'p' that points to an integer, and assign it the memory address of 'a'
    
    printf("%d\n", a);    // Print the value of 'a' (output: 5)
    printf("%d\n", &a);   // Print the address of 'a' (output: address of 'a' in memory, any hexadecimal number)
    printf("%d\n", p);    // Print the value stored in pointer 'p', which is the address of 'a' (output: address of 'a' in memory)
    printf("%d\n", *p);   // Print the value at the address pointed to by 'p', which is the value of 'a' (output: 5)
    printf("%d\n", &p);   // Print the address of pointer 'p' (output: address of 'p' in memory)
}


a is a variable having integer datatype. 
we assign a with an integer 5.

Note that,  '&' is a referencing operator used to access the memory location or address of the corresponding operand or variable
            '*' is a dereferencing operator used to access and manipulate the value of the corresponding memory location.
            'a' is the variable itself, for eg, 5.
            '&a' is the memory address of the variable 'a', for eg, any arbitrary hexadecimal memory location.
            'p' is the pointer variable that stores the memory address of the variable 'a'
            '*p' is the value stored in the memory address 'a', i.e., 5
            '&p' is the memory address or location of the pointer variable 'p'
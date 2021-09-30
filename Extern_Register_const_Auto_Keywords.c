#include <stdio.h>
 
int main()
{
    //Extern is used to declare global variables that can be accessed or 
    //instantiated any where in the program
    extern int y; 
    extern int z;
    extern int x;
    extern char welcome[100]; 

    //auto is used to declare local variable
    auto int i = 10; 
    //register stores variable in the register for faster acess
    register const int *const a = &i; //constant pointer to constant integer
  
    printf("%s,%d %d %d %d", welcome, i, x, y, z);
}
//Global variables can be accessed or instantiated outside Translation unit 
//in which it was declared at
int y = 2;
int z = 5;
char welcome[100] = "Your numbers are: ";
int x = 8;



//For the while and do and while loops, continue statement causes the 
//program control to pass to the conditional tests

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 20;

   /* do loop execution */
   do {
   
      if( a == 25) {
         /* skip the iteration */
         a = a + 1;
         continue;
      }
		
      printf("value of a: %d\n", a);
      a++;
   
   } while( a < 30 );
 
   return 0;
}
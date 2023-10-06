#include <stdio.h>

int main () {
   char i;

   for(i = 'a' ; i<= 'z' ; i++) {
        if (i == 'e' || i == 'q') {
            continue; 
        }
      putchar(i);
      putchar('\n');
   }

   return(0);
}

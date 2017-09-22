#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
   int limit = 20;
   if (argc > 1) {
      limit = atoi(argv[0]);
   }

   int i = 1;
      for (;i <= limit; i++) {
         if (i % 15 == 0) {
            printf("fizzbuzz");
         } else if (i % 5 == 0) {
            printf("buzz");
         } else if (i % 3 == 0) {
            printf("fizz");
         } else {
            printf("%d", i);
         }
         printf(" ");
      }
}

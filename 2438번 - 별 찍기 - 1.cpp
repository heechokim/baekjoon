#include <stdio.h>

int main(void) {
   int input;
   scanf("%d", &input);
   for(int i = 0 ; i < input ; i++){
      for(int j = 0 ; j < i+1 ; j++){
         printf("*");
      }
      printf("\n");
   }
   return 0;
}

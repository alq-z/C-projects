#include <stdio.h>
// I use trigraphs in this
// add -trigraphs flag when compiling ex. gcc filename.c -o filename - trigraphs
int main()??<

   int rows = 0;
   int columns = 0;
   int symbol = 0;
    
   printf("Enter the # of rows: "); 
   scanf("%d", &rows);

   printf("Enter the # of columns: ");   
   scanf("%d", &columns);   

   printf("Enter a symbol: ");   
   // You need to clear the input buffer when inputing character just pust space " %c"
   scanf(" %c", &symbol);
    
   for(int i = 0; i < rows; i++)??<  
      for(int j = 0; j < columns; i++)??<
         printf("%c", symbol);
      ??>
      printf("\n\n");
   ??>  
  

??>

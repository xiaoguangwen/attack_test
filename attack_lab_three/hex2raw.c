#include <stdio.h>
#include <stdlib.h>

int main()
{
char c;
int i = 0; 
while (scanf("%x", &c) != EOF) {  
  fwrite(&c, 1, 1, stdout);  
  //printf("i:%d, %x.\n", i, c);
  //i=i+1;
}  
c = '\n';  
fwrite(&c, 1, 1, stdout); 
}



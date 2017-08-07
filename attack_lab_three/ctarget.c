#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NORMAL_BUFFER_SIZE 32 

int getbuf()  
{  
	char buf[NORMAL_BUFFER_SIZE];  
	gets(buf);  
	return 1;  
} 

void test()
{	
	int val = 0;
	val = getbuf();
	printf("No explit. Getbuf return 0x%x\n", val);
        return;
}

void touch1() {
    int vlevel = 1;
    printf("Touch!: You called touch1()\n");
    //validate(1);
    exit(0);
}

int main ()
{
	test();
	return;
}

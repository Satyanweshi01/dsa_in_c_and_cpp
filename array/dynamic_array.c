#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p =(int *) malloc(5*sizeof(int)); //dynamic array 
    *p = 10;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));

    free(p);
}
#include <stdio.h>

void main()
{
    int *p=NULL;
    if(p==NULL){
        printf("\n Pointer Does Not Point To Anything\n");
    }
    else{
        printf("Value pointed to Pointer %d",p);
    }
}
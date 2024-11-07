#include<stdio.h>
#include<stdlib.h>

int main()
{   

    //experimenting pointer

    int x,y,*pointer1,*pointer2;x=22;

    pointer1=&x;
    pointer2=pointer1;
    printf("%d\t%d\t%d\n",pointer1,pointer2,x);
    
    int x,;y,*pointer;
    x=22;
    printf("%d\n%d\n",x,y);
    pointer=&x;
    printf("%d\n%d\n",x,y);
    y=*pointer;
    printf("%d\n%d\n",x,y);
    return 0;

    
}

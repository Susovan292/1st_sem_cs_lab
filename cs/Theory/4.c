#include <stdio.h>

void main()
{
    for (int i=300 ; i <=700 ; i++) {
        if (((i%3)==0) || ((i%7)==0)) {
            printf("%d \n", i);
        }
    }
}

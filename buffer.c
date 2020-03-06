#include <stdio.h>
#include <string.h>

int main ()
{
    int array[5] = {1,2,3,4,5};
    printf("The array element accessed within bounds: ");
    printf("%d\n", array[4]);
    printf("The array element accessed out of bounds: ");
    printf("%d\n", array[5]);
}

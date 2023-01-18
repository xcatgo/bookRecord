#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *a = NULL;
    int n = 1;
    a = &n;
    printf("%p\n", a);
    int *b = a;
    printf("%p\n", b);

    free(a);
    a = NULL;

    printf("%p\n", a);
    printf("%p\n", b);

    return 0;
}

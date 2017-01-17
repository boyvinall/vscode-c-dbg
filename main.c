#include <stdio.h>

int main(int argc, char **argv)
{
    printf("argc %d\n", argc);
    if (argc > 1)
    {
        printf("hello [%s]\n", argv[1]);
    }
    return 0;
}
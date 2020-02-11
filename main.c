#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc < 2)
        printf("I <3 Open Source!\n");
    else
        printf("%s <3's Open Source!\n", argv[1]);

    return 0;
}

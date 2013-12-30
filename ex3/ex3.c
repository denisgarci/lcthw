#include <stdio.h>

int main()
{
    int age = 10;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    // extra credits
    char c = 'c';
    printf("A char: %c\n", c);

    float f = 3.14;
    printf("A float: %.2f\n", f);
    printf("Scientific: %e\n",  f);

    int hex = 256;
    printf("Int to hex? %X\n", hex);


    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L *1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    // this make no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);

    // Break It
    //printf("Test with %%s ,%s.\n", nul_byte);
    printf("Test with %%c, %c.\n", nul_byte);

    // Extra Credit
    long test = 1;
    printf("Test %ld.\n", test);

    long a_big_long = 100000000000000000000000;
    printf("A big long %ld.\n", a_big_long);

    long two_to_32 = 4294967296;
    printf("2 to the 32 %ld.\n", two_to_32);

    unsigned long u_long = 100000000000000000000000;
    printf("A unsigned long %ld.\n", u_long);

    return 0;
}

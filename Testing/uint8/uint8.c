#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 42;
    uint8_t b = 19;
    uint8_t out = a;
    int c = 42;

    int num = 14;

    while (num > 0) //do till num greater than  0
    {
        int mod = num % 10;  //split last digit from number
        printf("%d\n", mod); //print the digit.

        num = num / 10; //divide num by 10. num /= 10 also a valid one
    }

    return 0;
}



/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    short int testShortInt;
    long int testLongInt;
    float testFloat;
    double testDouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Short Int size is %ld bytes\n",sizeof(testShortInt));
    printf("Long Int size is %ld bytes\n",sizeof(testLongInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Double size is %ld bytes\n",sizeof(testDouble));

    return 0;
}

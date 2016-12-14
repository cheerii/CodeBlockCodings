#include <stdio.h>
#include <stdlib.h>


void testing(const char *stringg){ //passing by-VALUE, because i just send the text testing("der text als parameter aus der main");

    printf("function:: string in: %s\n\n", stringg); //%s to print the whole string, because call-by-value
    stringg = "changed";
    printf("function:: string in: %s\n\n", stringg);

}

int main()
{
    printf("Hello world!\n");

    char *stringg = "<<DEFAULT---TEXT>>";
    testing("main :: der text als parameter aus der main"); //passing "call-by-VALUE"

    printf("main:: char string %s\n\n", stringg);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int func1(char *arr, char *string1){

         printf("arr %s\n", arr);
//         printf("*arr %s\n", *arr);
//         printf("*string %s\n", *string1);
         printf("string %s\n", string1);

}

int main()
{
    printf("Hello world!\n");

    char arr[20] ="ich bin ein array";
    char *string1 = "Hi String Char POinter";

func1(arr, string1);



    return 0;
}



#include <stdio.h>

//to use string fuctions such as strlen(), strcpy(), strcat() .............., this library needs to be included.
#include <string.h>

int main() {

    //using array
    char msg1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n", msg1);

    printf("=============\n");

    //Regualar way
    char msg2[] = "Hello World";
    printf("%s\n", msg2);

    //both the above way are essentialy the same thing. The second way is just easy to write and thus commonly used. Also all the scopes of the arrays are also applicable to strings.

    printf("=============\n");

    //length of string
    int len = strlen(msg2);
    printf("Length of the string is: %d\n", len);

    printf("=============\n");

    //copying a string
    char s1[] = "Hello";
    char s2[5];
    strcpy(s2, s1);
    printf("S2 = %s\n", s2);

    printf("=============\n");

    //concatanating strings
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("%s\n", str1);

    printf("=============\n");

}
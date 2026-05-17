#include <stdio.h>

//making the functions avalible
int getLength(char* string);
void inHalf(char* string);

int main() {
    //main strings
    char* string1 = "bill";
    char* string2 = "Hello";

    //printing the half of the string
    char* halfString1 = string1;
    char* halfString2 = string2;

    printf("Printing the half of the string\n");
    printf("Original Strings: %s, %s\n", halfString1, halfString2);
    inHalf(halfString1);
    inHalf(halfString2);
    printf("New Strings: %s, %s\n", halfString1, halfString2);

    return 0;
}

//spliting and printing the string in half
void inHalf(char* string) {
    //getting the half of the string
    int length = getLength(string);
    int halfLength = length / 2;

    //only changing the the string in the half
    for (int i = 0; i < halfLength; i++) {
        putchar(string[i]);
    }
    putchar('\n');
}

//spliting the string in half, and only printing the ending half

//printing the string in reverse

//getting the length of the string
int getLength(char* string) {
    int length = 0;
    while (*string) {
        length++;
        string++;
    }
    return length;
}
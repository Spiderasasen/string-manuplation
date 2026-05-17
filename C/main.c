#include <stdio.h>

//making the functions avalible
int getLength(char* string);
void inHalf(char* string, char* dest);
int halfLength(char* string);
void otherHalf(char* string, char* dest);

int main() {
    //main strings
    char* string1 = "bill";
    char* string2 = "Hello";

    //printing the half of the string
    char halfString1[50];
    char halfString2[50];

    printf("Printing the half of the string\n");
    printf("Original Strings: %s, %s\n", string1, string2);
    inHalf(string1, halfString1);
    inHalf(string2, halfString2);
    printf("First Half: %s, %s\n", halfString1, halfString2);

    //printing the end half of the string
    char endHalf1[50];
    char endHalf2[50];
    otherHalf(string1, endHalf1);
    otherHalf(string2, endHalf2);
    printf("Last Half: %s, %s\n", endHalf1, endHalf2);

    return 0;
}

//spliting and printing the string in half
void inHalf(char* string, char* dest) {
    //getting the half of the string
    int length = halfLength(string);

    //only changing the string in the half
    for (int i = 0; i < length; i++) {
        dest[i] = string[i];
    }
    dest[length] = '\0';
}

//spliting the string in half, and only printing the ending half
void otherHalf(char* string, char* dest) {
    int length = halfLength(string);
    int fullLength = getLength(string);

    int j = 0;
    for (int i = length; i < fullLength; i++) {
        dest[j++] = string[i];
    }
    dest[j] = '\0';
}

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

//getting the half of the string
int halfLength(char* string) {
    int length = getLength(string);
    return length / 2;
}
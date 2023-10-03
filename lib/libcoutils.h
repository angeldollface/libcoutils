/*
LIBCOUTILS by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

#ifndef LIBCOUTILS_H
#define LIBCOUTILS_H

// Importing C's
// standard I/O APIs.
#include <stdio.h>

// We import this library
// to use the "isdigit"
// function.
#include <ctype.h>

// We import this library
// to use the "strlen"
// function.
#include <string.h>

// This function checks
// whether a character
// is an integer or not.
int is_int(char subject){
   int result = 1;
        if (isdigit(subject)){
            result = 0;
        }
        else {}
    return result;
}

// This function checks
// whether an array of characters
// is an integer or not.
int str_is_int(char subject[]){
    int result = 0;
    for (int i = 0; i < strlen(subject); i++){
        if (isdigit(subject[i])){}
        else {
            result = 1;
        }
    }
    return result;
}

// This function retrieves the number of lines
// in a text file and returns this length
// as an integer.
int get_number_of_lines(char subject[]){
    int result = 0;
    FILE *fp;
    fp=fopen(subject, "r");
    while (EOF != (fscanf(fp, "%*[^\n]"), fscanf(fp,"%*c"))){
        ++result;
    }
    result = result + 1;
    return result;
}

// This function checks whether
// a text file exists!
int file_exists(char subject[]){
    int result = 1;
    FILE *filepointer;
    filepointer = fopen(subject, "r");
    if (filepointer == NULL){}
    else {
        result = 0;
    }
    return result;
}

#endif

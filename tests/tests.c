/*
LIBCOUTILS by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

// Importing C's
// standard I/O APIs.
#include <stdio.h>

// Importing the "libcoutils"
// header from the "../lib"
// directory.
#include "../lib/libcoutils.h"

// This function tests the "is_int"
// method.
void test_char_is_int(){
    char real = '2';
    char fake = 'a';

    // Tests for the character that is a number.
    if (is_int(real) == 0){
        printf("Test for \"%c\" passed!\n", real);
    }
    else {
        printf("Test for \"%c\" failed!\n", real);
    }

    // Tests for the character that is not a number.
    if (is_int(fake) == 0){
        printf("Test for \"%c\" passed!\n", fake);
    }
    else {
        printf("Test for \"%c\" failed!\n", fake);
    }
}

// This function tests the "str_is_int"
// method.
void test_string_is_int(){
    char real[] = "22";
    char fake[] = "a2";

    // Tests for the string that is a number.
    if (str_is_int(real) == 0){
        printf("Test for \"%s\" passed!\n", real);
    }
    else {
        printf("Test for \"%s\" failed!\n", real);
    }

    // Tests for the string that is not a number.
    if (str_is_int(fake) == 0){
        printf("Test for \"%s\" passed!\n", fake);
    }
    else {
        printf("Test for \"%s\" failed!\n", fake);
    }
}

// This function tests the "file_exists"
// method.
void test_file_exists(){
   char file_name[] = "Makefile";

   // Checks whether the file in "file_name"
   // exists.
   if (file_exists(file_name) == 0){
        printf("The file \"%s\" exists!\n", file_name);
   }
   else {
        printf("The file \"%s\" does not exist!\n", file_name);
   }
}

// This function tests the "get_number_of_lines"
// method.
void test_line_nums(){
   char file_name[] = "Makefile";
   int expected = 7;

   // Checks whether the length of three
   // is returned.
   if (get_number_of_lines(file_name) == expected){
        printf("Expected line number received.\n");
   }
   else {
        printf("Expected line number not received.\n");
   }
}

// The main point of entry
// for the C compiler.
int main(){
    test_char_is_int();
    test_string_is_int();
    test_file_exists();
    test_line_nums();
    return 0;
}
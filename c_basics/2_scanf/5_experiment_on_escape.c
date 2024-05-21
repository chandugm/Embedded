/*note down all escape sequences and experiment with them.
Escape sequences in C language are special characters that are used to represent non-printable characters or provide formatting options in strings. 
\n: Newline
\t: Tab
\r: Carriage return
\a: Alert (beep)
\b: Backspace
\f: Form feed
\v: Vertical tab
\: Backslash
': Single quote
": Doube quote
? : Question mark
\0: Null character
\xhh: Hexadecimal representation (e.g.,'\x0A' for newline)*/


#include<stdio.h>
int main(){

//New line
printf("Hello\nchandu\n");
//Tab
printf("This is\ttabbed\n");

//carruage return
printf("Carriage\rreturn.\n");

// Alert (beep)
printf("Alert\aBeep!\n");

// Backspace
printf("Backspace\bBackspace\n");

// Form feed
printf("Form feed\fExample.\n");

// Vertical tab
printf("Vertical\vtab.\n");

// Backslash
printf("Backslash\\Example.\n");

// Single quote
printf("Single quote: \'\n");

// Double quote
printf("Double quote: \"\n");

// Question mark
printf("Question mark?\n");

// Null character
printf("Null \\0 character.\n");

// Hexadecimal representation
printf("Hexadecimal:\x63\x68\x61\x6E\x64\x75\n"); 

return 0;
}


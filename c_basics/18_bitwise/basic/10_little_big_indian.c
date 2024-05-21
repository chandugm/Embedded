//10. WAP to convert Little endian integer to Big endian integer 
#include<stdio.h>

int main() {
    int num = 0x12345678;
    int big_endian_num = ((num << 24) & 0xFF000000) |((num << 8)  & 0x00FF0000) |  ((num >> 8)  & 0x0000FF00) |  ((num >> 24) & 0x000000FF);  
//	num=((num >> 24) | (num << 24) |(num >> 8)&(0x0000FF00) | (num << 8)&(0x00FF0000))    
printf("%X\n", big_endian_num);  
    return 0;
}


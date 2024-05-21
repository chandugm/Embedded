#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swap\na=%d\tAddress of a=%p\t b=%d\t Address of b:%p\n",a,&a,b,&b);
	swap(&a,&b);
	printf("Call by reference\na=%d\tAddress of a=%p\t b=%d address of b%p\n",a,&a,b,&b);
	return 0;
}
void swap(int *a,int *b) 
{
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
}
/*
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from 3_cbr-dbg...done.
(gdb) b main
Breakpoint 1 at 0x722: file 3_cbr.c, line 4.
(gdb) s
The program is not being run.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/pointers/3_cbr-dbg 

Breakpoint 1, main () at 3_cbr.c:4
4	{
(gdb) s
6		printf("Enter a and b values :");
(gdb) n
7		scanf("%d%d",&a,&b);
(gdb) n
Enter a and b values :98 99
8		printf("before swap\na=%d\tAddress of a=%p\t b=%d\t Address of b:%p\n",a,&a,b,&b);
(gdb) n
before swap
a=98	Address of a=0x7fffffffdf30	 b=99	 Address of b:0x7fffffffdf34
9		swap(&a,&b);
(gdb) s
swap (a=0x7fffffffdf30, b=0x7fffffffdf34) at 3_cbr.c:15
15	        *a=*a+*b;
(gdb) s
16	        *b=*a-*b;
(gdb) s
17	        *a=*a-*b;
(gdb) s
18	}
(gdb) s
main () at 3_cbr.c:10
10		printf("Call by reference\na=%d\tAddress of a=%p\t b=%d address of b%p\n",a,&a,b,&b);
(gdb) n
Call by reference
a=99	Address of a=0x7fffffffdf30	 b=98 address of b0x7fffffffdf34
11		return 0;
(gdb) s
12	}
*/

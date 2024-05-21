//1) Write a program to swap two numbers using Call by Value and Call by Reference.
#include<stdio.h>
void swapcbv(int,int);
int main()
{
	int a,b;
	printf("Enter a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swap\na=%d\tAddress of a=%p\t b=%d\t Address of b:%p\n",a,&a,b,&b);
	swapcbv(a,b);
	return 0;
}
void swapcbv(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf(" Call by value\na=%d\tb=%d\n",a,b);
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
Reading symbols from 2_cbv-dbg...done.
(gdb) b main
Breakpoint 1 at 0x722: file 2_cbv.c, line 5.
(gdb) b 13
Breakpoint 2 at 0x7ba: file 2_cbv.c, line 13.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/pointers/2_cbv-dbg 

Breakpoint 1, main () at 2_cbv.c:5
warning: Source file is more recent than executable.
5	{
(gdb) s
7		printf("Enter a and b values :");
(gdb) n
8		scanf("%d%d",&a,&b);
(gdb) n
Enter a and b values :5
6
9		printf("before swap\na=%d\tAddress of a=%p\t b=%d\t Address of b:%p\n",a,&a,b,&b);
(gdb) n
before swap
a=5	Address of a=0x7fffffffdf00	 b=6	 Address of b:0x7fffffffdf04
10		swapcbv(a,b);
(gdb) s

Breakpoint 2, swapcbv (a=5, b=6) at 2_cbv.c:15
15	a=a+b;
(gdb) s
16	b=a-b;
(gdb) watch b
Hardware watchpoint 3: b
(gdb) s

Hardware watchpoint 3: b

Old value = 6
New value = 5
swapcbv (a=11, b=5) at 2_cbv.c:17
17	a=a-b;
(gdb) s
18	printf(" Call by value\na=%d\tb=%d\n",a,b);
(gdb) n
 Call by value
a=6	b=5
19	}
*/

#include<stdio.h>
int main()
{
int c=5,*ptr;
printf("Add=%p\n",ptr);
printf("val=%d\n",*ptr);
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
Reading symbols from 1_pointer-dbg...done.
(gdb) b main
Breakpoint 1 at 0x652: file 1_pointer.c, line 4.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/pointers/1_pointer-dbg 

Breakpoint 1, main () at 1_pointer.c:4
4	int c=5,*ptr;
(gdb) p &c
$1 = (int *) 0x7fffffffdf04
(gdb) s
5	printf("Add=%p\n",ptr);
(gdb) n
Add=(nil)
6	printf("val=%d\n",*ptr);
(gdb) p ptr=0x7fffffffdf04
$2 = (int *) 0x7fffffffdf04
(gdb) n
val=5
7	}
(gdb) s
__libc_start_main (main=0x55555555464a <main>, argc=1, argv=0x7fffffffdff8, init=<optimized out>, fini=<optimized out>, rtld_fini=<optimized out>, stack_end=0x7fffffffdfe8) at ../csu/libc-start.c:344
344	../csu/libc-start.c: No such file or directory.
(gdb) 
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
Reading symbols from 1_pointer-dbg...done.
(gdb) b main
Breakpoint 1 at 0x652: file 1_pointer.c, line 5.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/pointers/1_pointer-dbg 

Breakpoint 1, main () at 1_pointer.c:5
5	printf("Add=%p\n",ptr);
(gdb) n
Add=(nil)
6	printf("val=%d\n",*ptr);
(gdb) n

Program received signal SIGSEGV, Segmentation fault.
0x000055555555466e in main () at 1_pointer.c:6
6	printf("val=%d\n",*ptr);
(gdb) n

Program terminated with signal SIGSEGV, Segmentation fault.
The program no longer exists.
(gdb) 
[1]+  Stopped                 gdb 1_pointer-dbg
*/

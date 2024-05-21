#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5,s6;
	float percentage;
	printf("six subjects marks of a student :");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	percentage=(float)(s1+s2+s3+s4+s5+s6)/600*100;
	if (percentage>=80 && percentage<=100)
		printf("Honours");
	else if (percentage>=60 && percentage<=79)
		printf("First Division");
	else if (percentage>=50 && percentage<=59)
		printf("Second Division");
	else if (percentage>=40 && percentage<=49)
		printf("Third Division");
	else if (percentage>=0 && percentage<=39)
		printf("Fail");
	return 0;
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
Reading symbols from 2_grades-dgb...done.
(gdb) b 2
Breakpoint 1 at 0x722: file 2_grades.c, line 2.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000000000000722 in main at 2_grades.c:2
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/control_statements/2_grades-dgb 

Breakpoint 1, main () at 2_grades.c:2
2	int main(){
(gdb) watch percentage
Hardware watchpoint 2: percentage
(gdb) s
5		printf("six subjects marks of a student :");
(gdb) n
6		scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
(gdb) n
six subjects marks of a student :58
68
78
88
98
48
7		percentage=(float)(s1+s2+s3+s4+s5+s6)/600*100;
(gdb) s

Hardware watchpoint 2: percentage

Old value = 4.59163468e-41
New value = 73
main () at 2_grades.c:8
8		if (percentage>=80 && percentage<=100)
(gdb) s
10		else if (percentage>=60 && percentage<=79)
(gdb) s
11			printf("First Division");
(gdb) s
__printf (format=0x55555555498f "First Division") at printf.c:28
28	printf.c: No such file or directory.
*/

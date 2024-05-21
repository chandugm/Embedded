/*6) Read  n numbers from user ,and print the biggest number of all.*/
#include<stdio.h>
int main()
{
        int i,num,big,n;
        printf("enter number of number to verify: ");
        scanf("%d",&n);
        printf("enter numbers: ");
        for(i=0;i<n;i++)
        {
           //     printf("enter number: ");
                scanf("%d",&num);
                if(i==0)
                        big=num;
                else if(i>0)
                {
                        if(big<num)
                                big=num;
                }
        }
        printf(" biggest number is:%d\n",big);
        return 0;
}
/*
km@KernelMasters:~/KM_GIT/km54aesd11/gdb/control_statements$ gdb 3_biggest_of_n-dbg 
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
Reading symbols from 3_biggest_of_n-dbg...done.
(gdb) b main
Breakpoint 1 at 0x722: file 3_biggest_of_n.c, line 4.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/control_statements/3_biggest_of_n-dbg 

Breakpoint 1, main () at 3_biggest_of_n.c:4
4	{
(gdb) watch big 
Hardware watchpoint 2: big
(gdb) watch i
Hardware watchpoint 3: i
(gdb) s
6	        printf("enter number of number to verify: ");
(gdb) n
7	        scanf("%d",&n);
(gdb) n
enter number of number to verify: 5
8	        printf("enter numbers: ");
(gdb) n
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = -8256
New value = 0
0x0000555555554772 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
12	                scanf("%d",&num);
(gdb) n
enter numbers: 56
13	                if(i==0)
(gdb) s
14	                        big=num;
(gdb) s

Hardware watchpoint 2: big

Old value = 32767
New value = 56
0x0000555555554798 in main () at 3_biggest_of_n.c:14
14	                        big=num;
(gdb) s
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = 0
New value = 1
0x00005555555547b2 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
12	                scanf("%d",&num);
(gdb) n
98
13	                if(i==0)
(gdb) s
15	                else if(i>0)
(gdb) s
17	                        if(big<num)
(gdb) s
18	                                big=num;
(gdb) s

Hardware watchpoint 2: big

Old value = 56
New value = 98
main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = 1
New value = 2
0x00005555555547b2 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
12	                scanf("%d",&num);
(gdb) n
42
13	                if(i==0)
(gdb) s
15	                else if(i>0)
(gdb) s
17	                        if(big<num)
(gdb) s
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = 2
New value = 3
0x00005555555547b2 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
12	                scanf("%d",&num);
(gdb) n
100
13	                if(i==0)
(gdb) s
15	                else if(i>0)
(gdb) s
17	                        if(big<num)
(gdb) s
18	                                big=num;
(gdb) s

Hardware watchpoint 2: big

Old value = 98
New value = 100
main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = 3
New value = 4
0x00005555555547b2 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
12	                scanf("%d",&num);
(gdb) n
98
13	                if(i==0)
(gdb) s
15	                else if(i>0)
(gdb) s
17	                        if(big<num)
(gdb) s
9	        for(i=0;i<n;i++)
(gdb) s

Hardware watchpoint 3: i

Old value = 4
New value = 5
0x00005555555547b2 in main () at 3_biggest_of_n.c:9
9	        for(i=0;i<n;i++)
(gdb) s
21	        printf(" biggest number is:%d\n",big);
(gdb) n
 biggest number is:100
22	        return 0;
(gdb) 
*/ 

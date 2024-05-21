#include<stdio.h>
int mystrcmp(char s1[],char s2[]);
int main()
{
	char s1[100],s2[100];
	int i;
	printf("Enter a string-1 :");
	scanf("%99[^\n]s",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]s",s2);
	i=mystrcmp(s1,s2);
	if (i<0) printf("string-2 is bigger\n");
	else if(i>0) printf("string-1 is bigger\n");
	else printf("both strings are equal\n");
	return 0;
}
int mystrcmp(char s1[],char s2[])
{
int i=0;
	for (i=0;s1[i]!=0 || s2[i]!=0;i++)
	{
		if (s1[i]-s2[i]==0)
			continue;
		else
			return s1[i]-s2[i];
	}
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
Reading symbols from strcnp-dbg...done.
(gdb) b main
Breakpoint 1 at 0x7b5: file strcmp.c, line 4.
(gdb) b mystrcmp
Breakpoint 2 at 0x89b: file strcmp.c, line 20.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/strings/strcnp-dbg 

Breakpoint 1, main () at strcmp.c:4
4	{
(gdb) watch i
Hardware watchpoint 3: i
(gdb) s
7		printf("Enter a string-1 :");
(gdb) n
8		scanf("%99[^\n]s",s1);
(gdb) n
Enter a string-1 :chandu
9		getchar();
(gdb) n
10		printf("Enter string-2 :");
(gdb) n
11		scanf("%99[^\n]s",s2);
(gdb) n
Enter string-2 :chintu
12		i=mystrcmp(s1,s2);
(gdb) s

Breakpoint 2, mystrcmp (s1=0x7fffffffde30 "chandu", s2=0x7fffffffdea0 "chintu") at strcmp.c:20
20	int i=0;
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) watch i
Hardware watchpoint 4: i
(gdb) s

Hardware watchpoint 4: i

Old value = 0
New value = 1
0x00005555555548d3 in mystrcmp (s1=0x7fffffffde30 "chandu", s2=0x7fffffffdea0 "chintu") at strcmp.c:21
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s

Hardware watchpoint 4: i

Old value = 1
New value = 2
0x00005555555548d3 in mystrcmp (s1=0x7fffffffde30 "chandu", s2=0x7fffffffdea0 "chintu") at strcmp.c:21
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) s
26				return s1[i]-s2[i];
(gdb) s
28	}
(gdb) s

Watchpoint 4 deleted because the program has left the block in
which its expression is valid.
0x0000555555554834 in main () at strcmp.c:12
12		i=mystrcmp(s1,s2);
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
Reading symbols from strcnp-dbg...done.
(gdb) b main
Breakpoint 1 at 0x7b5: file strcmp.c, line 4.
(gdb) mystrcmp
Undefined command: "mystrcmp".  Try "help".
(gdb) b mystrcmp
Breakpoint 2 at 0x89b: file strcmp.c, line 20.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/strings/strcnp-dbg 

Breakpoint 1, main () at strcmp.c:4
warning: Source file is more recent than executable.
4	{
(gdb) watch i
Hardware watchpoint 3: i
(gdb) s
7		printf("Enter a string-1 :");
(gdb) n
8		scanf("%99[^\n]s",s1);
(gdb) n
Enter a string-1 :chandu
9		getchar();
(gdb) n
10		printf("Enter string-2 :");
(gdb) n
11		scanf("%99[^\n]s",s2);
(gdb) n
Enter string-2 :chintu
12		i=mystrcmp(s1,s2);
(gdb) s

Breakpoint 2, mystrcmp (s1=0x7fffffffde30 "chandu", s2=0x7fffffffdea0 "chintu") at strcmp.c:20
20	int i=0;
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) s
21		for (i=0;s1[i]!=0 || s2[i]!=0;i++)
(gdb) s
23			if (s1[i]-s2[i]==0)
(gdb) ss
Undefined command: "ss".  Try "help".
(gdb) s
26				return s1[i]-s2[i];
(gdb) s
28	}
(gdb) s

Hardware watchpoint 3: i

Old value = 32767
New value = -8
main () at strcmp.c:13
13		if (i<0) printf("string-2 is bigger\n");
(gdb) 

*/

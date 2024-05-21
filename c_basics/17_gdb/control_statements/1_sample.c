  int Change_Value = 0;

  int Sum_it (int, int);
  void error_with_code (void);

  /******************************************/
  /*                                           */
  /* main () - main routine                    */
  /*                                           */
 /******************************************/

 int main (void)
 {
    int Arg_1 = 20, Arg_2 = 40;
    int i;


     for (i = 0; i < 10; i++) {
        if (Arg_1 > Arg_2)
             Arg_2 = Sum_it (Arg_1, Arg_2);
        else
            Arg_1 = Sum_it (Arg_1, Arg_2);
     }

     error_with_code ();

 }   /* End of main() */


 /**********************************************************/
 /*                                                        */
 /* Sum_it() - This routine adds two numbers and returns the
 result */
 /*                                                        */
 /**********************************************************/
 int Sum_it (int a, int b)

 {
     return a+b;

 } /* End of Sum_it */



 /**********************************************************/
 /*                                                        */
 /* error_with_code() - This routine has an intended bug.
							   */
/* 
                                                           */
/***************************************************************
*/
 void error_with_code(void)
 {
    int divide_value;
    int result;

    divide_value = Change_Value;
    result = 10 / divide_value;
    return ;

 } /* End of error_with_code() */
/*GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
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
Reading symbols from ./sample1_dbg...done.
(gdb) i b
No breakpoints or watchpoints.
(gdb) b 18
Breakpoint 1 at 0x610: file sample.c, line 18.
(gdb) watch Arg_1
No symbol "Arg_1" in current context.
(gdb) r
Starting program: /home/km/KM_gitlab/km54aesd10/GDB_techniques/sample1_dbg 

Breakpoint 1, main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) watch Arg_1
Hardware watchpoint 2: Arg_1
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) s
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
(gdb) s
Sum_it (a=20, b=40) at sample.c:39
39	     return a+b;
(gdb) s
41	 }  End of Sum_it */
/*(gdb) s

Hardware watchpoint 2: Arg_1

Old value = 20
New value = 60
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) watch Arg_2
Hardware watchpoint 3: Arg_2
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) s
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) n

Hardware watchpoint 3: Arg_2

Old value = 40
New value = 100
0x0000555555554633 in main () at sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) p i
$1 = 1
(gdb) s
18	     for (i = 0; i < 10; i++) {
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) s
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
(gdb) n

Hardware watchpoint 2: Arg_1

Old value = 60
New value = 160
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) p i
$2 = 2
(gdb) f
#0  main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) p i
$3 = 2
(gdb) f
#0  main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) f
#0  main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) f
#0  main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) f
#0  main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) p i
$4 = 2
(gdb)
******************************************************************************************************************
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
Reading symbols from sample-dbg...done.
(gdb) b 12
Breakpoint 1 at 0x602: file sample.c, line 12.
(gdb) b 58
Breakpoint 2 at 0x675: file sample.c, line 58.
(gdb) watch Arg_1
No symbol "Arg_1" in current context.
(gdb) r
Starting program: /home/km/KM_GIT/km54aesd11/gdb/sample-dbg 

Breakpoint 1, main () at sample.c:14
14	    int Arg_1 = 20, Arg_2 = 40;
(gdb) watch Arg_1
Hardware watchpoint 3: Arg_1
(gdb) watch Arg_2
Hardware watchpoint 4: Arg_2
(gdb) watch i
Hardware watchpoint 5: i
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000555555554602 in main at sample.c:12
	breakpoint already hit 1 time
2       breakpoint     keep y   0x0000555555554675 in error_with_code at sample.c:58
3       hw watchpoint  keep y                      Arg_1
4       hw watchpoint  keep y                      Arg_2
5       hw watchpoint  keep y                      i
(gdb) s

Hardware watchpoint 3: Arg_1

Old value = 32767
New value = 20
0x0000555555554609 in main () at sample.c:14
14	    int Arg_1 = 20, Arg_2 = 40;
(gdb) n

Hardware watchpoint 4: Arg_2

Old value = 0
New value = 40
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) n
19	        if (Arg_1 > Arg_2)
(gdb) n
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
(gdb) n

Hardware watchpoint 3: Arg_1

Old value = 20
New value = 60
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) c
Continuing.

Hardware watchpoint 5: i

Old value = 0
New value = 1
0x000055555555464b in main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) c
Continuing.

Hardware watchpoint 4: Arg_2

Old value = 40
New value = 100
0x0000555555554633 in main () at sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000555555554602 in main at sample.c:12
	breakpoint already hit 1 time
2       breakpoint     keep y   0x0000555555554675 in error_with_code at sample.c:58
3       hw watchpoint  keep y                      Arg_1
	breakpoint already hit 2 times
4       hw watchpoint  keep y                      Arg_2
	breakpoint already hit 2 times
5       hw watchpoint  keep y                      i
	breakpoint already hit 1 time
(gdb) s
18	     for (i = 0; i < 10; i++) {
(gdb) s

Hardware watchpoint 5: i

Old value = 1
New value = 2
0x000055555555464b in main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) c
Continuing.

Hardware watchpoint 3: Arg_1

Old value = 60
New value = 160
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) c
Continuing.

Hardware watchpoint 5: i

Old value = 2
New value = 3
0x000055555555464b in main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) s
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) c
Continuing.

Hardware watchpoint 4: Arg_2

Old value = 100
New value = 260
0x0000555555554633 in main () at sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) c
Continuing.

Hardware watchpoint 5: i

Old value = 3
New value = 4
0x000055555555464b in main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000555555554602 in main at sample.c:12
	breakpoint already hit 1 time
2       breakpoint     keep y   0x0000555555554675 in error_with_code at sample.c:58
3       hw watchpoint  keep y                      Arg_1
	breakpoint already hit 3 times
4       hw watchpoint  keep y                      Arg_2
	breakpoint already hit 3 times
5       hw watchpoint  keep y                      i
	breakpoint already hit 4 times
(gdb) c
Continuing.

Hardware watchpoint 3: Arg_1

Old value = 160
New value = 420
main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) continue
Continuing.

Hardware watchpoint 5: i

Old value = 4
New value = 5
0x000055555555464b in main () at sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) d 4
(gdb) d 3
(gdb) d 5
(gdb) c
Continuing.

Breakpoint 2, error_with_code () at sample.c:58
58	    divide_value = Change_Value;
(gdb) s
59	    result = 10 / divide_value;
(gdb) p divide_value=10
$1 = 10
(gdb) s
60	    return ;
(gdb) s
62	 }  End of error_with_code() */
/*(gdb) s
main () at sample.c:27
27	 }    End of main() */
/*(gdb) s
__libc_start_main (main=0x5555555545fa <main>, argc=1, argv=0x7fffffffe018, init=<optimized out>, fini=<optimized out>, rtld_fini=<optimized out>, stack_end=0x7fffffffe008)
    at ../csu/libc-start.c:344
344	../csu/libc-start.c: No such file or directory.
(gdb) s
__GI_exit (status=0) at exit.c:139
139	exit.c: No such file or directory.
(gdb) n
138	in exit.c
(gdb) 
****************************************************************************************************************************************
*/

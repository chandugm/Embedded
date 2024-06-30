#3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321
#!/bin/bash
num=$1
rev=0
while [ $num -gt 0 ]
do
rem=$(($num%10))
rev=$(($rev*10+$rem))
num=$(($num/10))
done
echo $rev

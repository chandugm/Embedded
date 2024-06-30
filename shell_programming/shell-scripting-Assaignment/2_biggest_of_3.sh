#2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.
#!/bin/bash
if [ "$#" -ne 3 ] ; then
echo Error:Required three arguments
exit 1
fi
num1=$1
num2=$2
num3=$3
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ] ; then
echo Number-1 bigger

elif [ "$num2" -gt "$num3" ] ; then
echo Number-2 bigger
else
echo NUmber-3 bigger
fi




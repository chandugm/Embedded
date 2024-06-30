#11.Write a shell script to find factorial of a given integer.
read n
d=$n
f=1
while [ $n -gt 0 ]
do
f=$((f*n))
n=$((n-1))
done
echo factorial of $d : $f

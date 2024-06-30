if [ "$#" -ne 2 ] ;
then
echo "Error:Required Two arguments"
echo "Usage: $0 <num1> <num2>"
exit 1
fi
num1=$1;
num2=$2;
sum=$((num1+num2))
echo $sum


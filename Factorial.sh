Write a Shell program to find the factorial of a number
PROGRAM:
echo "Enter a number"
read n
i=`expr $n - 1`
p=1
while [ $i -ge 1 ]
do
n=`expr $n \* $i`
i=`expr $i - 1`
done
echo "The Factorial of the given number is $n"

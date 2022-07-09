Write a shell script to check whether an input is a prime or not.
echo "Enter number"
read num
i=2
while test $i -lt $num
do
k=`expr $num % $i`
if test $k -eq 0
then
echo "number is not prime"
exit
fi
i=`expr $i + 1`
done
echo "number is prime"

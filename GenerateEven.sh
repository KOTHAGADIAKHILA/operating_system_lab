Write a shell script to generate the series of even number
echo "Enter value of n"
read n
i=0
while test $i -le $n
do
k=`expr $i % 2`
if [ $k -eq 0 ]
then
echo $i
fi
i=`expr $i + 1`
done

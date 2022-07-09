Write a shell script to find out the length of an input string.
echo "Enter string"
read str
len=`echo $str | wc -c` len=`expr $len - 1`
echo "Length of string = $len"

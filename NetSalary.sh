Write a shell script to calculate the net salary of an employee in a particular month
considering various allowances (TA, DA, HRA) and deductions (INCOME TAX,
PROVIDEND FUND) as:
TA=15 percent of basic salary
DA=2 percent of basic salary
HRA=10 percent of basic salary
INCOME TAX=5 percent of salary
PROVIDEND FUND=10 percent of salary

echo "enter basic salary"
read bs
hra=`echo $bs \* 10 / 100 | bc`
ta=`echo $bs \* 5 / 100 |bc`
da=`echo $bs \* 2 / 100 |bc`
tax=`echo $bs \* 5 / 100 |bc`
pf=`echo $bs \* 10 / 100 |bc`
add=`echo $hra + $da + $ta |bc`
ded=`echo $tax + $pf |bc`
netsal=`echo $bs + $add - $ded |bc`
echo net salary is $netsal

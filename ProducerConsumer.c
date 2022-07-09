/*Problem: Given the common fixed-size buffer, the task is to make sure that
the producer can’t add data into the buffer when it is full and the consumer
can’t remove data from an empty buffer.*/
  #include<stdio.h>
#include<stdlib.h>

int mutex=1;

int full=0;
int empty=10,x=0;

void producer()
{
--mutex;
++full;
--empty;

x++;
printf("Producer produces item %d",x);


++mutex;
}

void consumer()
{
--mutex;
++empty;

--full;

printf("Consumer consumes item %d",x);
x--;
++mutex;
}

int main()
{
int c,i;
printf("Enter 1 for Producer\n Enter 2 for Consumer \n Enter 3 for Exit");
//#pragma omp critical
while(1)
{
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:{if(mutex==1&&empty!=0)
{
producer();
}
else
printf("Buffer is full!");
}
break;
case 2:{if(mutex==1&&full!=0)
{
consumer();
}
else
printf("Buffer is empty");
}
break;
case 3:exit(0);
break;
}
}
}

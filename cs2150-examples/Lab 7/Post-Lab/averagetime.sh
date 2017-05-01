#
#AverageTime Script Lab7, Robert Alexander, RMA3MZ
#

time=0
total=0
avg=0

echo "Please enter a value"
read input

if [ "$input" == "quit" ]
then
    exit 0
fi

for (( i=1 ; i<=5; i++ ))
do
echo "running iteration $i"
time=`./a.out $input`
total=`expr $total + $time`
echo "time taken:  $time"
done

avg=`expr $total / 5`

echo "average time was $avg"
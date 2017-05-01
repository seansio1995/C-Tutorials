#
#AverageTime Script Lab6, Robert Alexander, RMA3MZ
#

echo "Please enter the Dictionary FileName"
read dictFile
echo "Please enter the Grid Filename"
read gridFile

#gets first running time
RUNNING_TIME=`./a.out $dictFile $gridFile | tail -1`

total=0 #holds total of all running times
total=`expr $total + $RUNNING_TIME` #adds first running time

#Adds second running time
RUNNING_TIME_2=`./a.out $dictFile $gridFile | tail -1`
total=`expr $total + $RUNNING_TIME_2`

#Adds third running time
RUNNING_TIME_3=`./a.out $dictFile $gridFile | tail -1`
total=`expr $total + $RUNNING_TIME_3`

#Adds fourth running time
RUNNING_TIME_4=`./a.out $dictFile $gridFile | tail -1`
total=`expr $total + $RUNNING_TIME_4`

#Adds fifth running time
RUNNING_TIME_5=`./a.out $dictFile $gridFile | tail -1`
total=`expr $total + $RUNNING_TIME_5`

#Gets average of the five running times
total=`expr $total / 5`

#Prints running time
echo "total running time is" $total
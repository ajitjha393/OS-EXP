#!/bin/bash

echo -e "Enter the number of terms : \c"
read num
sum=0

echo "Enter $num numbers :"
for((i=1 ; i<=num; i++))
do
    read n1
    sum=$((sum+n1))
done    

echo "SUM = $sum"


# ------------------------------
# OUTPUT:

# Enter the number of terms : 4
# Enter 4 numbers :
# 1
# 2
# 5
# 6
# SUM = 14

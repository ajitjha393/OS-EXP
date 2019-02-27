#!/bin/bash

echo -e "Enter a number : \c"
read num
fact=1

for ((i=1 ; i<=num ;i++))
do
    ((fact *= i))
done

echo "FACTORIAL $num! = $fact"

# -----------------------------------------
# OUTPUT:

# Enter a number : 5
# FACTORIAL 5! = 120

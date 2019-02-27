echo -e "Enter a number : \c "
read num

if [ $((num%2)) -eq 0 ]
then
    echo "$num is an EVEN number"
else
    echo "$num is an ODD number "
fi


# -------------------------------------------
# OUTPUT

# Enter a number : 5
# 5 is an ODD number 

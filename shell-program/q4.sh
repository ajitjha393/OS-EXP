echo -e "Enter a name : \c"
read name
if [ -d $name ]
then 
    echo "$name is a DIRECTORY"
elif [ -f $name ]
then 
    echo "$name is a FILE"
else 
    echo "It is neither a FILE nor a DIRECTORY"        
fi    


# -----------------------------
# OUTPUT :

# Enter a name : hello.sh
# hello.sh is a FILE

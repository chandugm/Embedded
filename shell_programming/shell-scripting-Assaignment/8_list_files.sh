#8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.
#!/bin/bash
for file  in *
do
	if [ -f $file ] && [ -r $file ] && [ -w $file ]   && [ -x $file ]
	then
	echo $file
	fi 
done


#4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.
#!/bin/bash
if [ "$#" -ne 1 ] ;then
echo error:Required only one argument
exit 1
fi
file=$1
if [ -f $file ] ; then
echo file exist
else
echo file not exist
fi 


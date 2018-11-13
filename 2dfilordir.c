//file or directory
if [ $# -eq 0 ]
echo "no arguments"
else
for fname in $*
do
if [ -f $fname ]
then
echo $fname is a file
count="wc -l $fname"
echo no. of lines in $fname are:
echo $($count)
else
echo $fname is directory
fi
done
fi

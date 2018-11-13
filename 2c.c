//execute permissions
if [ $# -eq 0 ]
then
echo "no arguments"
else
echo "files containing read,write and execute permissions in the present working directory are:"
for fname in $(ls)
do
if [ -r $fname -a -w $fname -a -x $fname ]
then
echo $fname
fi
done

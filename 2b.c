//delete all lines
if [ $# -eq 0 ]
then
echo "no arguments"
else
pattern=$1
echo $pattern
shift
for fname in $*
do
if [ -f $fname ]
then
echo delete $pattern from fname
sed '/' $pattern '/d' $fname|cat > 2.txt
cat 2.txt > $fname
else
echo $fname not found
fi
done
fi

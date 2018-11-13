//program to print lines

echo "enter filename"
read fname
echo "Enter start number"
read s
echo "Enter end line"
read e
sed -n ''$s','$e' p' $fname

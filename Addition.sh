echo "Enter anumber"
read a
echo "enter second number"
read b
echo "enter 1 to add
2 to substract
enter 3 to multiply
enter 4 to divide"
echo "enter your choice"
read op
case $op in 
1)rs=$((a+b))
  echo "sum= $rs";;
2)rs=$((a-b))
  echo "sub=$rs";;
3)rs=$((a*b))
  echo "multiply=$rs";;
4)if [$b -ne 0]
then
  rs=$((a\b));
  echo "Quotient=$rs"
else
  echo "wrong entry"
fi;;
*)echo "invalid entry"
esac
 


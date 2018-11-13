BEGIN{
word=0
char=0
}
{
word=word+NF
char=char+length($0)
}
END{
print "no.of words:",word
print "no.of characters:",char
print "no.of lines:",NR
}

import binascii
mason = binascii.hexlify(b'Mason Allen')
hexx = "HEX ="
line = "————————————————————————————————————————————————————————————————————"
print (line)
print (line)
print ("Mason Allen")
print (hexx,mason)
print (line)
a = input("Input text to encode: ")
f = binascii.hexlify(a.encode('utf-8'))
print ("HEX =",  f)
print (line)

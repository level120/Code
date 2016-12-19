Python 3.4.4 (v3.4.4:737efcadf5a6, Dec 20 2015, 20:20:57) [MSC v.1600 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> a=input().split()
0 4 2 5 6
>>> b=0
>>> for i in a:
	if i!=' ':
		b=b+(int(i)*int(i))

		
>>> print(b%10)
1
>>> 

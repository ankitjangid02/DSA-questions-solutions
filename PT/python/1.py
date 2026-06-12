print(b"hello")

#r=range(1,5)

print(list(range(1,10,2)))

# for i in range(1,11):
#     print(i,end=" " )


fruits=["apple","banana","cherry"]
for i in range(0,3):
    print(fruits[i])



vowel={'a','e','i','o','u'}
fset=frozenset(vowel)
print(set(fset))


d={
    "Name":"Prince",
    "Age":30
}
print(d["Name"])

a=b"hello"
print(a)


data=bytearray([65,66,67])
data[1]=68
print(data)


n=None
print(n)
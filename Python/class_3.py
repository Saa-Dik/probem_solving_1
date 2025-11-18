# #control flow:(pass)
a= 10
if a >20:
    pass
print("Output pass the value") 

#loop(while)
condition = True
while condition:
    print("a")
    condition=False

a=0
while a<=20:
    a=a+1
    print (a)

# loop(for)
a= [1,2,3,4,5,6,7]
for i in a:
    if i==2:
        continue
    print(i)

# range function:
for i in range(50,60):
    print(i)

for i in range(1,10): #akn a je 2 peramiter nice tar karon amra 2 koira barbe
    print(i)
    for j in range(1,20):
        print(i,'*',j,':' ,i*j)
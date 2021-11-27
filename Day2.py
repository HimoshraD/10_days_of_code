size=int(input("ENTER ARRAY SIZE: "))
arr=[]
print("ENTER THE ELEMENTS: ")
for i in range(size):
    element=int(input())
    arr.append(element)
print("THE REVERSED ARRAY IS: ",*arr[::-1],sep="\n") 

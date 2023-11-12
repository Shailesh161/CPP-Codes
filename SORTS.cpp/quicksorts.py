percent=[]
n=int(input("Enter total number of students :"))
for i in range (0,n):
    print("Enter the percentage : ")
    sg=float(input())
    percent.append(sg)
print("You entered percentages are :",percent)

def quicksort(percent):
    if len(percent)<=1:
        return percent

    else:
        pivot=percent.pop()

        greater=[]
        lower=[]
    for i in percent:
        if i > pivot:
            greater.append(i)
        else:
            lower.append(i)    
    return quicksort(lower)+[pivot]+quicksort(greater)
print(quicksort(percent))    
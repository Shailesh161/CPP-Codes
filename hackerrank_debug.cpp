clubmembers=[]
n=int(input("Enter the roll numbers of clubmembers :"))
for i in range(0,n):
    a=int(input())
    clubmembers.append(a)
print(clubmembers)

def insertion_sort():
    for i in range(1,n):
        key=clubmembers[i]
        j=i-1
        while j>=0 and key < clubmembers[j]:
            clubmembers[j+1]=clubmembers[j]
            j=j-1
        clubmembers[j+1]=key
insertion_sort()
print("\nclubmembers are : ",clubmembers)

print("Enter number which you want to search:")
num=int(input())
def ternary_search(left,right,arr,roll_no):
    
    middle1 = left + (right-left) // 3
    middle2 = left + 2*(right-left) // 3
    if right >= left:
        if arr[middle1] == roll_no:
            return f'ROLL_NO FOUND AT INDEX {middle1}'
        
        elif arr[middle2] == roll_no:
            
            return f'ROLL_NO FOUND AT INDEX {middle2}'
        elif roll_no < arr[middle1]:
            return ternary_search(left,middle1-1,arr,roll_no)
        elif roll_no > arr[middle2]:
            return ternary_search(middle2+1,right,arr,roll_no)
        else:
            return ternary_search(middle1+1,middle2-1,arr,roll_no)
    else:
        print("The above roll number is not the member of club .")
        
print(ternary_search(0,len(clubmembers)-1,clubmembers,num))


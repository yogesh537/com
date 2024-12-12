'''Write a Python program to store first year percentage of students in array. Write function for sorting array of floating point numbers in ascending order using quick sort and display top five scores'''
#---------------------------------------------------------------
def partition(a,name, low, high):
    pivot = a[high]
    i = low - 1
    for j in range(low, high):
        if a[j] >= pivot:
            i = i + 1
            (a[i], a[j]) = (a[j], a[i])
            (name[i], name[j]) = (name[j], name[i])
    (a[i + 1], a[high]) = (a[high], a[i + 1])
    (name[i + 1], name[high]) = (name[high], name[i + 1])
    return i + 1
#----------------------------------------------------------------
def quickSort(a, name,low, high):
    if low < high:
        pi = partition(a,name,low, high)
        quickSort(a,name ,low, pi - 1)
        quickSort(a,name, pi + 1, high)
#----------------------------------------------------------------     
def display(a,name,n):   
    print("STUDENT NAME\t PERCENTAGE")
    for i in range(n):
        print(name[i],"\t",a[i])        
#-----------------------------------------------------------------	
a=[]
name=[]
while(1):
       n=int(input("\n\nENTER TOTAL NUMBER OF STUDENT RECORDS: ")) 
       if (n>=5):
          for i in range(n):
              y=input("\n\nENTER THE NAME OF THE STUDENT: ")
              name.append(y)    
              x=float(input("\n\nENTER THE FIRST YEAR STUDENT PERCENTAGE: "))
              a.append(x)
       else:
           print("\n\n\n\t\tENTER GREATER THAN EQUAL TO 5 RECORDS!!! ")       
    
n = len(a)
display(a,name,n)
quickSort(a,name, 0, n-1)
print('FIRST FIVE TOPPERS ARE:')
display(a,name,5)

  

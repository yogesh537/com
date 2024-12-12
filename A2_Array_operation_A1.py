'''Write a Python program to store marks scored in subject “Fundamental of Data Structure” by
N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency'''
#----------------------------------------------------------------------------------------------------------
def insert(a,n):

    for i in range(n):
        x=int(input("ENTER THE MARKS  "))
        a.append(x)
    print(a)

#----------------------------------------------------------------------------------------------------------
def ave(a,n):
    sum=0
    avg=0.0
    count=0
    for i in range(n):
        if (a[i]>=0):
            count=count+1
            sum=sum+a[i]
    avg=sum/count
    print("TOTAL SUM=  ",sum)     
    print("TOTAL AVERAGE=  ",avg)     
#-----------------------------------------------------------------------------------------------------------
def high(a,n):
    max=0
    for i in range(n):
        if a[i]>max:
           max=a[i]
    print("HIGHEST MARKS :",max)

#------------------------------------------------------------------------------------------------------------
def Min(a,n):
    min=9999
    for i in range(n):
        if a[i]<min and a[i]!=-1:
           min=a[i]
    print("LOWEST MARKS:  ",min)      
#-------------------------------------------------------------------------------------------------------------
def absent(a,n):
    count=0
    for i in range(n):
        if a[i]==-1:
           count=count+1
    print("TOTAL ABSENT STUDENT:  ",count)  
#-------------------------------------------------------------------------------------------------------------   
n=int(input("ENTRE TOTAL NO.OF STUDENTS :  "))
a=[]
insert(a,n)
ave(a,n)
high(a,n)
Min(a,n)
absent(a,n)

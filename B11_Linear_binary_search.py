'''a) Write a Python program to store roll numbers of student in array who attended training
program in random order. Write function for searching whether particular student
attended training program or not, using Linear search and Sentinel search.
b) Write a Python program to store roll numbers of student array who attended training
program in sorted order. Write function for searching whether particular student attended
training program or not, using Binary search and Fibonacci search'''
#-----------------------------------------------------------------------------------------------------
def linear_ser(a,n):
	x=int(input("ENTER THE ROLL NO TO BE SEARCH: "))
	for i in range(n):
     		if a[i]==x:
        	   return i
        
#---------------------------------------------------------------------------------------------------
def sentinel_ser(a,temp):
    n = len(a)
    a.append(temp)
    i = 0
    while(a[i] != temp):
        i += 1
    if(i == n):
        return None
    else:
        return i
#--------------------------------------------------------------------------------------------------
def binary_ser(b,m):
    m=int(input("\n\t ENTER TOTAL STUDENTS FOR TRAINING PROGRAME" ))
    while(i<m):
         R=int(input("\n\t ENTER ROLL NO :  " ))
         if i==0:
            a.append(R)
         elif i>0 and R>a[i-1]:
             a.append(R)
         else:     
             print("ENTER GRETAER NO THAN PREVIOUS")
    first=0
    last=n-1
    ser=int(input("ENTER THE DATA TO BE SEARCH"))
    while(first<=last):
          mid=(first+last)//2
          if a[mid]==ser:
             print("\n\nSEARCH SUCCESFUL")
          elif ser>a[mid]:
             first=mid+1   
          else:
             last=mid-1
    print("\n\n SEARCH UNSUCCESFUL")                   
#---------------------------------------------------------------------------------------------------
i=0         
b=[]        
a=[]
n=int(input("\n\t ENTER TOTAL STUDENTS FOR TRAINING PROGRAME" ))
for i in range(n):
      R=int(input("\n\t ENTER ROLL NO :  " ))
      a.append(R)

print("1.LINEAR SEARCH\n2.SENTINEL SEARCH\n3.BINARY SEARCH\n4.FIBONACCI SEARCH")
print("ENTER YOUR CHOICE: ")
ch=int(input())
while(ch<5):
     
     if ch==1:
          q=int(linear_ser(a,n) )     
          if q<=0:
             print("\n\n\t  NOT ATTEND THE PROGRAME")
          else:
             print("\n\n\t ATTEND THE PROGRAME") 

     elif ch==2:
          q=int(sentinel_ser(a,n)      )
          if q>=0:
             print("\n\n\t ATTEND THE PROGRAME")
          else:
             print("\n\n\t NOT ATTEND THE PROGRAME") 
     elif ch==3:
          display(balance)
     else: print("ENTER CORRECT CHOICE!!")
    



q=linear_ser(a,n)      



if q==-1:
   print("\n\n\t  NOT ATTEND THE PROGRAME")
else:
   print("\n\n\t 	ATTEND THE PROGRAME") 

   

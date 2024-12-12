#---------------------------------------------------
def selection_sort(a,n):
    for i in range(len(a)):
        min=i
        for j in range(i+1,n):
             if a[i]<a[j]:
                temp=a[j]
                a[j]=a[i]
                a[i]=temp
                temp1=name[j]
                name[j]=name[i]
                name[i]=temp1
    print("FIRST FIVE TOPPERS AFTER APPLYING SELELCTION SORT")
    print("\n\n\tSTUDENT NAME\t PERCENTAGE")
    for i in range(5):
        print("\n",name[i])
        print("\t",a[i])  
#----------------------------------------------------------    
def bubble_sort(a):
    n=len(a)
    for i in range(n):
        for j in range(n-1):
             if  a[i]>a[j]:
                 temp=a[j]
                 a[j]=a[i]
                 a[i]=temp
                 temp1=name[j]
                 name[j]=name[i]
                 name[i]=temp1
    print("FIRST FIVE TOPPERS AFTER APPLYING BUBBLE SORT")
    print("\n\n\tSTUDENT NAME\t PERCENTAGE")
    for i in range(5):
         print("\n",name[i])
         print("\t",a[i])  

#-----------------------------------------------------------                             
def display(a,name):
    print("----STUDENT RESULT----")
    n=len(a)
    print("\n\n\tSTUDENT NAME\t PERCENTAGE")
    for i in range(n):
        print("\n\n",name[i])
        print("\t",a[i])        
#--------------------------------------------------------------        
def insert(a,name,n):
   for i in range(n):
        x=float(input("ENTER THE FIRST YEAR PERCENTAGE:   "))
        a.append(x)
        Q=input("ENTER THE NAME OF THE STUDENT:   ")
        name.append(Q)
#-----------------------------------------------------------------
n=int(input("ENTER TOTAL NUMBER OF ARRAY ELEMENTS(N>6)"))
a=[]
name=[]
insert(a,name,n)        
display(a,name)
selection_sort(a,n)
bubble_sort(a)


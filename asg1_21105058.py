#Assignment 1
                     #1st program
print("                    1st program")
number1=float(input("enter first number: "))
number2=float(input("enter second number: "))
number3=float(input("enter third number: "))
average=(number1+number2+number3)/3
print("average is ",average)

                     #2nd program
print("                    2nd program")
Income=float(input("enter your gross income: "))
Dependents=int(input("enter number of dependents: "))
Tax=float((Income-10000-3000*Dependents)*0.2)
print("Tax is: ",Tax)


                     #3rd program
print("                    3rd program")
print("Student=[SID, Name, Gender, Course Name, CGPA]")
Student=[21105058, 'Rahul', 'M', 'ECE', 8.5]
print("Student= ",Student)

                     #4th program
print("                    4th program")
print("Marks of five students")
Marks=[88,85,67,22,49]
print(" List of marks before sorting",Marks)
Marks.sort()
print(" List of marks after sorting",Marks)

                     #5th program
print("                    5th program (a)")
colour=['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
colour.pop(3)
print(colour)

                      #5th program
print("                    5th program(b)")
colour=['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
colour[3:5]=['Purple']
print(colour)

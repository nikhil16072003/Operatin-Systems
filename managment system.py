'''
# VIT Student Mgmt System 

name = 'Jack'
age = 20
cgpa = 9.2


print(name, '('+str(age)+')', 'is having CGPA', cgpa)

#print(Jack (20) is having CGPA 9.2)



name = input("Enter the student name: ")
age = input("Enter the student age: ")
cgpa = input("Enter the cgpa: ")


print(name, '2'+'2', 'is having CGPA', cgpa, 'in his 12th std')

print(f'{name} ({age}) is having CGPA {cgpa} in his 12th std')




# CGPA calculation

name = input("Enter the student name: ")
reg_no = input("Enter the Reg No: ")
maths = int(input("Enter the math mark: "))
physics = int(input("Enter the physics mark: "))
chemistry = int(input("Enter the chemistry mark: "))

percentage = ((maths + physics + chemistry)/300) * 100
cgpa = percentage / 9.5

print(f'{name} ({reg_no}) is having CGPA {round(cgpa,2)}')


'''

# VIT Form filling


mail_id = "ram.dharsan@vit.ac.in"

print(mail_id[-1:8])


















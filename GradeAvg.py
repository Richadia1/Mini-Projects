# Richadia Rose

"""
Algorithim: This is a program to calculate a grade using homework, labs, test
1.  Ask the user for 6 assignment grades 
2. First get 3 homework grades
3. Ask the user for 2 lab grades
4. Ask the user for the exam grade
5. comoute the homework average (hw1 + hw 2 + hw 3)/3
6. Compute the lab average (lab1 + lab2)/2
7. The final grade is homeworkAvg * .50 + labAvg * .20 +Exam * .30
8. Output the results with labels numbers are floats formatted to 2 decimal places """

# Get 3 homework grades
hw1= int(input("enter a homework grade"))
hw2 = int(input("Enter the second homework grade"))
hw3 = int(input("Enter the third homeowkr grade"))

#get 2 lab grades
lab1= int(input("Enter the first lab grade"))
lab2 = int(input("Enter the second lab grade"))

#get the final exam grade
FinalExam = int(input("Enter the exam grade"))

#compute the homework average
HwkAvg= (hw1+ hw2+ hw3) /3

#compute the lab average
LabAvg = (lab1+ lab2) /2

#compute the final average

HwkPoints =(HwkAvg * .50)

LabPoints =(LabAvg *.20)

ExamPoints = (FinalExam * .30)

#Final  grade formula 
FinalAvg = (HwkAvg * .50) + (LabAvg * .20) + (FinalExam * .30) #all points comninedLab

FinalGrade =  HwkPoints + LabPoints+ ExamPoints

#Output
print ( f' Points awarded for homework: {HwkPoints: .2f} ' )
print ( f' Points awarded for lab(s): {LabPoints: .2f} ' )
print ( f' Points awarded for exam(s): {ExamPoints: .2f} ' )
print ( f' Your final grade is: { FinalGrade: .2f} ' )

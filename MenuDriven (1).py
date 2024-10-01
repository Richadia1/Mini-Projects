#Richadia Rose
#Allow users to choose between calculating the area of three shapes: a circle,
#a rectangle, and a square.
'''Algorithm
1. Display the menu
2. Ask the user for input
3. If the user selects 1, ask for the radius of the circle, and then calculate and display the area
    area of circle = pi x radius^2
4. If the user selects 2, ask for the length and breath of the rectangle and calculate, display the area
    area of rectangle = length x breadth
5. If the user selects 3, ask for the side length of the square and then calculate display
    area of square = side x side
6. If user selects 4, the program should exit and terminate
7. If the user inputs any other options, the program should display an error message
    "Please enter the correct choice."
'''
p = True
print("Menu Driven Program\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Square\n4. Exit")
while p:
    user_input = int(input("Please enter your choice: "))
    if user_input not in [1,2,3,4]:
        print("Please enter the correct choice. Either 1, 2, 3, or 4.")
        continue
    else:
        if user_input == 1:
            radius = float(input("Enter the radius of the circle: "))
            areaCircle = 3.14 * (radius)**2
            print(f"Area of the Circle is {areaCircle:.2f}")
        elif user_input == 2:
            length = float(input("Enter the length of the rectangle: "))
            breadth = float(input("Enter the breadth of the rectangle: "))
            areaRectangle = length * breadth
            print(f"Area of the Rectangle is {areaRectangle:.2f}")
        elif user_input == 3:
            sidelength = float(input("Enter the length of the square: "))
            areaSquare = sidelength**2
            print(f"Area of the square is {areaSquare:.2f}")
        else:
            print("End of loop.")
            p = False




    

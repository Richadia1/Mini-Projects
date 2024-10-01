#Richadia Rose
#Simple ATM
"""
1. Welcome the user
2. Explain options
3. Input user option
4. Input user deposit
5. Input user withdrawal
6. Display new balance
7. Thank you
"""

balance = 1000
pink = 0
print ("Welcome to the ATM!")
#Enter while loop
while (pink != 4):
    print ("Menu Options: \n1.Deposit Money \n2.Withdraw Money \n3.Check Balance \n4.Exit")
    pink = float(input("enter an option now"))
    if (pink == 1):
        deposit = float(input("Enter the amount to deposit:"))
        balance += deposit
        print (f"Deposit succesful. New Balance ${balance: .2f}")
    elif (pink == 2):
        withdrawal = int(input("How much do you want to withdraw?"))
        balance = balance - withdrawal
        print (f"Withdrawal successful. New Balance: ${balance}")
    elif (pink == 3):
        print (f"Current balance: ${balance:.2f}")
    elif (pink == 4):
        print ("Thank you for using the ATM!")
    else:
        print: ("You entered the wrong input")

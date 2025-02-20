class Bank:
    def __init__(self, name, accno, balance):
        self.name = name
        self.accno = accno
        self.balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount}. New balance is {self.balance}.")
        else:
            print("Invalid deposit amount. Please enter a positive number.")
        

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance.")
        else:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance is {self.balance}.")

    def display(self, no):
        if no == self.accno:
            print("Name:", self.name)
            print("Account Number:", self.accno)
            print("Balance:", self.balance)
        else:
            print("Account number does not exist.")

name = input("Enter the name: ")
accno = int(input("Enter the account number: "))
balance = int(input("Enter the balance: "))
b = Bank(name, accno, balance)

ch = 0
while ch != 4:
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Display")
    print("4. Exit")
    ch = int(input("Enter your choice: "))
    if ch == 1:
        amount = int(input("Enter the amount to be deposited: "))
        b.deposit(amount)
    elif ch == 2:
        amount = int(input("Enter the amount to be withdrawn: "))
        b.withdraw(amount)
    elif ch == 3:
        no = int(input("Enter the account number: "))
        b.display(no)
    elif ch == 4:
        print("Exiting...")
    else:
        print("Invalid choice. Please try again.")   
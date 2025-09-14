# CPP
🍵 Tea Stall Billing System

This is a simple C++ console application that simulates a Tea Stall billing system.
It provides a menu-driven program where customers can order Tea, Coffee, Bun Maska, and Water.
The system then generates a detailed bill that includes itemized costs, SGST, CGST, and a final payable amount.

The bill number auto-increments with each new bill, and all item quantities are reset after generating a bill.

** Features**

Simple menu-driven interface

Order items:

Tea – ₹10

Coffee – ₹50

Bun Maska – ₹100

Water – ₹20

Auto-increment bill number

Detailed bill with:

Itemized breakdown

SGST (2.5%) and CGST (2.5%)

Final payable amount

Reset quantities after each bill

🛠️ Technologies Used

Language: C++

Compiler: g++ (C++11 or later)

*Sample Output*
------ Welcome to Tea Stall ------
1. Tea-------10INR
2. Coffee----50INR
3. Bun Maska-100INR
4. Water-----20INR
5. Generate bill:
0. Exit
----------------------------------
Enter your choice: 1
You selected Tea
Enter number of items: 2

Enter your choice: 5
-----------------------------------
      Bill  no: 100
-----------------------------------
Tea           10 X 2     20
-----------------------------------
Total amount       :           20
SGST               :           0.5
CGST               :           0.5
Total amount to pay:           21
----------------------------------------------------------------------------------------------------------------

📚 Library Management System
A simple C++ console-based Library Management System that helps manage books in a small library.
It provides basic operations like adding books, checking them out, returning them, and viewing details.
Each book gets a unique auto-generated Book ID, and the system tracks availability status.
________________________________________
📌 Features
•	➕ Add a Book – store title & author, auto-generate Book ID
•	📖 Check Out a Book – mark book as unavailable
•	🔄 Return a Book – make book available again
•	👀 Display Book Details – view information about a book using its ID
•	🎯 Simple menu-driven interface
________________________________________
🛠️ Technologies Used
•	Language: C++
•	Compiler: g++ (C++11 or later)
________________________________________
📖 Sample Output
========= LIBRARY MANAGEMENT SYSTEM =======
1. Add a Book
2. Check Out a Book
3. Return a Book
4. Display Book Details
0. Exit
------------------------------------------
Enter your choice: 1

Enter the title: C++ Programming
Enter the author: Bjarne Stroustrup
Congrats! Book Added Successfully. Your Book ID is 501
________________________________________

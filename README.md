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


./tea_stall
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

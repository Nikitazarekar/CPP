                                                ## CPP

# Tea Stall Billing System

## Project Overview

This is a **menu-driven console application** simulating a tea stall billing system.
It allows customers to order **Tea, Coffee, Bun Maska, and Water** and generate a bill.
The program calculates the **total amount**, applies **SGST and CGST**, and shows the final payable amount.
It demonstrates **basic C++ concepts** such as `switch-case`, loops, arithmetic operations, and input/output.
The system is simple, interactive, and easy to use for beginners learning C++.

---

## Features

* Order multiple items with specified **quantity**.
* Generate a **bill** with item-wise prices and quantities.
* Calculates **total, SGST, CGST**, and final payable amount.
* Reset quantities automatically after generating the bill.
* Handles **invalid menu choices** with appropriate messages.

---

## How It Works

1. The program displays a **menu** of items with their prices.
2. The user selects an item by entering the corresponding **number**.
3. The program prompts for **quantity** of the selected item.
4. Selecting **Generate Bill** calculates the total and adds taxes.
5. The bill is displayed, and all quantities are reset for the next order.

---

## Sample Output

```
------ Welcome to Tea Stall ------
1. Tea-------10INR
2. Coffee----40INR
3. Bun Maska-100INR
4. Water-----20INR
5. Generate bill:
0. Exit
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
```

---

## Learning Outcomes

* Understand **menu-driven programming** in C++.
* Learn **switch-case statements** and how to handle multiple choices.
* Perform **arithmetic calculations** for billing and taxes.
* Learn **variable management and resetting** for multiple transactions.
* Practice **user-friendly input/output** formatting in console applications.


-----------------------------------------------------------------------------------------------------



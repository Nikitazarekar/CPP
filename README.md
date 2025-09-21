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

# Chinese Zodiac Finder

## Project Overview

This program helps users find their **Chinese Zodiac sign** based on their birth year.
It provides a simple **menu-driven console interface** with all 12 zodiac animals listed.
The user enters their **name and birth year**, and the program calculates their zodiac type.
It also displays **characteristics associated with the zodiac sign** for better understanding.
The project demonstrates **basic C++ programming concepts** like input/output, switch-case, and arithmetic operations.

---

## Features

* Enter **your name and birth year** to find your zodiac sign.
* Displays the **zodiac type** along with its **personality traits**.
* Provides a **menu listing all 12 Chinese Zodiac animals**.
* Handles **invalid inputs** gracefully with error messages.
* A **fun and interactive console program** suitable for beginners.

---

## How It Works

1. The user is prompted to enter their **name**.
2. The user enters their **birth year**.
3. The program calculates the zodiac using:

   ```
   zodiacIndex = (year - 4) % 12
   ```
4. A **switch-case** statement displays the zodiac animal and its traits.
5. Users can **try again or exit** based on the menu options.

---

## Sample Output

```
....CHINESE ZODIAC FINDER....
1.Rat
2.Ox
3.Tiger
...
Enter your Name: Alice
Enter your birth Year: 1996

Name: Alice
Year: 1996
Congrats ...! Alice
You are type <0> and you have 
Rat: Intelligent, adaptable, quick-witted, charming.
```

---

## Learning Outcomes

* Understand **basic C++ input/output operations** using `cin` and `cout`.
* Learn **switch-case statements** for decision-making.
* Practice **arithmetic operations** for zodiac calculation.
* Develop **menu-driven console programs**.
* Gain experience in **user-friendly program design**.

---


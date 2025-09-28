                                                ## CPP
------------------------------------------------------------------------------------------------------------------------

# Library Management System

## Project Overview

This program is a **Library Management System** implemented in C++.
It allows users to **add books, check out books, return books, and view book details**.
Each book has a **unique Book ID, title, author, and availability status**.
The system demonstrates **object-oriented programming concepts** like classes, objects, and static members.
It is a **menu-driven console application** designed to be interactive and beginner-friendly.

---

## Features

* Add a new book with **title and author**; the system assigns a **unique Book ID** automatically.
* Check out a book, changing its status to **unavailable**.
* Return a book, changing its status back to **available**.
* Display details of any book including **ID, title, author, and availability**.
* Handles **invalid inputs** such as checking out or returning non-existent books.

---

## Classes and Methods

* **Book (Class)** – Represents each book with attributes like `bookID`, `title`, `author`, and `isAvailable`.
* **Static Member** – `bookId_generator` ensures each book gets a **unique ID**.
* **addBook(title, author)** – Adds a new book to the system.
* **checkOut() / returnBook()** – Update the availability status of the book.
* **display()** – Displays book information; **getBookID()** retrieves the Book ID.

---

## How It Works

1. The program displays a **menu** with options to add, check out, return, or display books.
2. Users select an option by entering the corresponding number.
3. For **addBook**, the system prompts for title and author and generates a unique Book ID.
4. For **checkOut/return/display**, the system searches the book by ID and performs the selected operation.
5. The menu repeats until the user selects **Exit**, allowing multiple operations in one session.

---

## Sample Output

```
========= LIBRARY MANAGEMENT SYSTEM =======
1.Add a Book
2.Check Out a Book
3.Return a Book
4.Display Book Details
0. Exit

Enter the choice: 1
Enter the title: C++ Basics
Enter the author: John Doe
Congrates Book Added Successfully !! Your Book ID is 501

Enter the choice: 2
Enter the Book id to check out: 501
Book ID501 has been checked out Successfully

Enter the choice: 4
Enter the book id to Display: 501
BookID501
TitleC++ Basics
AuthorJohn Doe
Statuschecked out
```

---

## Learning Outcomes

* Learn **object-oriented programming** concepts in C++.
* Understand **static members** for generating unique IDs.
* Practice **menu-driven console applications**.
* Manage **arrays of objects** and perform CRUD operations.
* Implement **user-friendly input/output** handling for a real-world scenario.

---

-------------------------------------------------------------------------------------------------------------------------------
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
-----------------------------------------------------------------------------------------------------------------

# Smart Parking Lot Management System

## Overview
This is a **menu-driven C++ program** to manage a small parking lot.  
It allows users to **park vehicles, remove vehicles, and view parking status**, along with **automatic billing based on parking duration**.

---

## Features
- Supports **multiple parking slots** (configurable).  
- **Entry & Exit tracking** with ticket numbers.  
- Records **vehicle number** and **entry time**.  
- Calculates **parking duration** and **bill** (INR per hour).  
- Displays **current parking status** including occupied/free slots and entry times.  
- Menu-driven and beginner-friendly.

---

## How It Works
1. **Park Vehicle:**  
   - Assigns the next available parking slot.  
   - Records entry time using the system clock.  
   - Generates a ticket number.  

2. **Remove Vehicle (Exit & Billing):**  
   - Enter the slot number to remove a vehicle.  
   - Calculates parking duration (rounded up to the next hour).  
   - Calculates the bill based on a fixed rate per hour.  
   - Frees up the slot for future use.  

3. **Display Parking Status:**  
   - Shows all slots, their status (Occupied/Free), vehicle numbers, and entry times.

---

## How to Run
1. Clone the repository or download the code file.  
2. Compile the program using a C++ compiler:
   ```bash
   g++ parking_lot.cpp -o parking_lot
````

3. Run the program:

   ```bash
   ./parking_lot   # Linux/Mac
   parking_lot.exe # Windows
   ```
4. Follow the on-screen menu to interact with the system.

---

## Example Output

**1. Parking a Vehicle**

```
--- Smart Parking System ---
1. Park Vehicle
2. Remove Vehicle (Exit & Billing)
3. Display Parking Status
0. Exit
Enter your choice: 1

Enter Vehicle Number: MH12AB1234
Ticket No: 100, Slot No: 1
Entry Time: Sun Sep 29 10:15:43 2025
```

**2. Parking Status**

```
Slot    Status      Vehicle No      Entry Time
1       Occupied    MH12AB1234     Sun Sep 29 10:15:43 2025
2       Free        -              
3       Free        -              
4       Free        -              
5       Free        -              
```

**3. Removing a Vehicle (Exit & Billing)**

```
Enter Slot No to remove vehicle: 1

--- Receipt ---
Vehicle Number: MH12AB1234
Slot Number   : 1
Hours Parked  : 2
Bill Amount   : INR 40.00
Entry Time    : Sun Sep 29 10:15:43 2025
Exit Time     : Sun Sep 29 12:15:50 2025
----------------
```

---

## Libraries Used

* `<iostream>`: For input/output operations.
* `<ctime>`: To record and display **entry and exit times**.
* `<cmath>`: To **round parking duration** using `ceil()`.

---




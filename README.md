# Charity Discount System


## Introduction
The program is based on the launch of a famous clothing line during **International Charity Week**, from **November 25th to December 9th**. The charities are selected by the owners, and customers receive discounts during these two weeks, with **100% of the proceeds donated** to their chosen charity. This program allows customers to select their preferred charity and determine the discount they will receive based on their purchase date. The discounts are as follows:

- **50% discount** (November 25th - November 30th)
- **30% discount** (December 1st - December 5th)
- **10% discount** (December 6th - December 9th)

## Problem Statement
Since this is a charity initiative, managing donations efficiently is crucial. The program is designed to allow customers to:

- Easily avail the discount applicable to their purchase date.
- Enter item prices and calculate their total bill after applying the discount.
- Select the charity to which they want a portion of their payment to be donated.

This system ensures that customers can easily determine their discounts, while cashiers can efficiently process transactions. Additionally, it helps in tracking which charities receive donations and how the total sales are distributed among them.

## Features
- **Date-based discount system**:
  - **50% discount** (Nov 25 - Nov 30)
  - **30% discount** (Dec 1 - Dec 5)
  - **10% discount** (Dec 6 - Dec 9)
- **User-friendly input system** for entering item prices.
- **Charity selection** after purchase.
- **Displays the final discounted price**.

## Object-Oriented Programming (OOP) Concepts Used
This project follows **OOP principles** to ensure modularity and reusability:

- **Functions**: Used for calculating discounts and handling user input efficiently.
- **Encapsulation**: The logic is contained within functions, making the code cleaner and easier to manage.
- **Modular Design**: The program is structured into different sections for input handling, discount calculation, and charity selection.

## Why Code::Blocks?
- **Beginner-Friendly IDE**: Code::Blocks provides an easy-to-use interface for C++ development.
- **Integrated Debugging**: Helps in testing and fixing errors efficiently.
- **Cross-Platform Support**: Can be used on Windows, macOS, and Linux.

## Project Structure
```
|-- main.cpp                     # C++ source code for the program
|-- charity_discount.cbp         # Code::Blocks project file
|-- project report.docx          # Detailed project proposal
|-- flowchart.xlsx               # Flowchart of Discount system/project
```

## How to Run the Program
### **Using Code::Blocks**
1. Open **Code::Blocks**.
2. Click **File → Open**.
3. Select `charity_discount.cbp` to load the project.
4. Click **Build → Build and Run** or press `F9`.

### **Using Command Line (Alternative)**
1. **Compile the C++ file**:
   ```sh
   g++ main.cpp -o charity_discount
   ```
2. **Run the compiled program**:
   ```sh
   ./charity_discount
   ```

## Charities Available
1. **Edhi Foundation**
2. **Ansar Burney Trust**
3. **Shaukat Khanum Cancer Hospital**

## Contributors
- **Zahra Batool**
- **Javeria Liaqat**

---
Thank you for shopping at J&Z's Clothing Line! 😊

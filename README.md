# Charity Discount System

## Introduction
This program is designed for a famous clothing line that runs a special **International Charity Week** from **November 25th to December 9th**. Customers receive discounts on their purchases, and **40% of the total sales are donated** to selected charities. The system allows customers to:

- Enter the date of their purchase to determine their discount.
- Enter the price of purchased items and calculate the total bill after applying the discount.
- Choose from three charity organizations to donate a portion of their purchase.

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
|-- flowchart.xlsx               # Flowchart of Discount system/prpject
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


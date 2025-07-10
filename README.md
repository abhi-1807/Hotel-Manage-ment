Hotel Management System in C
This simple console-based Hotel Management System is written in C and allows basic hotel functionalities such as booking rooms, ordering food, and generating customer bills. It's a great starter project for those learning C or exploring command-line applications.
📋 Features
- Room booking with predefined pricing
- Normal Room (₹3000/day)
- Deluxe Room (₹5000/day)
- Suite Room (₹10000/day)
- Food ordering from a restaurant-style menu
- Calculation of food and room bills
- Summary bill display with total charges
🚀 Getting Started
Compile the Program
To compile using GCC:
gcc hotel_management.c -o hotel_management

📦 Menu Overview
Room Booking
Select room type and enter the duration of stay:
1. Normal Room - ₹3000/day
2. Deluxe Room - ₹5000/day
3. Suite Room - ₹10000/day


Food Ordering
Choose from the restaurant menu and specify quantity:
1. Veg Burger - ₹180
2. Paneer Tikka - ₹220
3. Masala Dosa - ₹200
...
10. Exit


Bill Summary
Displays:
- Customer name
- Room number
- Days stayed
- Room bill
- Food bill
- Total bill
  
Sure! Your hotel management program in C utilizes several foundational programming concepts. Here's a breakdown of the key ones:

## 🔧 Core Concepts Used

### 1. **Structures (`struct`)**
- Defines a custom data type `Customer` to store customer-related information like name, room number, number of days, room and food bills.
- Helps group related variables under a single unit.

### 2. **Functions**
- Modularizes logic with separate functions:  
  - `bookRoom()` – for handling room bookings  
  - `orderFood()` – for managing food orders  
  - `showBill()` – for displaying billing summary  
- Improves code organization, readability, and reusability.

### 3. **Control Flow**
- **Loops**:  
  - `do-while` loop in `orderFood()` for repeated food menu interaction  
  - `do-while` loop in `main()` for continuous program operation until the user exits
- **Switch-case**:  
  - Used for selecting room type and food items based on user input.

### 4. **User Input**
- `scanf()` is used extensively to gather inputs from the user for names, room types, quantity, days, etc.

### 5. **String Handling**
- Uses `char name[100]` to store customer names with input via `scanf("%s", cust.name);`

### 6. **Arithmetic Operations**
- Bill calculations use basic multiplication and addition logic:
  - `cust.room_bill = cust.days * <rate>`
  - `cust.food_bill += quantity * <food_rate>`

### 7. **Global Variable Usage**
- `struct Customer cust` is declared globally so it's accessible across all functions without passing it explicitly.

### 8. **Console Input/Output**
- Utilizes `printf()` for displaying information and `scanf()` for taking user input, which is key to any command-line based application.

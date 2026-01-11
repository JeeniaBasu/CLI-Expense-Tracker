# CLI Expense Tracker
#### Video Demo: https://youtu.be/Eln-_1hOudI
#### Description:

The CLI Expense Tracker is a command-line based application developed in the C programming language as a final project for CS50x. The purpose of this project is to demonstrate the practical application of fundamental programming concepts taught throughout the course. The program allows users to record, store, retrieve, and analyze personal expenses using a simple text-based interface. By focusing on clarity, correctness, and modular design, this project emphasizes strong foundational programming skills rather than graphical complexity.

## Motivation

The motivation behind this project was to create a real-world utility that is both meaningful and achievable within the scope of CS50. Expense management is a common and relatable problem, and implementing a solution in C requires careful handling of user input, data storage, and program flow. This project provided an opportunity to work extensively with file input and output, data structures, and user interaction while maintaining simplicity and reliability in design and implementation choices.

## Program Functionality

The program operates entirely through a command-line interface, also known as a CLI. When the program starts, the user is presented with a menu containing several options. These options allow the user to add a new expense, view all recorded expenses, search for expenses by category, calculate the total expense, or exit the program. The menu-driven approach makes the program intuitive to use and ensures that users can repeatedly perform operations until they choose to terminate execution themselves.

Each expense recorded by the program consists of a category and a monetary amount. These values are grouped using a structure, which allows related data to be stored and managed together. Using structures improves code readability and organization while also making future extensions easier to implement. When an expense is added, the program writes the data to a file, ensuring that all information is preserved even after the program closes or restarts.

## File Handling and Persistence

Persistent storage is handled through standard C file input and output functions. The program uses functions such as fopen, fprintf, fscanf, and fclose to manage file operations safely. Expense records are stored in a plain text file, making the data human-readable and easy to debug during development. When the program is executed again, it reads from this file to display existing expenses, perform searches, and calculate totals accurately. Proper error handling is included to manage cases where the file does not yet exist.

## Program Design

The project is designed using a modular approach. Each major feature of the program is implemented as a separate function, including adding expenses, viewing expenses, searching by category, and calculating the total expense. This design choice reduces code duplication and improves maintainability. The main function is responsible only for displaying the menu and directing program flow based on user input, which keeps the overall structure clean, readable, and easy to understand.

## Challenges and Learning Outcomes

One of the challenges encountered during development was handling user input safely and ensuring that file operations behaved correctly in all scenarios. Special attention was required to manage formatted input and output without corrupting stored data. Through debugging and repeated testing, these issues were resolved, leading to a more robust and reliable program. This process reinforced the importance of careful planning, testing, and iterative improvement in software development practices.

This project demonstrates several core concepts taught in CS50, including control flow using loops and conditionals, data abstraction with structures, modular programming with functions, and persistent storage using files. It also emphasizes logical problem-solving and program organization, both of which are essential skills for any programmer working with low-level languages such as C in real-world environments.

## Future Improvements

There are many possible improvements that could be made in the future. Additional features could include storing dates for each expense, generating monthly summaries, exporting data to CSV format, or accepting command-line arguments instead of relying on a menu system. Input validation could also be further enhanced to handle unexpected or malformed input more gracefully and securely for users.

## Conclusion

In conclusion, the CLI Expense Tracker fulfills the requirements of the CS50x Final Project by presenting a complete, functional, and original program written in C. It applies multiple concepts learned throughout the course in a cohesive and practical manner. The project serves as a strong representation of the skills developed during CS50 and provides a solid foundation for building more advanced applications in the future using C.

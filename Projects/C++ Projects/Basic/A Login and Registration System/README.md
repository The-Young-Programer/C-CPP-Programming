# Login and Registration System in C++

## What You're Going to Learn

This project demonstrates a simple login and registration system in C++, where you'll learn about:

- **File handling** in C++ (reading from and writing to files)
- **Password hashing** using the C++ Standard Library `std::hash`
- **Menu-driven user interface** for login, registration, and password recovery
- **Security Question-based password recovery**
- **Game simulation** (DrunkGame) within the login system

## What It's About

This project is a basic C++ program that allows users to:

- Register with a username, password, and a security question
- Login using a username and password
- Recover their password through a security question if forgotten
- Play a simple game after logging in

The system uses a text file (`data.txt`) to store user data, including usernames, hashed passwords, and security question hashes.

## File Hierarchy
```
.
├── login.cpp                   # Contains the implementation of the Login, Registration, Forgot Password, and DrunkGame functions
├── login.h                     # Header file declaring the login class and its member functions
├── LoginAndRegistration.cpp    # Main file that contains the menu and drives the login/registration flow
└── data.txt                    # Data file used to store user credentials (username, hashed password, and security question hash)
```

## How to Run

1. Clone the repository to your local machine.
2. Open the project in a C++ IDE or a code editor.
3. Compile and run the `LoginAndRegistration.cpp` file.
4. Follow the on-screen menu to log in, register, or recover your password.

## Features

- **User Registration**: Allows a new user to register with a username, password, and a security question.
- **User Login**: Allows a registered user to log in using their username and password.
- **Forgot Password**: Users can recover their password using a security question.
- **Game**: A simple simulation game (DrunkGame) is available once the user successfully logs in.

## Future Improvements

- Implement encryption for storing passwords more securely.
- Add user session management (i.e., keeping the user logged in).
- Improve error handling and validation of inputs.

## License

- This project is open-source and available under the MIT License. Feel free to use and modify it for educational purposes.

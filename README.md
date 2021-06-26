
# Simple Console Based Login And Registration System

This is a Simple Login And Registration System made by [@NamanBhat3](https://github.com/NamanBhat3)

## Author

[@NamanBhat3](https://github.com/NamanBhat3)

  
## Features

Some simple Features in this project are:

- On registering a new text file is generated with the register details.
- When logging in the program checks the files if there is a file with the name provided by the user. If the file with that name is not there then the program will report that the details are wrong. If the file is there then the program will check all the details and specify the details which are wrong.
- If the user wants to remove the account confirmation is required with the full name, user name and password if anything is incorrect then the program will not remove the account and give an error.

  
## Requirements:
  g++ compiler:
  To Check if you have the g++ compiler write the following code below for your specific os:

  - For windows run the following command:
  ```cmd
    g++ --version
  ```
  - For Linux/MacOS run the following command:
  ```bash
    $ g++ -v
  ```
  
  If you don't have the g++ compiler you have to install it on the official website of [MinGw](http://mingw-w64.org/).
   - For Windows go to the downloads section and select the text that says "MingW-W64-builds". Now click the link that says "Installation: Sourceforge" and the download will start. Double click on the executable and it will start the installation. Keep everything as it is.
   - For Linux write the following commands in the terminal to install:
     First update the package list with the latest version of g++ by running:
     ```bash
       $ sudo apt-get update
     ```
     Then write the following command:
     ```bash
       $ sudo apt-get install g++
     ```
   - For MacOS write the following commands in the terminal to install g++:
     First Check if brew is installed on your mac computer by running the following command:
     ```mac
       $ brew -v
     ```
     If it is not installed install it by going to the [official site of homebrew]("https://brew.sh/") and copying the command written there into the terminal. It will ask for your mac password. After entering the password it will proceed to install homebrew.
     When homebrew gets installed write the command written below to install g++ and gcc:
     ```mac
       $ brew install gcc
     ```
## Building and Running the Application

1. To run the project in a Windows Environment go to the directory with the project files and run the below commands:

```cmd
    g++ -o main.exe main.cpp
    ./main.exe
```

2. To run the project in a MacOS Environment go to the directory with the project files and run the following commands:
```mac
    $ g++ -o ./main ./main.cpp
    ./main
```

3. To run the project in a linux environment go to the directory with the project files and run the following commands:
```bash
    $ g++ main.cpp -o main.exe
    ./main
```

- Note that the executable for windows that I have attached in the project will not work with MacOS and Linux.
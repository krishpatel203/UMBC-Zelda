UMBC Zelda | C++ Text-Based Adventure Game
A command-line adventure game built with C++ and object-oriented programming principles.
Technologies: C++ | Object-Oriented Programming (OOP) | Inheritance | Polymorphism | Pointers | Dynamic Memory Management | File I/O | Makefile
Project Overview
UMBC Zelda is a text-based adventure game inspired by The Legend of Zelda, developed as part of the CMSC 202 – Computer Science II curriculum at the University of Maryland, Baltimore County (UMBC).
The project focuses on designing a modular game system using C++ object-oriented programming principles. Players navigate interconnected environments, encounter randomly generated enemies, participate in turn-based combat, and improve weapons using rewards earned from battles.
The game demonstrates the practical application of inheritance, polymorphism, pointers, dynamic memory allocation, and file handling within a multi-class software application.
Key Features
Interactive Adventure System
Explore interconnected areas using north, south, east, and west navigation.
Load different game environments from external text files.
Validate movement based on available exits.
Display area descriptions, available paths, and enemy encounters.
Turn-Based Combat
Battle three enemy types: Armos, Moblin, and Peahat.
Execute normal and special attacks with different damage calculations.
Encounter enemies randomly while navigating the game world.
Track health and combat outcomes throughout gameplay.
Weapon System
Sword: Executes a double-slash special attack.
Bomb: Deals randomized explosive damage.
Boomerang: Attacks twice, representing outgoing and returning damage.
Upgrade weapons using rupees earned from defeating enemies.
Player Progression
Create and name a playable hero.
Receive a randomly assigned starting weapon.
Earn rupees by defeating enemies.
Monitor player health and currency.
Improve weapon damage through the upgrade system.
Technical Implementation
Object-Oriented Architecture
The application is organized around 11 interconnected C++ classes, separating gameplay mechanics into reusable components.
Component
Responsibility
Game
Coordinates gameplay, combat, navigation, and map loading
Hero
Manages player information, health, currency, and weapons
Area
Represents map locations and directional connections
Enemy
Base class for enemy attributes and attacks
Armos, Moblin, Peahat
Specialized enemy behavior and attacks
Weapon
Base class for weapon functionality
Sword, Bomb, Boomerang
Specialized weapon attacks and damage calculations

Inheritance and Polymorphism
The project uses inheritance to organize related game objects and polymorphism to support specialized combat behavior.
Enemy
├── Armos
├── Moblin
└── Peahat

Weapon
├── Sword
├── Bomb
└── Boomerang
Each enemy and weapon inherits shared characteristics from its parent class while implementing specialized attack behavior.
Dynamic Memory Management
The design incorporates pointers, dynamic object allocation, and destructors to manage game entities throughout their lifecycles.
Memory management is an important part of the project because enemy objects, weapons, and map areas are dynamically created during gameplay.
File-Based Map Loading
Game environments are loaded from structured text files using C++ file I/O.
Each map record contains an area identifier, name, description, and connections to adjacent areas.
Example:
0|Rocky Area|A rocky area surrounded by lava.|-1|1|-1|-1|
1|Lava Area|An area surrounded by lava.|-1|-1|-1|0|
This design separates map data from gameplay logic and allows the application to support multiple environments.
Getting Started
Prerequisites
C++ compiler supporting the project's source code
GNU Make
Terminal (Linux, macOS, or another compatible environment)
Project source files and map data files
Compile
If the provided Makefile is configured:
make
Run the Game
Launch the executable with a map file:
./proj4 proj4_map1.txt
To load an alternative map:
./proj4 proj4_map2.txt
The map files must be present in the appropriate project directory.
Example Gameplay
The following illustrates the intended command-line gameplay:
Welcome to Zelda!

Hero Name: Link
You start with a sword!

Rocky Area
You are standing on a rocky outcropping
surrounded by lava.

Possible Exits: E

A PeaHat flutters through the air.

What would you like to do?

1. Look
2. Move
3. Attack Enemy
4. Improve Weapon
5. Check Stats
6. Quit
Players can explore environments, fight enemies, collect rupees, upgrade weapons, and monitor their progress.
Testing and Debugging
The project specification emphasizes incremental compilation and testing, including:
Testing individual C++ classes and their integration.
Validating menu selections and directional movement.
Checking combat calculations and game-state transitions.
Verifying that map data loads correctly.
Checking dynamic memory allocation and deallocation.
For Linux environments with Valgrind installed, memory diagnostics can be performed using:
valgrind ./proj4 
These commands describe the intended testing workflow and do not constitute a claim that all tests have passed.
Computer Science Concepts Demonstrated
Object-Oriented Design: Organizing application functionality into reusable C++ classes.
Inheritance: Extending shared enemy and weapon behavior through derived classes.
Polymorphism: Supporting different special attacks through common interfaces.
Dynamic Memory: Managing dynamically allocated objects using pointers and destructors.
File I/O: Loading and processing structured map data from external files.
Input Validation: Handling invalid menu selections and unavailable movement directions.
Modular Development: Separating gameplay, combat, navigation, and entity responsibilities
Project Background
Institution: University of Maryland, Baltimore County (UMBC)
Course: CMSC 202 – Computer Science II
Project: Project 4 – UMBC Zelda
Language: C++
Year: Fall 2023
This project was developed from a university programming assignment designed to strengthen understanding of object-oriented software development.
The original assignment supplied class interface files and project requirements. The repository should distinguish any provided starter code from student-written implementations.
This project is an educational, unofficial, Zelda-inspired application and is not affiliated with or endorsed by Nintendo.



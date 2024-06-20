-

# Computer Assembly Shop - C++ OOP Project

Welcome to the Computer Assembly Shop, a C++ project designed to simulate a customizable computer assembly experience using Object-Oriented Programming (OOP) principles. This application allows users to build their own computers by selecting various hardware components, such as CPUs, RAM, ROM, graphic cards, and control units. The project demonstrates how software can model real-world processes, like buying and assembling a computer, through a user-friendly command-line interface.

### Project Overview

In this project, users interact with a simulated shop environment where they can choose from a variety of computer components to create custom computer builds. The application guides users through selecting key components, including the central processing unit (CPU), random-access memory (RAM), read-only memory (ROM), graphic cards, and control units. Each component is represented by a class, encapsulating its properties and behaviors, such as price and specifications, allowing users to dynamically create and price their computer systems.

The main features of the Computer Assembly Shop include:

- **Component Selection**: Users can select from a list of available components for each part of the computer. For instance, they can choose between different CPUs (e.g., Intel i5, AMD Ryzen), varying RAM capacities (e.g., 8GB, 16GB), and various graphic cards (e.g., NVIDIA GTX, AMD Radeon).
- **Custom Configurations**: The system allows users to specify their computer builds according to their preferences and budget, offering flexibility in component combinations.
- **Inventory Management**: The application tracks the availability of components, ensuring that users can only select from components that are in stock.
- **Order Summary and Checkout**: After selecting all components, users can review their choices, see a breakdown of the total cost, and complete their purchase.

### Technical Details

The project is built using C++ and showcases OOP concepts such as inheritance, polymorphism, and encapsulation. The core classes include `Component` as a base class and derived classes like `CPU`, `RAM`, `ROM`, `GraphicCard`, and `ControlUnit`. These classes interact with the `Shop` class, which manages the overall user experience, and the `Order` class, which aggregates the selected components and calculates the total cost.

This project is an excellent demonstration of how OOP can be used to model complex systems and provide a simulated experience that mirrors real-world processes. It’s designed to be both educational and practical, serving as a tool for understanding OOP concepts and for creating a simple yet powerful application in C++.

### Getting Started

To run the project, clone the repository and compile the code using a C++ compiler. Then, run the executable to start interacting with the computer assembly shop.

We hope you enjoy using and exploring the Computer Assembly Shop!


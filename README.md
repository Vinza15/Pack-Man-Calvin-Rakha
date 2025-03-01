# Pac-Man Design Patterns Project

## Case Study: Applying Design Patterns in a Classic Game (Pac-Man)

### Problem Statement
You're developing a simple Pac-Man-style game featuring different types of ghosts. Each ghost moves differently—for example, some ghosts actively chase Pac-Man, while others move randomly around the maze. Your goal is to design the ghost behaviors in a way that is flexible, maintainable, and easy to extend without requiring significant changes to your existing codebase.

### Objectives
- Clearly separate ghost behaviors from ghost objects so that behaviors can be easily changed or updated.
- Allow for new ghost types and behaviors to be added to the game easily, without modifying the existing classes.
- Provide a method to temporarily enhance ghost behaviors (for instance, making them faster when Pac-Man eats a power pellet).

### Applying Design Patterns
You will implement three software design patterns to solve this problem:

#### 1. Creational Pattern: Factory Method
- Use the Factory Method to create different ghost objects dynamically.
- New ghost types should be added easily, without changing existing code.

#### 2. Structural Pattern: Decorator
- Use the Decorator Pattern to enhance or modify ghost behaviors temporarily.
- For example, apply a speed boost to ghosts when Pac-Man eats a power pellet, without permanently altering ghost classes.

#### 3. Behavioral Pattern: Strategy
- Use the Strategy Pattern to define distinct ghost movement behaviors, such as chasing Pac-Man or wandering randomly.
- Allow ghosts to switch their strategies dynamically during gameplay.

## 🚀 Milestones for Pac-Man Design Patterns Task

### **Week 1: Understanding and Setup**
#### Tasks:
1. **Understand Design Patterns**
   - Review and clearly understand Factory Method, Decorator, and Strategy patterns.
   - Discuss each pattern's purpose, advantages, and application scenarios.
2. **Set Up Project Structure**
   - Create the initial C++ project structure.
   - Implement a simple 2D array-based map rendering.
   - Define basic Ghost, Pacman, and Map classes without patterns.

#### Deliverable:
- Basic Pac-Man map rendering with placeholder classes (no complex behavior yet).

### **Week 2: Implement Factory Method & Strategy Patterns**
#### Tasks:
1. **Implement the Factory Method Pattern**
   - Create a `GhostFactory` that can dynamically instantiate different ghost types.
2. **Implement the Strategy Pattern**
   - Define `MovementStrategy` interface and at least two concrete strategies (e.g., chasing and random movement).
   - Integrate strategies with ghost instances created by the factory.

#### Deliverable:
- Ghosts dynamically created via factory method.
- Ghost movement behavior is managed and switchable through the strategy pattern.

### **Week 3: Decorator Pattern & Demonstration**
#### Tasks:
1. **Implement the Decorator Pattern**
   - Implement a `GhostDecorator` to temporarily enhance ghost behaviors, such as increasing their speed when Pac-Man eats a power pellet.
2. **Final Demonstration and Documentation**
   - Demonstrate ghosts dynamically switching behaviors and decorators enhancing ghost abilities.
   - Provide clear documentation/examples showing how to add new ghost types and behaviors easily.

#### Deliverable:
- Complete game prototype clearly demonstrating the three patterns.

## 📂 Project Structure
```
PacManProject/
│── main.cpp        → Entry point program
│── Map.h           → Deklarasi kelas Map
│── Map.cpp         → Implementasi kelas Map
│── Character.h     → Deklarasi kelas dasar Character
│── Character.cpp   → Implementasi kelas Character
│── PacMan.h        → Deklarasi kelas PacMan
│── PacMan.cpp      → Implementasi PacMan
│── Ghost.h         → Deklarasi kelas Ghost
│── Ghost.cpp       → Implementasi Ghost
```

## 🛠️ How to Compile and Run
### Using g++
```sh
g++ main.cpp Map.cpp Character.cpp PacMan.cpp Ghost.cpp -o pacman
./pacman
```

This will generate the Pac-Man map and display character positions.

---

## 🎯 Next Steps
If you have completed **Week 1**, the next milestone is **Week 2**, where we introduce the **Factory Method & Strategy Pattern** for dynamic ghost behavior!

If you need any modifications or enhancements, feel free to update the code accordingly! 🚀


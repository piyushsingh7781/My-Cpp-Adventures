# 🔱 Core Data Structures & Algorithms (C++)

[![Language](https://shields.io)](https://isocpp.org)
[![Compiler](https://shields.io)](https://gnu.org)
[![License: MIT](https://shields.io)](https://opensource.org)

A structured, low-level implementation repository dedicated to mastering Computer Science fundamentals, memory architecture, and foundational logic using modern C++. Everything here is built, compiled, and tested locally.

---

## 📊 Complete DSA Master Roadmap & Tracker

### 🟢 Phase 1: Core Mechanics & Memory Architecture (100% Complete)
- [x] **Language Fundamentals:** Data primitives, strict type systems, and standard I/O streams.
- [x] **Control Structures:** Conditional branches (`if-else`, `switch`) and iterative loop optimization.
- [x] **Logic Synthesis:** Visual matrix and coordinate-based pattern printing (`f(i, j)` mapping).
- [x] **Memory Management:** Raw pointers, address spaces (`&`), dereferencing (`*`), and stack allocations.

### 🟡 Phase 2: Basics Refinement & Mathematical Foundations (Current Sprint)
- [ ] **Functional Paradigms:** Scope resolution, execution stack frames, and pass-by-value vs. pass-by-reference.
- [ ] **Asymptotic Analysis:** Time & Space complexity calculation (Big O, Theta, Omega notations).
- [ ] **Basic Mathematics for DSA:** Prime numbers (Sieve of Eratosthenes), GCD/LCM (Euclidean Algo), Factorials, Modulo Arithmetic.
- [ ] **Bit Manipulation:** Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`), setting/clearing bits, counting set bits, power of 2 hacks.

### ⬜ Phase 3: Linear Data Structures & Continuous Storage
- [ ] **Arrays (1D & 2D):** Traversal, reversal, rotation, prefix sum, sliding window, two-pointer techniques.
- [ ] **C++ STL (Standard Template Library):** Vectors, Pairs, Lists, Deque, Sets, Maps, Unordered Maps, Stacks, Queues.
- [ ] **Strings & Arrays:** Manipulation, pattern matching algorithms, string tokenization.

### ⬜ Phase 4: Algorithmic Paradigms (The Core)
- [ ] **Recursion:** Base cases, call stack visual, subset generation, string permutation.
- [ ] **Backtracking:** N-Queens problem, Sudoku solver, Rat in a Maze, M-coloring.
- [ ] **Searching Algorithms:** Linear Search, Binary Search (BS on Answers, lower/upper bound).
- [ ] **Sorting Algorithms:** Bubble, Selection, Insertion Sort (O(n²)) | Merge, Quick, Heap Sort (\(O(n \log n)\)).

### ⬜ Phase 5: Linear Abstract Data Types (Custom Implementation)
- [ ] **Linked Lists:** Singly, Doubly, and Circular Linked Lists. Floyd's Cycle detection, reversal.
- [ ] **Stacks:** Array/LL implementation, Infix/Postfix/Prefix conversions, Next Greater Element.
- [ ] **Queues:** Linear Queue, Circular Queue, Deque, implementation using Stacks.

### ⬜ Phase 6: Non-Linear Hierarchical Structures
- [ ] **Binary Trees:** Tree traversals (Inorder, Preorder, Postorder, Level-order), Height, Diameter, Views (Top, Bottom, Left, Right).
- [ ] **Binary Search Trees (BST):** Search, Insertion, Deletion, Validation, LCA of BST.
- [ ] **Heaps / Priority Queues:** Min-Heap & Max-Heap implementation, Heapify operation, K-Way merge, Top K frequent elements.

### ⬜ Phase 7: Advanced Non-Linear Topologies
- [ ] **Graphs:** Adjacency Matrix/List representations, BFS, DFS traversals.
- [ ] **Graph Algorithms:** Cycle detection, Topological Sort, Shortest Path (Dijkstra, Bellman-Ford, Floyd-Warshall), MST (Prim's & Kruskal's).
- [ ] **Disjoint Set Union (DSU):** Find and Union by rank/size.
- [ ] **Tries:** Prefix Tree insertion, searching, and prefix matching.

### ⬜ Phase 8: Dynamic Optimization
- [ ] **Greedy Algorithms:** Fractional Knapsack, Activity Selection, Job Scheduling.
- [ ] **Dynamic Programming (DP):** 
  - Memoization (Top-down) vs. Tabulation (Bottom-up).
  - 1D DP (Fibonacci, Climbing Stairs).
  - 2D/Matrix DP (Grid paths, Knapsack 0/1).
  - DP on Strings (LCS, Edit Distance).
  - DP on Stocks & Trees.

---

## 🗂️ Repository Architecture

```text
.
├── 📂 01_Language_Mechanics/
│   ├── 📂 01_Primitives/        # Variables, limits, and standard I/O streams
│   ├── 📂 02_Conditionals/      # Branching logic and structural checks
│   ├── 📂 03_Iteration/         # Loops, loop invariants, and execution flows
│   ├── 📂 04_Logic_Patterns/    # Grid structures and nested loop mechanics
│   └── 📂 05_Memory_Pointers/   # Pointers, addresses, and memory layout maps
├── 📂 02_Math_and_Bitwise/      # Next target
├── 📂 03_Arrays_and_STL/
├── 📂 04_Algorithms/
└── 📂 05_Advanced_Structures/
```

---

## 🛠️ Local Compilation Engine

All code modules are compiled using explicit standards and warning flags to ensure absolute memory safety and zero warnings.

```bash
# Compile with modern standards, local optimizations (-O2), and strict warning diagnostic flags
g++ -std=c++20 -O2 -Wall -Wextra main.cpp -o app

# Execute the local binary artifact
./app
```

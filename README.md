# holbertonschool-binary_trees

**Implementation of binary trees in C.**

---

## Table of Contents

- [Overview](#overview)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Function List](#function-list)
- [Usage](#usage)
- [Contributors](#contributors)
- [License](#license)

---

## Overview

This project contains an implementation of binary tree data structures and functions in C. The main goal is to understand binary trees and related algorithms by building them from scratch and manipulating their nodes using various functions.

---

## Learning Objectives

By completing this project, you should be able to explain and implement:

- What is a binary tree?
- The differences between a binary tree and a binary search tree (BST).
- Gains in time complexity when using trees compared to linked lists.
- How to measure depth, height, and size of a binary tree.
- Binary tree traversal methods: pre-order, in-order, post-order.
- The definitions and distinctions among complete, full, perfect, and balanced binary trees.

---

## Requirements

- Allowed editors: `vi`, `vim`, or `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with these options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A root-level `README.md` file is mandatory
- Code style: Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per `.c` file
- You may use the standard C library
- Only one repository per group — cloning/forking with the same name before the second deadline risks a 0% score
- All function prototypes must be declared in `binary_trees.h`, which should be include guarded

---

## Data Structures
```
/**

struct binary_tree_s - Binary tree node

@n: Integer stored in the node

@parent: Pointer to the parent node

@left: Pointer to the left child node

@right: Pointer to the right child node
*/
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## Function List

You will find C files implementing functions for:

- Creating a node
- Inserting nodes (left, right)
- Deleting the tree
- Checking if a node is a leaf or root
- Tree traversals (pre-order, in-order, post-order)
- Measuring height, depth, size
- Counting leaves and nodes with children
- Calculating balance factor
- Checking if the tree is full or perfect
- Finding the sibling or uncle of a node

---

## Usage

**Compilation example:**
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c <task>-main.c <task>-binary_tree_<function>.c 0-binary_tree_node.c -o <output>
```

Replace `<task>` and `<function>` as needed. Use provided sample `main.c` files to test functions; however, the grading system will use its own main files.

**Example:**
```
binary_tree_t *root;
root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
```

The project includes visualization with a helper print function for easier debugging and understanding.

---

## Contributors

- [@abo-ah-md](https://github.com/abo-ah-md) (Abdullah alshebel)
- [@ismailRowaihy](https://github.com/ismailRowaihy) (ismail Rowaihy)

---

## License

[Apache-2.0 License](./LICENSE)

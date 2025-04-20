# Doubly Linked List in C++  
*Student: 우수흐바야르 (Damdinsuren Usukhbayar)*  
*ID: 22101191*

## Description

This program is a **menu-driven console application** written in C++ to demonstrate the operations of a **doubly linked list**. A doubly linked list is a data structure consisting of nodes where each node contains a `data` field and two pointers:
- A pointer to the **previous** node
- A pointer to the **next** node

The user can perform multiple operations interactively through the terminal.

---

## 🔧 Features and Functionality


### 1. Insert at Beginning
- Inserts a new node as the **first element** of the list.
- If the list is empty, both `head` and `tail` point to this new node.
- If not empty, updates the `left` pointer of the current head.

### 2. Insert at End
- Inserts a new node at the **end** of the list.
- If the list is empty, initializes the list with the new node.
- Otherwise, updates the `right` pointer of the current tail.

### 3. Insert at Position
- Allows inserting a node at a **specific position** in the list (1-based index).
- If the position is `1`, it's the same as inserting at the beginning.
- Traverses the list to find the correct location and links pointers accordingly.
- If the position is invalid, prints an error message.

### 4. Delete from Beginning
- Removes the **first node** of the list.
- If list becomes empty, both `head` and `tail` are set to `nullptr`.

### 5. Delete from End
- Deletes the **last node**.
- Updates the `tail` to the second last node.

### 6. Delete at Position
- Deletes a node at the given **position**.
- Adjusts surrounding nodes' `left` and `right` pointers.
- Edge cases for deleting the first or last node are handled.

### 7. Display Forward
- Prints the contents of the list from **head to tail**.

### 8. Display Backward
- Prints the contents of the list from **tail to head**.

### 9. Exit
- Terminates the program.


---



## Program Structure

| Component         | Purpose                                                                 |
|------------------|-------------------------------------------------------------------------|
| `struct Node`     | Defines the doubly linked list node with `data`, `left`, and `right`.   |
| `createNode`      | Dynamically allocates memory for a new node.                            |
| `insertAtBegin`   | Inserts a node at the beginning.                                        |
| `insertAtEnd`     | Inserts a node at the end.                                              |
| `insertAtPosition`| Inserts a node at a specific position.                                  |
| `deleteFromBegin` | Removes the first node.                                                 |
| `deleteFromEnd`   | Removes the last node.                                                  |
| `deleteAtPosition`| Deletes a node from a specific position.                                |
| `displayForward`  | Traverses and displays nodes from `head` to `tail`.                     |
| `displayBackward` | Traverses and displays nodes from `tail` to `head`.                     |
| `main()`          | Menu-driven interface that takes user input and calls functions.        |

---


## 🧪 Sample Usage

```

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 1
Enter data: 100

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 2
Enter data: 1000

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 3
Enter data and position: 300 3

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 7
List (forward): 100 1000 300 

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 6
Enter position to delete: 2

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 7
List (forward): 100 300 

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 3
Enter data and position: 200 2

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 5

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 8
List (backward): 200 100 

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete at position
7. Display forward
8. Display backward
9. Exit
Enter your choice: 7
List (forward): 100 200 

```

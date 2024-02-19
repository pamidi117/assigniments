#include <iostream>  // Including the input-output stream library for basic I/O operations.
#include <vector>    // Including the vector library for dynamic arrays.
#include <queue>     // Including the queue library for queue data structure.
using namespace std; // Using the standard namespace for simplifying code writing.

class DynamicDataStructureApp { // Declaring a class for the dynamic data structure application.

public:
    void run() { // Function to start the application.
        cout << "Choose a data structure:" << endl; // Prompting the user to choose a data structure.
        cout << "1. List" << endl; // Displaying option 1: List.
        cout << "2. Linked List" << endl; // Displaying option 2: Linked List.
        cout << "3. Array" << endl; // Displaying option 3: Array.
        cout << "4. Stack" << endl; // Displaying option 4: Stack.
        cout << "5. Queue" << endl; // Displaying option 5: Queue.
        cout << "6. Binary Tree" << endl; // Displaying option 6: Binary Tree.

        int choice; // Variable to store the user's choice.
        cin >> choice; // Reading user input.

        switch (choice) { // Switch statement based on the user's choice.
        case 1: // If user chooses option 1.
            handleList(); // Calling function to handle List.
            break;
        case 2: // If user chooses option 2.
            handleLinkedList(); // Calling function to handle Linked List.
            break;
        case 3: // If user chooses option 3.
            handleArray(); // Calling function to handle Array.
            break;
        case 4: // If user chooses option 4.
            handleStack(); // Calling function to handle Stack.
            break;
        case 5: // If user chooses option 5.
            handleQueue(); // Calling function to handle Queue.
            break;
        case 6: // If user chooses option 6.
            handleBinaryTree(); // Calling function to handle Binary Tree.
            break;
        default: // If user chooses an invalid option.
            cout << "Invalid choice." << endl; // Displaying error message.
        }
    }

private:
    void handleList() { // Function to handle List.
        vector<int> list; // Creating a vector to store list elements.
        int size; // Variable to store size of the list.
        cout << "Enter the size of the list: "; // Prompting the user to enter list size.
        cin >> size; // Reading list size from user.

        cout << "Enter data for the list (separated by spaces): "; // Prompting the user to enter list elements.
        for (int i = 0; i < size; ++i) { // Loop to read list elements.
            int data; // Variable to store each list element.
            cin >> data; // Reading list element from user.
            list.push_back(data); // Adding the element to the list.
        }

        cout << "List: "; // Displaying the list.
        for (int num : list) { // Loop to display list elements.
            cout << num << " "; // Outputting each element.
        }
        cout << endl; // New line after displaying list.
    }

    void handleLinkedList() { // Function to handle Linked List.
        class Node { // Declaring a nested class for Node of Linked List.
        public:
            int data; // Data stored in the node.
            Node* next; // Pointer to the next node.

            Node(int data) : data(data), next(nullptr) {} // Constructor to initialize node with data and null next pointer.
        };

        Node* head = nullptr; // Pointer to the head of the Linked List.
        int size; // Variable to store size of the Linked List.
        cout << "Enter the size of the linked list: "; // Prompting the user to enter Linked List size.
        cin >> size; // Reading Linked List size from user.

        cout << "Enter data for the linked list: "; // Prompting the user to enter Linked List elements.
        for (int i = 0; i < size; ++i) { // Loop to read Linked List elements.
            int data; // Variable to store each Linked List element.
            cin >> data; // Reading Linked List element from user.
            Node* newNode = new Node(data); // Creating a new node with the entered data.
            if (head == nullptr) { // If Linked List is empty.
                head = newNode; // Set the new node as head.
            } else { // If Linked List is not empty.
                Node* temp = head; // Temporary pointer to traverse the Linked List.
                while (temp->next != nullptr) { // Finding the last node.
                    temp = temp->next; // Move to the next node.
                }
                temp->next = newNode; // Linking the new node to the last node.
            }
        }

        cout << "Linked List: "; // Displaying the Linked List.
        Node* temp = head; // Temporary pointer to traverse the Linked List.
        while (temp != nullptr) { // Loop to traverse the Linked List.
            cout << temp->data << " "; // Outputting data of each node.
            temp = temp->next; // Move to the next node.
        }
        cout << endl; // New line after displaying Linked List.

        // Free memory
        while (head != nullptr) { // Loop to deallocate memory.
            Node* temp = head; // Temporary pointer to hold the current node.
            head = head->next; // Move head to the next node.
            delete temp; // Deallocate memory of the current node.
        }
    }

    void handleArray() { // Function to handle Array.
        int* arr; // Pointer to store the array.
        int size; // Variable to store size of the array.
        cout << "Enter the size of the array: "; // Prompting the user to enter array size.
        cin >> size; // Reading array size from user.

        arr = new int[size]; // Dynamically allocating memory for the array.

        cout << "Enter data for the array: "; // Prompting the user to enter array elements.
        for (int i = 0; i < size; ++i) { // Loop to read array elements.
            cin >> arr[i]; // Reading array element from user.
        }

        cout << "Array: "; // Displaying the array.
        for (int i = 0; i < size; ++i) { // Loop to display array elements.
            cout << arr[i] << " "; // Outputting each array element.
        }
        cout << endl; // New line after displaying array.

        delete[] arr; // Deallocating memory for the array.
    }

    void handleStack() { // Function to handle Stack.
        vector<int> stack; // Creating a vector to represent the stack.
        int size; // Variable to store size of the stack.
        cout << "Enter the size of the stack: "; // Prompting the user to enter stack size.
        cin >> size; // Reading stack size from user.

        cout << "Enter data for the stack (top to bottom):

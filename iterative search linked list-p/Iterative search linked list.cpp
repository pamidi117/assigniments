#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int val) : data(val), next(nullptr) {}
};

// Function to search for an element iteratively in a linked list
bool searchIterative(Node* head, int target) {
    Node* current = head; // Initialize current pointer to head of the list
    while (current != nullptr) { // Loop until current pointer reaches end of list
        if (current->data == target) // Check if current node's data matches target
            return true; // Return true if target found
        current = current->next; // Move to next node
    }
    return false; // Return the false if target not found
}

int main() {
    // Create a linked list with three nodes containing values 1 through 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int target = 2; // Target element to search for

    // Search for the target element in the linked list
    if (searchIterative(head, target))
        std::cout << "Element " << target << " is present in the linked list." << std::endl;
    else
        std::cout << "Element " << target << " is not present in the linked list." << std::endl;

    return 0; // Return 0 to indicate successful execution
}

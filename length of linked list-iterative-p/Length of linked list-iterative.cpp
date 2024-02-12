#include <iostream>  //This line includes the input/output stream library, which allows input and output operations.

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};   // This declares a struct named Node which represents a node in a linked list. It contains an integer data and a pointer next to the next node in the list. It also defines a constructor to initialize the data and next pointer of a node.cpp


int findLengthIterative(Node* head) {
    int length = 0;                      //This function findLengthIterative calculates the length of a linked list iteratively. It takes a pointer to the head of the list as input. It initializes a variable length to 0 and a pointer current to the head of the list. It then iterates through the list, incrementing the length for each node, until it reaches the end of the list (where current becomes nullptr). Finally, it returns the calculated length.
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the length of the linked list
    int length = findLengthIterative(head);
    std::cout << "Length of the linked list: " << length << std::endl;  //This is the main function of the program. It creates a linked list with five nodes, each containing values 1 through 5. It then calls the findLengthIterative function to calculate the length of the linked list and prints the result. Finally, it returns 0, indicating successful execution of the program.

    return 0;
}


//chnages1
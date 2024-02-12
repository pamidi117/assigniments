#include <iostream> //This line includes the input/output stream library, which allows input and output operations.

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};  //This declares a struct named Node which represents a node in a linked list. It contains an integer data to store the value of the node and a pointer next to point to the next node in the list. It also defines a constructor to initialize the data and next pointer of a node.

Node* reverseLinkedListRecursive(Node* head) {
    // Base case: if the current node is nullptr or the last node in the list, return it
    if (head == nullptr || head->next == nullptr)
        return head;

    // Recursively reverse the sublist starting from the next node
    Node* newHead = reverseLinkedListRecursive(head->next);

    // Reverse the links between the current node and the next node
    head->next->next = head;
    head->next = nullptr;

    // Return the new head of the reversed sublist
    return newHead;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}   //This function printLinkedList prints the elements of a linked list. It takes a pointer to the head of the list as input. It traverses the list using a while loop, printing the data of each node. After printing all elements, it adds a newline character to the output.

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Reverse the linked list recursively
    head = reverseLinkedListRecursive(head);

    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    return 0;
}  //his is the main function of the program. It creates a linked list with five nodes, each containing values 1 through 5. It then prints the original linked list using the printLinkedList function. After that, it reverses the linked list recursively using the reverseLinkedListRecursive function and prints the reversed linked list. Finally, it returns 0, indicating successful execution of the program.
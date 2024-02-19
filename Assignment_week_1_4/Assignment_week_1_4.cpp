#include <iostream>

#include <vector>

#include <queue>

using namespace std;



class DynamicDataStructureApp {

public:

    void run() {

        cout << "Choose a data structure:" << endl;

        cout << "1. List" << endl;

        cout << "2. Linked List" << endl;

        cout << "3. Array" << endl;

        cout << "4. Stack" << endl;

        cout << "5. Queue" << endl;

        cout << "6. Binary Tree" << endl;



        int choice;

        cin >> choice;



        switch (choice) {

        case 1:

            handleList();

            break;

        case 2:

            handleLinkedList();

            break;

        case 3:

            handleArray();

            break;

        case 4:

            handleStack();

            break;

        case 5:

            handleQueue();

            break;

        case 6:

            handleBinaryTree();

            break;

        default:

            cout << "Invalid choice." << endl;

        }

    }



private:

    void handleList() {

        vector<int> list;

        int size;

        cout << "Enter the size of the list: ";

        cin >> size;



        cout << "Enter data for the list (separated by spaces): ";

        for (int i = 0; i < size; ++i) {

            int data;

            cin >> data;

            list.push_back(data);

        }



        cout << "List: ";

        for (int num : list) {

            cout << num << " ";

        }

        cout << endl;

    }



    void handleLinkedList() {

        class Node {

        public:

            int data;

            Node* next;

            Node(int data) : data(data), next(nullptr) {}

        };



        Node* head = nullptr;

        int size;

        cout << "Enter the size of the linked list: ";

        cin >> size;



        cout << "Enter data for the linked list: ";

        for (int i = 0; i < size; ++i) {

            int data;

            cin >> data;

            Node* newNode = new Node(data);

            if (head == nullptr) {

                head = newNode;

            }

            else {

                Node* temp = head;

                while (temp->next != nullptr) {

                    temp = temp->next;

                }

                temp->next = newNode;

            }

        }



        cout << "Linked List: ";

        Node* temp = head;

        while (temp != nullptr) {

            cout << temp->data << " ";

            temp = temp->next;

        }

        cout << endl;



        // Free memory

        while (head != nullptr) {

            Node* temp = head;

            head = head->next;

            delete temp;

        }

    }



    void handleArray() {

        int* arr;

        int size;

        cout << "Enter the size of the array: ";

        cin >> size;



        arr = new int[size];



        cout << "Enter data for the array: ";

        for (int i = 0; i < size; ++i) {

            cin >> arr[i];

        }



        cout << "Array: ";

        for (int i = 0; i < size; ++i) {

            cout << arr[i] << " ";

        }

        cout << endl;



        delete[] arr;

    }



    void handleStack() {

        vector<int> stack;

        int size;

        cout << "Enter the size of the stack: ";

        cin >> size;



        cout << "Enter data for the stack (top to bottom): ";

        for (int i = 0; i < size; ++i) {

            int data;

            cin >> data;

            stack.push_back(data);

        }



        cout << "Stack (top to bottom): ";

        for (int i = stack.size() - 1; i >= 0; --i) {

            cout << stack[i] << " ";

        }

        cout << endl;

    }



    void handleQueue() {

        queue<int> q;

        int size;

        cout << "Enter the size of the queue: ";

        cin >> size;



        cout << "Enter data for the queue (front to back): ";

        for (int i = 0; i < size; ++i) {

            int data;

            cin >> data;

            q.push(data);

        }



        cout << "Queue (front to back): ";

        while (!q.empty()) {

            cout << q.front() << " ";

            q.pop();

        }

        cout << endl;

    }



    void handleBinaryTree() {

        // Implementation of binary tree handling

        cout << "Binary Tree handling is not implemented yet." << endl;

    }

};



int main() {

    DynamicDataStructureApp app;

    app.run();

    return 0;

}
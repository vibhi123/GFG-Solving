//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*structure of the node of the DLL is as
struct Node {`
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion

   class Solution {
public:
    Node* sortedInsert(Node* head, int x) {
        // Create the new node with the given data
        Node* newnode = new Node();
        newnode->data = x;
        newnode->next = nullptr;

        // Insert at the beginning if x is smaller than the head's data
        if (head->data > x) {
            newnode->next = head;
            return newnode;  // newnode becomes the new head
        }

        // Traverse to find the correct insertion position
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data < x) {
            temp = temp->next;
        }

        // Insert the new node in the sorted position
        newnode->next = temp->next;
        temp->next = newnode;

        return head;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = getNode(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = getNode(x);
            tail->next->prev = tail;
            tail = tail->next;
        }

        int valueToInsert;
        cin >> valueToInsert;
        cin.ignore(); // Ignore the newline character after the value

        Solution obj;
        head = obj.sortedInsert(head, valueToInsert);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends
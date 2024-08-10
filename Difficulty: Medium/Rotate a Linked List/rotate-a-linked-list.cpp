//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Node* reverse(Node* root)
    // {
    //     Node* p = root, *ans=NULL;
    //     while(p)
    //     {
    //         Node* t = p;
    //         p = p->next;
    //         t->next = ans;
    //         ans = t;
    //     }
    //     return ans;
    // }
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head->next) return head;
        Node* end = head;
        while(end->next)
        {
            end=end->next;
        }
            
        Node* root=head;
        // root = reverse(head);
        while(k--)
        {
            Node* t = root;
            root = root->next;
            end->next = t;
            end = end->next;
            end->next = NULL;
        }
        return root;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends
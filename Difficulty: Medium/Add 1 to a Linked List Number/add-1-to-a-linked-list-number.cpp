//{ Driver Code Starts
// Initial template for C++

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
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* root)
    {
        Node* pre=NULL;
        Node* t=root;
        while(t)
        {
            Node* t1=t->next;
            t->next=pre;
            pre=t;
            t=t1;
        }
        return pre;
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        Node* root = reverse(head);
        Node* t=root;
        Node* last=NULL;
        int c=1;
        while(t){
            int x=t->data;
            t->data=(x+c)%10;
            c = (x+c)/10;
            if(t->next==NULL) last=t;
            t=t->next;
        }
        if(c) last->next=new Node(c);
        return reverse(root);
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
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends
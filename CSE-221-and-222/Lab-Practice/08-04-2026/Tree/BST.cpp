#include <iostream>
using namespace std;

// ১. ট্রি-এর নোড (Node) স্ট্রাকচার তৈরি
struct Node {
    int data;
    Node* left;
    Node* right;
};

// ২. নতুন নোড তৈরি করার ফাংশন
Node* createNode(int value) {
    Node* newNode = new Node(); // মেমরিতে নতুন জায়গা নেওয়া
    newNode->data = value;      // ডেটা বসানো
    newNode->left = NULL;       // শুরুতে বাম দিকে কিছু নেই
    newNode->right = NULL;      // শুরুতে ডান দিকেও কিছু নেই
    return newNode;
}

// ৩. ট্রি-তে ডেটা যুক্ত (Insert) করার ফাংশন 
Node* insert(Node* root, int value) {
    // যদি ট্রি ফাঁকা থাকে, তবে এটাই প্রথম নোড বা Root
    if (root == NULL) {
        return createNode(value);
    }

    // BST রুল: যদি ভ্যালু রুট থেকে ছোট হয়, বাম দিকে (Left) যাবে
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // BST রুল: যদি ভ্যালু রুট থেকে বড় হয়, ডান দিকে (Right) যাবে
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root; // রুট রিটার্ন করে দিলাম
}

// ৪. ট্রি প্রিন্ট করার ফাংশন (Inorder Traversal)
// ইনঅর্ডার প্রিন্ট করলে ডেটাগুলো ছোট থেকে বড় (Sorted) আকারে দেখাবে
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);         // প্রথমে বামের সব প্রিন্ট
        cout << root->data << " ";   // তারপর মাঝেরটা প্রিন্ট
        inorder(root->right);        // শেষে ডানের সব প্রিন্ট
    }
}

int main() {
    Node* root = NULL; // শুরুতে ট্রি পুরোপুরি ফাঁকা

    cout << "Building the Tree..." << endl;

    // ট্রি-তে ডেটা ইনসার্ট করা হচ্ছে
    root = insert(root, 50); // এটি হবে Root বা মূল নোড
    
    insert(root, 30); // ৫০ এর চেয়ে ছোট, তাই বামে যাবে
    insert(root, 20); // ৩০ এর চেয়েও ছোট, আরও বামে যাবে
    insert(root, 40); // ৩০ এর চেয়ে বড়, তাই ৩০ এর ডানে যাবে
    insert(root, 70); // ৫০ এর চেয়ে বড়, তাই ডানে যাবে
    insert(root, 60); // ৭০ এর চেয়ে ছোট, তাই ৭০ এর বামে যাবে
    insert(root, 80); // ৭০ এর চেয়ে বড়, তাই ৭০ এর ডানে যাবে

    cout << "Tree created successfully!" << endl;
    cout << "Inorder Traversal (Sorted Output): ";
    
    inorder(root); // আউটপুট হবে: 20 30 40 50 60 70 80
    cout << endl;

    return 0;
}




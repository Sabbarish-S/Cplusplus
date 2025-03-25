#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();  // Dummy node
        ListNode* tail = dummy;  // Pointer to track last node

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach remaining elements of the non-empty list
        tail->next = (list1 != nullptr) ? list1 : list2;

        return dummy->next;  // Skip dummy node
    }
};

// Function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;
    for (int i = 1; i < size; i++) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }
    return head;
}

// Main function to test the code
int main() {
    Solution solution;

    // Create first sorted linked list
    int arr1[] = {1, 2, 4};
    ListNode* list1 = createLinkedList(arr1, arr1.size());

    // Create second sorted linked list
    int arr2[] = {1, 3, 4};
    ListNode* list2 = createLinkedList(arr2, arr2.size());

    // Print the original lists
    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    // Merge the lists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}

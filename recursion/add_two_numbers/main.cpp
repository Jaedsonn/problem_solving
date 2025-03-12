#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){};
    ListNode(int x): val(x), next(nullptr){};
    ListNode(int x, ListNode* p): val(x), next(p){};
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     return recursion(l1, l2, 0);
    }

    ListNode* recursion(ListNode* l1, ListNode* l2, int carry = 0){
        ListNode* newList;

        if(l1 == nullptr && l2 == nullptr && carry == 0){
            return nullptr;
        } else{
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;
            int val =  digit1 + digit2 + carry;
            carry = val / 10;
            ListNode* node = new ListNode(val % 10); 
            newList = node;
            newList->next = recursion((l1 != nullptr) ? l1->next : nullptr, (l2 != nullptr) ? l2->next : nullptr, carry);
        }
        return newList;
    }
};

int main(){
    // ListNode* node9 = new ListNode(9);
    // ListNode* node8 = new ListNode(9, node9);
    // ListNode* node7 = new ListNode(9, node8);
    // ListNode* node6 = new ListNode(9, node7);
    // ListNode* node5 = new ListNode(9, node6);
    // ListNode* node4 = new ListNode(9, node5);
    // ListNode* node3 = new ListNode(9, node4 );
    // ListNode* node2 = new ListNode(9, node3);
    // ListNode* node1 = new ListNode(9, node2);

    // ListNode* n4 = new ListNode(9);
    // ListNode* n3 = new ListNode(9, n4);
    // ListNode* n2 = new ListNode(9, n3);
    // ListNode* n1 = new ListNode(9, n2);

    // Solution sol = Solution();
    // ListNode* res = sol.addTwoNumbers(node1, n1);
    cout << (7%10) << endl;
    return 0;

}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr ;
            curr = temp;
        }
        return prev ;
    }

    void reorderList(ListNode* head) {

        //first step : find middle
        // Ex : 1234  : slow 12 fast 13 but we will not be using fast , just used for finding middle
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //second step : split both lists and reverse second part 
        ListNode* second = slow->next;
        slow->next = nullptr; // we have to this line to cut the connection between first and second part
        second = reverseList(second);

        // third step : Ex : we have now : slow 12 , second 43
        ListNode* first = head;
        while (second){
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
    }
};

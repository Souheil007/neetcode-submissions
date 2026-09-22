class Solution {
public:
    bool hasCycle(ListNode* head) {

        unordered_map<ListNode*, bool> visited;

        while (head) {

            if (visited[head])
                return true;

            visited[head] = true;

            head = head->next;
        }

        return false;
    }
};
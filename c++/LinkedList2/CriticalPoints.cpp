#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // Pointers for sliding window
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        
        if (c == nullptr) return {-1, -1};

        int idx = 1; // Index of node 'b'
        int f_idx = -1; // First critical point found
        int prev_idx = -1; // Most recent critical point found
        
        int min_dis = INT_MAX;

        while (c != nullptr) {
            // Check if 'b' is a local maxima or minima
            if ((b->val > a->val && b->val > c->val) || 
                (b->val < a->val && b->val < c->val)) {
                
                // 1. If this is the VERY first critical point found
                if (f_idx == -1) {
                    f_idx = idx;
                }
                
                // 2. If we have seen a critical point before, calculate min_dis
                if (prev_idx != -1) {
                    min_dis = min(min_dis, idx - prev_idx);
                }
                
                // 3. Update prev_idx to current index
                prev_idx = idx;
            }

            // Move pointers forward
            a = b;
            b = c;
            c = c->next;
            idx++;
        }

        // If we found fewer than 2 critical points
        if (f_idx == -1 || f_idx == prev_idx) {
            return {-1, -1};
        }

        // Max distance is simply Last Critical Point - First Critical Point
        int max_dis = prev_idx - f_idx;

        return {min_dis, max_dis};
    }
};
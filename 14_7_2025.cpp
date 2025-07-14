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
    private:
    int getsize(ListNode* head){   // inc head till it reach null then return the total number it have
        ListNode* temp = head;
        int n= 0 ;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
         //cout <<n;
        return n;
    }
    int decimal(ListNode* head , int n){
        int ans = 0 ;

        while(head!=NULL){
             ans += head->val*pow(2 , n);
            n--;
            head= head->next;
        }
        return ans;
    }


    // to turn a number to decimal we multiply it by 2^ (place in digit)
    //eg 1 0 1 ---> 1 * 2^2 + 0 * 2^1 + 1 * 2^0 =5
    public:
    int getDecimalValue(ListNode* head) {
        int n = getsize(head);       // get the size of the list 
        if(head == NULL){
            return 0;                  // if the head is null size is null that will mean the ans is zero
        }

        return decimal(head , n-1);       // simply multiply  2 ^ n with the value of linked list at head and move to next while n = n-1
    }
};
/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

Answer-> 
*/

ListNode* middleNode(ListNode* head) {
        ListNode * fast = head,*slow = head;
        while(fast!=NULL && fast->next!=NULL){ // when fast pointer will be at last or cross(NULL) then its means slow pointer will be at middle of list
            slow = slow->next; // slow pointer will move by one location
            fast = fast->next->next; //fast pointer will move by 2 location 
        }
        return slow;
}

TC - O(N/2)
SC- O(1)

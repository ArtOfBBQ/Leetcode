// 21. Merge Two Sorted Lists
// Easy

// Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4



// Success
// Details 
// Runtime: 96 ms, faster than 53.65% of C# online submissions for Merge Two Sorted Lists.
// Memory Usage: 25.9 MB, less than 6.45% of C# online submissions for Merge Two Sorted Lists.

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
        
        if (l1 == null && l2 == null) { return null; }
        else if (l1 == null) { return l2; }
        else if (l2 == null) { return l1; }
        
        if (l1.val <= l2.val) 
        {
            return new ListNode(val: l1.val, next: MergeTwoLists(l1.next, l2));
        }
        else 
        {
            return new ListNode(val: l2.val, next: MergeTwoLists(l1, l2.next));
        }
    }
    
}
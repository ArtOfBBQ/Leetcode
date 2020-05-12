// 83. Remove Duplicates from Sorted List
// Easy

// Given a sorted linked list, delete all duplicates such that each element appear only once.

// Example 1:
// Input: 1->1->2
// Output: 1->2

// Example 2:
// Input: 1->1->2->3->3
// Output: 1->2->3

// Success
// Runtime: 100 ms, faster than 39.82% of C# online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 26 MB, less than 16.67% of C# online submissions for Remove Duplicates from Sorted List.
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
    public ListNode DeleteDuplicates(ListNode head) {
        
        if (head == null) { return null; }
        
        ListNode cur = head;
        
        while (cur.next != null)
        {
            while (cur.next.val == cur.val) 
            {
                if (cur.next.next == null) 
                {
                    cur.next = null;
                    return head;
                }
                
                cur.next = cur.next.next;
            }
            cur = cur.next;
        }
        
        return head;
    }
}
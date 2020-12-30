// 2. Add Two Numbers
// Medium

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.


// Your runtime beats 25.16 % of csharp submissions.
// Your memory usage beats 91.04 % of csharp submissions
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
    
        var returnValue = new ListNode();
        if (l1 == null && l2 == null) { return null; }
        
        var result = returnValue;
        int carry = 0;
        
        while (l1 != null || l2 != null || carry > 0) {
            int curResult = (l1?.val ?? 0) + (l2?.val ?? 0) + carry;
            result.val = curResult % 10;
            carry = curResult / 10;
            
            if (l1?.next != null || l2?.next != null || carry > 0) {
                result.next = new ListNode();
                result = result.next;

                l1 = l1?.next;
                l2 = l2?.next;    
            } else 
            {
                break;
            }
        }
        
        return returnValue;
    }
}

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l1_values = []
        l2_values = []
        
        current = l1

        while current:
            l1_values.append(str(current.val))
            current = current.next


        current = l2
        
        while current:
            l2_values.append(str(current.val))
            current = current.next

        l1_values = l1_values[::-1]
        l2_values = l2_values[::-1]

        l1_num = int (''.join(l1_values))
        l2_num = int (''.join(l2_values))

        new_digits= str(l1_num + l2_num)[::-1]
        our_list = ListNode()
        current = our_list

        for digit in new_digits:
            current.next = ListNode(int(digit))
            current = current.next

        return our_list.next
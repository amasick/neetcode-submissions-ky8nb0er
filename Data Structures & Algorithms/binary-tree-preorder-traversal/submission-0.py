# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.__arr=[]
    
    def preOrder(self,root:TreeNode)->None:
        if(root==None) :
            return
        self.__arr.append(root.val)
        if(root.left!=None):
            self.preOrder(root.left)
        if(root.right!=None):
            self.preOrder(root.right)

        



    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if(root==None) :
            return []
        self.preOrder(root)
        return self.__arr

        
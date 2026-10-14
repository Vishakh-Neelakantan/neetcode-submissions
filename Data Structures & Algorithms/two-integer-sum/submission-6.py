class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        A = []
        for i, num in enumerate(nums):
            A.append([num,i])

        A.sort()
        i, j = 0, len(nums) - 1
        while i < j:
            cur = A[i][0] + A[j][0]
            if cur == target:
                return [min(A[i][1], A[j][1]), 
                        max(A[i][1], A[j][1])]
            elif cur < target:
                i += 1
            else:
                j -= 1
        return []


        # 1. A[i] fetches the whole sub-list: [15, 0].
        # 2. A[i][0] fetches the item at index 0 of that sub-list: 15.
        # 3. A[i][1] fetches the item at index 1 of that sub-list: 0.

        
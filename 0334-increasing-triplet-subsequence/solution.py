class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        #simple approach here is that we have to just find three numbers 
        #traverse the for loop once and we will get the answer

        min1 = float('inf')
        min2 = float('inf')

        for i in nums:
            if i <= min1:
                min1 = i
            elif i<= min2:
                min2 = i
            else:
                return True
        return False
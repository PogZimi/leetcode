class Solution(object):
    def searchInsert(self, nums, target): 
        self.size = nums.__len__()

        if target in nums: 
           for i in range(self.size):
               if(nums[i] == target):
                   print(i)
        else: 
           nums.append(target)
           self.size += 1

           # Bubble-Sorting Algorithm
           for i in range(self.size):
               for j in range(self.size-1):
                  if(nums[j] > nums[j+1]):
                     var = nums[j+1]
                     nums[j+1] = nums[j]
                     nums[j] = var 
           # Printing final value
        return nums.index(target)

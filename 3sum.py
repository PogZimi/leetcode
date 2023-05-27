class Solution(object):
    def threeSum(self, nums):
        target = 0
        var = 0
        Q = []
        self.size = nums.__len__()
        nums.sort()
        
        for i in range(self.size):
            for j in range(self.size):
                if(j!=i):
                    var = nums[i] + nums[j]
                else: 
                    break;
                if((target-var) in nums):
                  for x in range(self.size):
                    if(nums[x] == target-var and x!=i and x!=j ):
                        Q.append([nums[i], nums[x], nums[j]])

        for i in range(Q.__len__()):
            Q[i].sort()      
        O = set(tuple(lst) for lst in Q)         
        return O

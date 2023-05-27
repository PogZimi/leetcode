'''

-> Main loops : 2
-> Nested Loops : 2

IMPORTANT STUFF : 

-> threeSumList is the list in which we store the 3 integers whose sum is equal to target value 
-> Since the threeSumList stores duplicates , we created a new list 'deduplicated_threeSumList'.
-> threeSumList stores sub lists. In simple words , we created a multi-dimensional array/list 
-> We sorted each element ( sub-list) 
-> We used set() to remove duplicates & obtain unique values 

'''

class Solution(object):
    def threeSum(self, nums):
        target = 0
        var = 0
        threeSumList = []
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
                        threeSumList.append([nums[i], nums[x], nums[j]])

        for i in range(threeSumList.__len__()):
            threeSumList[i].sort()      
        deduplicated_threeSumList = set(tuple(lst) for lst in threeSumList)         
        return deduplicated_threeSumList

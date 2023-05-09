Q = int(input())
Sq = str(Q)

def form_list_to_string_to_int(int_list, size) -> str:
    n = ""
    for i in range(size):
        n+=int_list[i]
    return n

class Solution:
    def reverse(self, number, Spl):
        (size) = Spl.__len__()
        lister = []
        new_list = []
        i = 0
        j = 0
        new_var = ""

        for i in range(size):
            lister.append(Spl[i])

        if(number%10 == 0):
            lister.remove('0')
            
        
        if(number < 0):
            i = len(lister)-1
            new_list.append("-")
            while i > 0:
                new_list.append(lister[i])  
                i-=1
        else: 
            i=len(lister)-1
            while i > -1:
                new_list.append(lister[i])
                i-=1                
                 
        new_var = form_list_to_string_to_int(new_list, len(new_list))
        return int(new_var)
    
o = Solution()
opq = o.reverse(Q, Sq)
print(opq)

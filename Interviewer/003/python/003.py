import time
class Solution:
    def Duplication(self, array, length):
        dup = []
        temp = 0;
        for i in range(length):
            while(array[i] != i):
                if array[i] == array[array[i]]:
                    if not array[array[i]] in dup:
                        dup.append(array[array[i]])
                    break
                else:
                    temp = array[i]
                    array[i] = array[array[i]]
                    array[temp] = temp
        return dup

s1 = Solution()
print(s1.Duplication([2, 3, 1, 2, 2, 0, 2, 5, 3, 3], 10))



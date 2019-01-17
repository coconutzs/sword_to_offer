class Solution:
    def Find(self, target, array):
        num_r = len(array)
        num_c = len(array[0])
        r     = 0
        c     = num_c - 1
        find  = False
        while(not find):
            if target == array[r][c]:
                find = True
            else:
                if target > array[r][c]:
                    r += 1
                else:
                    c -= 1
        if find:
            print("At (%d, %d)." % (r, c))
        else:
            print("Not exist!")
        return find

s1 = Solution()
a  = s1.Find(8, [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])
print(a)

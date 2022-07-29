class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        self.s = s
    def leng(self):
        for i in range(len(self.s)):
            print(self.s[-1])
            print(len(self.s))

x = Solution()
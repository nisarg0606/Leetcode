class Solution:
    def isPalindrome(self, s: str) -> bool:
                # s = s.replace(" ", "")
        s = ''.join(e for e in s if e.isalnum())
        s = s.lower()
        if s == s[::-1]:
            return True
        else:
            return False

a = Solution()
print(a.isPalindrome("A a"))
print(a.isPalindrome("A man, a plan, a canal: Panama"))
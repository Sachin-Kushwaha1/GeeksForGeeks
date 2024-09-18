# User function Template for python3

class Solution:
    # Function to reverse words in a given string.
    def reverseWords(self, str):
        # Split the string into a list of words using the dot as a delimiter
        lst = str.split(".")

        # Reverse the list of words
        lst.reverse()

        # Join the reversed list of words back into a string using the dot as a separator
        ans = ".".join(lst)

        return ans
#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))

# } Driver Code Ends
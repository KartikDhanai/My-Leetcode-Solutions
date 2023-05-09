#User function Template for python3
mod = 10**9 + 7
def multiply(mat1, mat2):
    ans = [[0 for i in range(2)] for j in range(2)]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                ans[i][j] += (mat1[i][k] * mat2[k][j]) % mod
    return ans
    
def func(mat, n):
    if n ==1:
        return mat
    temp = func(mat,n//2)
    if n%2 == 0:
        return multiply(temp,temp)
    return multiply(multiply(temp,temp), mat)


class Solution: 
    def countStrings(self, N): 
        mat = [[1,1],[1,0]]
        ans = func(mat,N+2)
        return ans[0][1]%mod



#{ 
 # Driver Code Starts
#Initial Template for Python 3
#Initial Template for Python 3

if __name__ == '__main__':
    
    T = int(input())
    while T > 0: 
        
        ob = Solution()
        print(ob.countStrings(int(input())))
        
        T -= 1
# } Driver Code Ends
// 找 最近 重复子问题
// if else,
// for while, recursion

//1:1
//2:2
//3:f(1) + f(2) ; mutual exclusive, complete exhaustive
//4:f(2) + f(3)

// f(n) = f(n-1) + f(n-2) :Fibonacci
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 0) return 1;
        if (n == 2) return 2;

        vector<int> fib(n+1, 0);
        fib[0] = 1;
        fib[1] = 1;
        fib[2] = 2;

        for (int i = 3;i<n+1;++i)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }

        return fib[n];
    }
};
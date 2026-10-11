class Solution {
public:
    bool threeFibonacciSum(int n) {
       // vector<int> fib = {0, 1};

       //  while(fib.back() <= n) {
       //      int sz = fib.size();
       //      fib.push_back(fib[sz - 1] + fib[sz - 2]);
       //  }

       //  for(int i = 0; i + 2 < fib.size(); i++) {
       //      long long sum = fib[i] + fib[i + 1] + fib[i + 2];

       //      if(sum == n)
       //          return true;
       //  }

       //  return false;  
        int a = 0, b = 1;

        while(true) {
            int c = a + b;

            if(a + b + c == n)
                return true;

            if(a + b + c > n)
                return false;

            a = b;
            b = c;
        }
    }
};
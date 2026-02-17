class Solution {
public:
    double myPow(double x, long long n) {
      
        //   if(n>0){
        //     double ans= x;
        //     for(int i=1;i<n;i++){
        //         ans=ans*x;
        //     }
        //     return ans;
        // }
        // else if(n<0){
        //      double ans=1/x;
        //     for(int i=0;i>n+1;i--){
        //         ans=ans*(1/(x));
        //     }
        //     return ans;   
        // }
        // else{
        //  int ans=1;
        // return ans;
        // }

        // if (n==0)return 1;

        // if (n<0){
        //     n=-n;
        //     x=1/x;
        // }
        //    double ans= x;
        //     for(int i=1;i<n;i++){
        //         ans=ans*x;
        //     }
        //     return ans;
    
    // int power = abs(n);
    // if(n==0){
    //     return 1;
    // }
    // double ans = 1;
    // for(int i=0; i<power; i++){
    //     ans = ans*x;
    // }
    // if(n<0){
    //     return (1/ans);
    // }
    // return ans;
    // }

    //optimal

        if (n<0){
            n=-n;
            x=1/x;
        }
        double ans = 1;
        while(n > 0){
            if(n % 2 == 1){
                ans =ans* x;
            }
            x=x*x;
            n=n/2;
        }
        return ans;
    }
};
class Solution {
public:
    double myPow(double x, int n) {
       if(n==0) return 1.0;
       if(x==0) return 0.0;
       if(x==1) return 1.0;
       if(x==-1&&n%2==0) return 1.0;
       if(x==-1&& n%2!=0) return -1.0;

       long bf=n;
       if(n<0){
        x=1/x;
        bf=-bf;
       }
        double ans=1;
        while(bf>0){
            if(bf%2==1){
                ans*=x;
            }
            x*=x;
            bf/=2;
        }
        return ans;
        
    }
};

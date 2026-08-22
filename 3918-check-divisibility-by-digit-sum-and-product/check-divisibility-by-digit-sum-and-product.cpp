class Solution {
public:
    bool checkDivisibility(int n) {
        int i=n;
        int sum=0;
        int product=1;
        while(i!=0){
            sum+=i%10;
            product*=i%10;
            i=i/10;
        }
        int sop=sum+product;
        if(n%sop==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};
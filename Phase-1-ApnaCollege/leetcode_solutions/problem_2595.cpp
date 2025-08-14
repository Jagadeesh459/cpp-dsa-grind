class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>v(2,0);
        int rem,ans=0,count;
        double pow=1;
        while(n>0)
        {
            rem=n%2;
            ans+=rem*pow;
            n=n/2;
            pow=pow*10;
        }
        count=1;
        while(ans>0)
        {
            count++;
            rem=ans%10;
            if(rem==1&&count%2==0)
            v[0]++;
            else if(rem==1&&count%2!=0)
            v[1]++;
            ans=ans/10;
        }
        return v;
    }
};
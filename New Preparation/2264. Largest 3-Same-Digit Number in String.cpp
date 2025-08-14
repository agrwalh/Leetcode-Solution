class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int mx=-1;
        for(int i=2;i<num.size();i++){
            if(num[i]==num[i-1] && num[i-1]==num[i-2]){
                mx=max(mx,num[i]-'0');
            }
            
           
        }
        if(mx==-1) return "";
         
            else
            return string(3,char(mx+'0'));
    }
};

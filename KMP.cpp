class Solution{
 public:  
int lps(string str) {
       int n=str.length(),len=0;
       int lps[n];
   lps[0]=0;
   int i=1;
   while(i<n){
       if(str[i]==str[len])
       {len++;lps[i]=len;i++;}
       else
       {if(len==0){lps[i]=0;i++;}
           else{len=lps[len-1];}
       }
   }
   return len;
}
};

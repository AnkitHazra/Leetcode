class Solution {
public:
    int tribonacci(int n) {
       if(n==0) {
            return 0;
        }
        if(n==2 || n==1){ return 1;
        }
        else{
        long long int firstterm=0;
        long long int secondterm=1;
        long long int thirdterm=1;
        
        for(int i=0;i<n;i++){
           long long int fourthterm=firstterm+secondterm+thirdterm;
            firstterm=secondterm;
            secondterm=thirdterm;
            thirdterm=fourthterm;
        }
        
     return   firstterm;
        }
    }
};
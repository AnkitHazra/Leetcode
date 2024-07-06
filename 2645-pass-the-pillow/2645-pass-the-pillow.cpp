class Solution {
public:
    int passThePillow(int n, int time) {
     int c=time;
     int i=1;
     int d=1;
     while(c!=0){
        if(i==n){
            d=-1;
        }
        if(i==1){
            d=1;
        }
       i=i+1*d;
       c--;
     }  
     return i; 
    }
};
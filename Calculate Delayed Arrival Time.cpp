class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int reach = arrivalTime + delayedTime;
    if(reach==24){
        return 0;
    }
    if(reach>24){
       return reach%24;
    }
    return reach; 
    }
};

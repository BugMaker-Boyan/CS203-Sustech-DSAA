////
//// Created by Boyan on 2020/9/16.
////
//
////
//// Created by Boyan on 2020/9/15.
////
//
//#include <iostream>
//using namespace std;
//
//
//long long xr,yr,xc,yc,N;
//
//long long deltaDistanceInT;
//long long iniDistance;
//
//
//long long distance(){
//    return abs(xr-xc)+abs(yr-yc);
//}
//
//void run(long long &x,long long &y,char c){
//    switch (c) {
//        case 'U':{
//            y++;
//            break;
//        }
//        case 'D':{
//            y--;
//            break;
//        }
//        case 'L':{
//            x--;
//            break;
//        }
//        case 'R':{
//            x++;
//            break;
//        }
//    }
//}
//
//bool canChase(char order[],long long deltaD[]){
//    iniDistance = distance();
//    long long nowDistance;
//    long long lastDistance = iniDistance;
//    for (int i = 0; i < N; ++i) {
//        run(xr,yr,order[i]);
//        nowDistance = distance();
//        deltaD[i] = nowDistance-lastDistance;
//        lastDistance = nowDistance;
//    }
//    if (distance()-iniDistance < N){
//        deltaDistanceInT = distance() -iniDistance;
//        return true;
//    }else{
//        return false;
//    }
//}
//
//
//
//long long calDeltaD(long long Now_time,long long deltaD[]){
//    long long numT = Now_time / N;
//    long long numOutT = Now_time % N;
//    long long delta = 0;
//    for (int i = 0; i < numOutT; ++i) {
//        delta+=deltaD[i];
//    }
//    return numT*deltaDistanceInT+delta;
//}
//
//bool canChaseJudge(long long k,long long deltaD[]){
//    if (iniDistance + calDeltaD(k,deltaD) > k){
//        return false;
//    }else{
//        return true;
//    }
//}
//
//
//
//
//
//
//
//
//int main(){
//    cin>>xr>>yr>>xc>>yc;
//    cin>>N;
//    long long temp_xr = xr;
//    long long temp_yr = yr;
//    char order[N];
//    long long deltaD[N];
//    for (long long i = 0; i < N; ++i) {
//        cin>>order[i];
//    }
//
//    if (!canChase(order,deltaD)){
//        cout<<-1;
//    }else{
//        xr = temp_xr;
//        yr = temp_yr;
//        long long l = 0;
//        long long r = 1e16 ;
//        while (l<r){
//            long long mid = (l+r)/2;
//            if (canChaseJudge(mid,deltaD)){
//                r = mid;
//            }else{
//                l = mid+1;
//            }
//        }
//        cout<<r;
//
//    }
//
//
//
//
//
//    return 0;
//}
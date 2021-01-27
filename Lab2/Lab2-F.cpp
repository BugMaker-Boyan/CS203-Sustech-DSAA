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
//long long total_time;
//bool flag = false;
//
//long long distance(){
//    return abs(xr-xc)+abs(yr-yc);
//}
//
//void run(long long &x,long long &y,char c){
//    total_time++;
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
//bool canChase(){
//    if (distance()<=total_time){
//        flag = true;
//        return true;
//    }else{
//        return false;
//    }
//}
//
//int main(){
//    cin>>xr>>yr>>xc>>yc;
//    cin>>N;
//    char order[N];
//    for (long long i = 0; i < N; ++i) {
//        cin>>order[i];
//    }
//
//
//    long long k = 0;
//
//    while (!canChase()){
//        run(xr,yr,order[k]);
//        k++;
//        if (k == N){
//            k = 0;
//        }
//        if (total_time >= 1e14){
//            break;
//        }
//    }
//
//    if (flag){
//        cout<<total_time;
//    }else{
//        cout<<-1;
//    }
//
//
//    return 0;
//}
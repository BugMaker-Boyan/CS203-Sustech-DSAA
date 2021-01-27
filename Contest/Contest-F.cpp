////
//// Created by Boyan on 2021/1/2.
////
//
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//unordered_map<string,char> Map;
//
//
//void init(){
//    Map.insert({".-",'A'});
//    Map.insert({"-...",'B'});
//    Map.insert({"-.-.",'C'});
//    Map.insert({"-..",'D'});
//    Map.insert({".",'E'});
//    Map.insert({"..-.",'F'});
//    Map.insert({"--.",'G'});
//    Map.insert({"....",'H'});
//    Map.insert({"..",'I'});
//    Map.insert({".---",'J'});
//    Map.insert({"-.-",'K'});
//    Map.insert({".-..",'L'});
//    Map.insert({"--",'M'});
//    Map.insert({"-.",'N'});
//    Map.insert({"---",'O'});
//    Map.insert({".--.",'P'});
//    Map.insert({"--.-",'Q'});
//    Map.insert({".-.",'R'});
//    Map.insert({"...",'S'});
//    Map.insert({"-",'T'});
//    Map.insert({"..-",'U'});
//    Map.insert({"...-",'V'});
//    Map.insert({".--",'W'});
//    Map.insert({"-..-",'X'});
//    Map.insert({"-.--",'Y'});
//    Map.insert({"--..",'Z'});
//    Map.insert({"-----",'0'});
//    Map.insert({".----",'1'});
//    Map.insert({"..---",'2'});
//    Map.insert({"...--",'3'});
//    Map.insert({"....-",'4'});
//    Map.insert({".....",'5'});
//    Map.insert({"-....",'6'});
//    Map.insert({"--...",'7'});
//    Map.insert({"---..",'8'});
//    Map.insert({"----.",'9'});
//}
//int n;
//void solve(){
//    cin>>n;
//    vector<string> v;
//    for (int i = 0; i < n; ++i) {
//        string s;
//        cin>>s;
//        v.push_back(s);
//    }
//    vector<char> ans;
//    int half1 = (n+1)/2;
//    int i = 0,j=0;
//    vector<string> v1;
//    vector<string> v2;
//    for (int i = 0; i < half1; ++i) {
//        v1.push_back(v[i]);
//    }
//    for (int i = half1; i < n ; ++i) {
//        v2.push_back(v[i]);
//    }
//    for (int k = 0; k < n; ++k) {
//        if (k%2==0){
//            ans.push_back(Map[v1[i++]]);
//        }else{
//            ans.push_back(Map[v2[j++]]);
//        }
//    }
//    for (int k = 0; k < n; ++k) {
//        cout<<ans[k];
//    }
//    cout<<endl;
//}
//
//
//int main(){
//    fio
//    init();
//    int t;
//    cin>>t;
//    while (t--){
//        solve();
//    }
//}
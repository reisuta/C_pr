#include <iostream>
using namespace std;

int main(){

// string todo;
cout << "Todo appへようこそ\n" << "追加したいタスクを入力してください\n";
while(1){

string S[7] = {};
// for(int i=0; i<8; i++){
cin >> S[0];

string ans;
bool yes = true;  


cout << "タスク一覧\n";
cout <<"・" << S[0];
cout <<"さらにタスクを追加しますか？Y/N\n";
cin >> ans;
if(ans=="Y"){
cout << "追加したいタスクを入力してください\n";
cin >> S[1];
cout << "タスク一覧\n";
cout <<"・" << S[0] << "\n・" << S[1];
 }
}
}
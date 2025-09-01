  #include<iostream>
 using namespace std;
 void printnum(int num){
    if(num==10){
  // cout<<"10";
  // return; 
    }
    cout<<num<<" ";
    printnum(num+1);
 }
 int main(){
  printnum(1);
  return 0;
 }
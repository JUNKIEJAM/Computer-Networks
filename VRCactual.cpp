#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout <<"Enter the number of strings: ";
 cin >>n;

 string* str = new string[n];
 cout <<"Enter " <<n <<" strings: ";
 
 for(int i=0;i<n;i++){
 cin >>str[i];
 }

 for(int i=0;i<n;i++){
 
 int ones = 0;
 
 for(int j=0;j<str[i].size();j++){
 
 if(str[i][j] == '1'){
 ones++;
 }

 }

 if(ones & 1){
 str[i] = "1" + str[i];
 }

 else{
 str[i] = "0" + str[i];
 }
 }

 cout <<"The string which is sent is: " <<endl;

 for(int i=0;i<n;i++){
 cout <<str[i] <<" ";
 }
 cout <<endl;

 delete []str;
 return 0;

}
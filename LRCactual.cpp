#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout <<"Enter the number of strings: ";
 cin >>n;

 string* str = new string[n];

 cout <<"Enter " <<n <<" strings: ";

 for(int i=0;i<n;i++){
 cin>>str[i];
 }

 string sent = "";

 for(int i=0;i<str[0].size();i++){

 int ones = 0;

 for(int j=0;j<n;j++){

 if(str[j][i] == '1'){
 ones++;
}

 }

 if(ones & 1){
 sent+="1";
 }

 else{
 sent+= "0";
 }
 }

 cout << "The string which will be send is : " <<endl <<sent<<" ";

for (int i = 0; i < n; i++)
 {
     cout << str[i] << " ";
 }
 cout <<endl;
 delete []str;
 
 return 0;
}
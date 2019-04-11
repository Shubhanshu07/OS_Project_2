#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char* argv[]){

ifstream fin;
string n;
int n1;
int count=0;
fin.open(argv[1],ios::in);
while(fin.eof()==0){
count++;
getline(fin,n,',');
n1=stoi(n);
// cout<<n1<<endl;

}
cout<<count;
fin.close();

}
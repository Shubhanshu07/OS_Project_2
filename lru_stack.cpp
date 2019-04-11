#include<bits/stdc++.h>
using namespace std;
// No. of frames
int main(int argc, char* argv[]){
      ifstream fin;
      fin.open(argv[1],ios::in);
      int N=stoi(argv[2]);
      list<int> frames ;
      list<int>::iterator pos;    
      int n=0, fault=0;
      string page;
      int value;            
      while(!fin.eof()){
            getline(fin,page,',');
            value=stoi(page);
            if(n==0){
                  frames.push_back(value);
                  n++;
                  fault++;
            }
      

            else{
                  pos=find(frames.begin(),frames.end(),value);
                  if(pos != frames.end()){
                        frames.remove(value);
                        frames.push_back(value);
                        
                  }     
                  else{ 
                        fault++;
                        if(n<N){
                              frames.push_back(value);
                              n++;

                              }
                        else{

                              frames.pop_front();
                              frames.push_back(value);
                        }
                  }
            }
      } 
      fin.close();     
      cout<<fault<<endl;


}
      


      
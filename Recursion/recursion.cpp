#include<iostream>
using namespace std;
// reachhome

void reachHome(int src,int dist){
    cout<< "step " << src << "dist "<< dist << endl;
    if(src == dist){
        cout<<"Ghar pahuch gya!";
        return;
    }

    src++;

    reachHome(src,dist);
    cout<< "step "<< src << " dist " << dist<<endl;
    if(src == 6){
        cout<< "Bapish dukan par aa gya!";
    }
}

// count all way to reach destination

void reachDest(int src,int dest,int &count){

    if(src > dest){
        return;
    }
    if(src == dest){
        count++;
        return;
    }

    src++;
    reachDest(src,dest,count);
    src+=2;
    reachDest(src,dest,count);
}

int main(){
  
  int count=0;
  reachDest(5,10,count);

  cout<< "way to reach dest: "<<count;
}
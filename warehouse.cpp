#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
float cirarea=0,recarea=0,cubearea=0;
float d,h,w,dep;
vector<int> id;
vector<float> diam,h1,w1,h2,w2,depv;


while(1){
    cout<<"1.Add a circle."<< endl;
    cout<<"2.Add a rectangle."<< endl;
    cout<<"3.Add a cube."<< endl;
    cout<<"4.list item ."<< endl;
    cout<<"5.Get statistics ."<< endl;
    cout<<"6.Exit"<< endl;

cin>>t;
if(t==1){
    cout<<"whats the diameter?"<<endl;
    cin>>d;
    diam.push_back(d);
    cirarea+=3.14*d*d/4;

    id.push_back(1);
}
   
else if(t==2){
    cout<<"whats the height?"<<endl;
    cin >> h;
    h1.push_back(h);
    
    cout<<"whats the weight?"<<endl;
    cin >> w;
    w1.push_back(w);
    recarea+=h*w;

    id.push_back(2);  
}
 else if(t==3){
    cout<<"whats the height?"<<endl;
    cin >> h;
    h2.push_back(h);
   
    cout<<"whats the weight?"<<endl;
    cin >> w;
    w2.push_back(w);
    
    cout<<"whats the depth?"<<endl;
    cin >> dep;
    depv.push_back(dep);
    id.push_back(3);  
}
 else if(t==4){
    int c=0,r=0,cu=0;
    cout<<"Id\t"<<"type\t\t"<<"diemnsion\n";
    cout<<"==================================\n";
    for(int i=0;i<id.size();i++){
        if(id[i]==1){
           cout<<i+1<<"\tcircle\t\t"<<diam[c]<<"\n";
            c++;
        }
          if(id[i]==2){
            cout<<i+1<<"\trectangle\t"<<h1[r]<<"X"<<w1[r]<<"\n";
            r++;
         }
        if(id[i]==3){
            cout<<i+1<<"\tcube\t\t"<<h2[cu]<<"X"<<w2[cu]<<"X"<<depv[cu]<<"\n";
            cu++;
        }
    }
}
else if(t==5){
        cout<<"Total shapes: "<<id.size()<<"\n";
        cout<<"Total number of rectangles: "<<h1.size()<<"\n";
        cout<<"Total number of circles: "<<diam.size()<<"\n";
        cout<<"Total number of cubes: "<<h2.size()<<"\n";
        cout<<"Total area: "<<cirarea+cubearea+recarea<<"\n";
        cout<<"The total area occupied by rectangles: "<<recarea<<"m²\n";
        cout<<"The total area occupied by circles: "<<cirarea<<"m²\n";
        cout<<"The total area occupied by cubes: "<<cubearea<<"m³\n";
    }
else if(t==6){
        break;
    }

    else{
        cout<<"Invalid choice\n";
    }
}
}

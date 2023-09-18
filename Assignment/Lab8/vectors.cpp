#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int sum=0;
    float avg,total;
    vector<int>v;
    do{
        cout<<"----------options----------"<<endl;
        cout<<"1.Enter number into vector : "<<endl;
        cout<<"2.Print Elements : "<<endl;
        cout<<"3.Sum of the vector elements : "<<endl;
        cout<<"4.Average of the vector elements:"<<endl;
        cout<<"-1.Exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
                int num;
                cout<<"Enter number to insert into vector "<<endl;
                cin>>num;
                v.push_back(num);
                break;
            case 2:
                // for (auto it=v.begin();it!=v.end();it++)
                // {
                //     /* code */
                //     cout<<*(it)<<" ";
                // }
                for(auto it:v){
                    cout<<it<<" ";
                }
                cout<<"\n";
                break;
            case 3:
                for (auto it:v)
                {
                    sum+=it;
                }
                cout<<"Sum of elements is : "<<sum<<endl;
                sum=0;
                break;
            case 4:
                total=v.capacity(); 
                for (auto it:v)
                {
                    sum+=it;
                }
                avg=sum/total;
                cout<<"Average of elemetns is : "<<avg<<endl;
                sum=0;
                break;
            default:
                break;
        }
    }while(n!=-1);
}
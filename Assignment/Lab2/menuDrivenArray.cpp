#include<iostream>
using namespace std;
int main(){

    int choice;
    int *arr = nullptr;
    do{
        cout<<"Enter choice :"<<endl;
        cout<<"1.Insert into array :"<<endl;
        cout<<"2.Display array :"<<endl;
        cout<<"3.Find even nums in array :"<<endl;
        cout<<"4.Find odd nums in array :"<<endl;
        cout<<"5.Exit "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        int size;
             cout<<"Enter size of array :"<<endl;
             cin>>size;
             arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                /* code */
                cin>>arr[i];
            }
            break;
        case 2:
            
            if(size==0){
                cout<<"Sorry there is no array to display !" <<endl;
            }else{
                for (int i = 0; i < size; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                
            }

            break;
        case 3:
           
                if(size==0){
                    cout<<"Sorry there is no array to disp̥lay !" <<endl;
                }else{
                    for (int i = 0; i < size; i++)
                    {
                        /* code */
                        if(arr[i]%2==0){
                            cout<<arr[i]<<" ";
                        }
                    }
                    cout<<endl;
                    
                }

            break;
        case 4:
            
            if(size==0){
                cout<<"Sorry there is no array to display !" <<endl;
            }else{
                for (int i = 0; i < size; i++)
                {
                    /* code */
                    if(arr[i]%2!=0){
                        cout<<arr[i]<<" ";
                    }
                }
                cout<<endl;
                
            }
            break;
        case 5:
            break;
        default:
            cout<<"Please select from the available options !!"<<endl;
            break;
        }

    }while(choice!=5);
    
}
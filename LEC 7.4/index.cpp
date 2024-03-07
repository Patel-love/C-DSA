
// #include <iostream>
// using namespace std;

// int main()
// {
//     // int array[3][3]{{3,9,4},{5,8,3},{7,2,4}};
//     // cout<<array[1][1];
    
//     // int array[3][3];
//     // array[0][0]=3 ;
//     // array[1][0]=4 ;
//     // array[2][0]=5 ;
//     // cout<<array[0][0];
    
    
//     //   int a[3][3];
//     // cin>>a[0][0];
//     // cin>>a[1][0] ;
//     // cin>>a[2][0] ;
    
//     // cout<<a[0][0];
//     //  cout<<a[1][0];
//     //   cout<<a[2][0];
    
//     int a[3][3]{{3,9,4},{5,8,3},{7,2,4}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
    
    
    

//     return 0;
// }




#include <iostream>
using namespace std;

int main()
{  
    int r;
    int c;
    
    cout<<"Enter Row Size :- ";
    cin>>r;
    
    cout<<"Enter Column Size :- ";
    cin>>c;
    
    int a[r][c],i,j;
    
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter a[" <<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    
    cout<<endl<<endl<<"================"<<endl<<endl;
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<< " ";
           
        }
        cout<<endl;
    }
   

    return 0;
}


    #include<iostream>
    #include<cmath>
    #include<iomanip>
    using namespace std ;


    void InsertArrayInMiddle(float Arr2[], int m);

    main(){

    int n , m;
    float Arr1[2] , Arr2[100] ;
    
    cout<<"Enter the number of elements for the first array (must be 2): " ;
    cin>> n ;
       
    
    cout<<"Enter "<<n<<  " elements for the first array, one per line:"<<endl;
          
            for(int x = 0; x < n ; x++ ){
                cin>> Arr1[x] ;
                }

         cout<<"Enter the number of elements for the second array: " ;
    cin>> m ;
       
    
    cout<<"Enter "<<m<<  " elements for the second array, one per line:"<<endl;

            for(int y = 0; y < m ; y++ ){
                cin>> Arr2[y] ;
            }
                cout<<"Resulting array: "<< "[" <<Arr1[0]<< ", " ;
                InsertArrayInMiddle(Arr2, m);
                cout<< Arr1[1] ;
                cout<< "]";
        

    }

        void InsertArrayInMiddle(float Arr2[], int m){
                    for(int z = 0; z < m; z++){
                        cout<< Arr2[z] ;
                        cout<<", ";
                    }
        }   
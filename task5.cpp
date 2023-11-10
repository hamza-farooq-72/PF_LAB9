

    #include<iostream>
    using namespace std;


    void printReverseArray(int n);


    main(){

    int n ;
    
    cout<<"Enter the number of elements: " ;
    cin>> n ;
        if(n == 0){

            cout<< "Invalid input. Number of elements must be greater than 0.";
        }
        else 
        {
    
    cout<<"Enter "<<n<< " numbers, one per line:"<<endl;
        }
        printReverseArray(n) ;
    }

        void printReverseArray(int n){
             int num[n - 1];

    for(int x = 0; x< n ; x++){
    cin>> num[x];
    
            for(int y = x - 1 ; y >= 0 ; y--){

         if(num[y] == num[x]){

            cout<< "Already Entered: " << num[y] <<endl;
            break ;
         }
         }
    }

           cout << "Unique numbers entered:";
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j >= 0; j--)
            {
            if (num[i] == num[j] && i!=j)
            {
                break;
            }
            if(j==0){

                cout<<" "<<num[i];
            }
        }

     }
    }

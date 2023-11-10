
    #include<iostream>
    using namespace std;


    void printReverseArray(int num[], int n);


    main(){

    int n ;
    
    cout<<"Enter the number of elements: " ;
    cin>> n ;

    if(n <= 0){
    cout<<"Invalid input. Number of elements must be greater than 0." ;
    }
    
    int num[100];
    cout<<"Enter "<<n<< " numbers, one per line:"<<endl;

    for(int x = 0; x< n ; x++){
    cin>> num[x];
    
    }
    cout<<"Numbers in reverse order: " ;
    printReverseArray(num, n);  
        

    }



    void printReverseArray(int num[], int n){

        for(int y = n - 1; y >= 0 ; y--){
      cout<< num[y]<< " "  ;
    }
    }
    



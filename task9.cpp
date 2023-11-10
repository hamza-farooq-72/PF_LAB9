


    #include<iostream>
    #include<cmath>
    #include<iomanip>
    using namespace std ;


    bool CanPayWithChange(float sum,float total);

    main(){

    float total;
    float Arr[100] ,  sum ; 
       
    
    cout<<"Enter quarters: ";
    cin>> Arr[0];
    cout<<"Enter dimes: ";
    cin>> Arr[1];
    cout<<"Enter nickels: ";
    cin>> Arr[2];
    cout<<"Enter pennies: ";
    cin>> Arr[3];
    cout<<"Enter the total amount due: $";
    cin>> total;

        sum = (Arr[0]*0.25) + (Arr[1]*0.10) + (Arr[2]*0.05) + (Arr[3]*0.01) ;
        int res = CanPayWithChange(sum , total) ;


                    if(res == 1){
                        cout<<"Can you pay the amount? Yes" ;
                    }
                    if(res == 0){
                        cout<<"Can you pay the amount? No" ;
                    }
    }

        bool CanPayWithChange(float sum,float total){
            

            if(sum >= total){

                return true ;
            }
            else if(total > sum){
                return false ;
            }
        }   
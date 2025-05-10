#include <iostream>

using namespace std;

int prime(int a){

    if(a<=1){

return 0;
    }

   for(int i=2;i<=a;i++){

    if(a%i==0){

        return 0;
    }
    else{

        return 1;
    }
   }
}

int main(){


     int num;

     cout << "Enter the number: ";
     cin >> num;

     if(prime(num)== 0){

        cout << "It's not a prime"<< endl;
     } else{
     cout << "It's a prime"<< endl;

     }

return 0;
}

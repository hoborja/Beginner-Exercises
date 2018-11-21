#include <iostream>
#include <math.h>

  using namespace std;


int main(){

    int pEaten[10] = {0,0,0,0,0,0,0,0,0,0}; //person 1 through 10
    int pOrdered[10];
    int most = 0;
    int least = 3000000000;
    int indexMost = 0;
    int indexLeast = 0;

    for(int p = 0; p < 10; ++p){
        cout << "How many pancakes did person: " << p << " eat today?" <<endl;
        cin >> pEaten[p];
        if(pEaten[p] > most){
            most = pEaten[p];
            indexMost = p;
        }
        if(pEaten[p] < least){
            least = pEaten[p];
            indexLeast = p;
        }
    }
    for(int p = 0; p < 10; ++p){
        for (int x = 0; x < 9; ++x){
            if(pEaten[x]>pEaten[x+1]){
                int temp = pEaten[x+1];
                pEaten[x+1] = pEaten[x];
                pEaten[x] = temp;
            }
        }
    }
    cout << "Person: " << indexMost << " ate the most pancakes They ate: " << pEaten[indexMost] << " pancakes" << endl;
    cout << "Person: " << indexLeast << " ate the least pancakes They ate: " << pEaten[indexLeast] << " pancakes" << endl;

    for(int p = 0; p < 10; ++p){

        cout << "Person " << p << " ate: " << pEaten[p] << "pancakes." << endl;

    }



  system("PAUSE");
  return 0;
}
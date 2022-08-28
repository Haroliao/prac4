#include "Truckloads.h"
using namespace std;
Truckloads::Truckloads(){

}
int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
        }
    if(numCrates%2==0){
        return numTrucks(numCrates/2, loadSize)+numTrucks(numCrates/2, loadSize);
    }
    if (numCrates%2!=0){
        return numTrucks(numCrates/2, loadSize)+numTrucks((numCrates/2)+1, loadSize);
    }
}
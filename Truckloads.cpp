#include "Truckloads.h"
using namespace std;
Truckloads::Truckloads(){

}
int Truckloads::numTrucks(int numCrates, int loadSize){
    if ((numCrates<0||(numCrates>10000))){
        return -1;
    }
    if ((loadSize<0)||(loadSize>10000)){
        return -1;
    }
    if(numCrates==0){
        return 0;
    }
    if(numCrates <= loadSize){
        return 1;
        }
    if(numCrates%2==0){
        return numTrucks(numCrates/2, loadSize)+numTrucks(numCrates/2, loadSize);
    }
    else{
        return numTrucks(numCrates/2, loadSize)+numTrucks((numCrates/2)+1, loadSize);
    }
}
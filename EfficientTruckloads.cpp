#include "EfficientTruckloads.h"
using namespace std;
#include<iostream>
EfficientTruckloads::EfficientTruckloads(){

}
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    int numCratesArray[10000];
    if(numCrates<=loadSize){
        return 1;
    }
    if(numCratesArray[numCrates] != 0){
        return numCratesArray[numCrates];
    }
    if(numCrates%2 == 0){
        numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
        return numCratesArray[numCrates];
    }
    if (numCrates%2!=0){
        numCratesArray[numCrates]=numTrucks(numCrates/2, loadSize)+ numTrucks((numCrates/2)+1, loadSize);
        return numCratesArray[numCrates];
    }
}
#include<iostream>
using namespace std;
void printLightStatus(unsigned char* light){
    unsigned char mask = 0x1;
    for(int i =0;i<8;i++){
        if(*light & mask){
            cout<<"room"<<i+1<<" is ON"<<endl;
        }
        else{
            cout<<"room"<<i+1<<" is OFF"<<endl;
        }
        mask = mask<<1;
    }

}
void checkLightStatus(unsigned char *light,int lightNo){
    unsigned char mask = 0x1;
    mask = (mask << (lightNo-1));
    if(*light & mask){
        cout<<"room"<<lightNo<<" is ON"<<endl;
    }
    else{
        cout<<"room"<<lightNo<<" is OFF"<<endl;
    }

}
void setLight(unsigned char* light,int lightNo){
    unsigned char mask = 0x1;
    mask = (mask<<(lightNo -1));
    *light = *light | mask;
    checkLightStatus(light,lightNo);
}
int main(){
    unsigned char light= 0xB1;
    int  lightNo;
    cin>>lightNo;
    checkLightStatus(&light,lightNo);
    setLight(&light,lightNo);
    checkLightStatus(&light,lightNo);
    }

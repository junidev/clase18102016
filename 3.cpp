#include<iostream>

using namespace std;

int main(){
    int a,b,c,media,menor;
    cin>>a;
    cin>>b;
    cin>>c;
    menor=a;
    media=(a+b+c)/3;

    //menor
    if(b>a){
        a=b;
    }
    else{
        menor=b;
    }

    if(c>a){
        a=c;
    }
    else{
        if(c<menor){
            menor=c;
        }
    }
    cout<<"Maximo: "<<a<<endl;
    cout<<"Media: "<<media<<endl;
    cout <<"Minimo: "<<menor<<endl;
    return 0;
}

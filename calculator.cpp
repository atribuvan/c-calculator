#include<iostream>
#include<cmath>
using namespace std;
double fac(double z){
    double fact=1;
    for(double i=1;i<=z;i++){
        fact=fact*i;
      
    }
     
     return fact;
}
double sin(double a){
    double v=0;
    for(int i=1;i<100;i=i+2){
        v=v+pow(a,i)/fac(i);
        a=-a;
    }
    return v;
}
double cos(double z){
    double u=1;
    for(int h=2;h<=100;h=h+2){
        u=-u;
        u=u+pow(z,h)/fac(h);
    }
    return u;
}
int main(){
    string a;
    cout<<"Enter any operator (+ or - or * or / or exponent  or factorial or sin or cosec or cos or sec or tan or cot):"<<endl;
    cin>>a;
    if(a== "+"|| a=="-"|| a=="*"){
        double b;
        double c;
        cout<<"Enter the first number:"<<endl;
        cin>>b;
        cout<<"Enter the second number:"<<endl;
        cin>>c;
        if(a=="+"){
            cout<<"Sum is "<<" "<<b+c<<endl;
        }else
        if(a=="-"){
            cout<<"difference is "<<" "<<b-c<<endl;
        }else
        if(a=="*"){
            cout<<"product is "<<" "<<b*c<<endl;
        }
       

    }
    if(a=="/"){
        double d;
        double e;
        cout<<"Enter the first number:"<<endl;
        cin>>d;
        cout<<"Enter the second number(note the number you enter is not equal to zero):"<<endl;
        cin>>e;
        cout<<"Divison value is "<<" "<<d/e<<endl;
    }
    if(a=="exponent"|| a=="factorial"){
        if(a=="exponent"){
            double f;
            double g;
            cout<<"Enter the first number or the base number:"<<endl;
            cin>>f;
            cout<<"Enter the second integer or the exponent:"<<endl;
            cin>>g;
            double pow=1;
            for(double i=1;i<=g;i++){    
                pow=f*pow;   
            }
            cout<<"The required answer you required is "<<" "<<pow<<endl;
        }else
        
        if(a=="factorial"){
            double h;
            cout<<"Enter the integer:"<<endl;
            cin>>h;
            if(h>0){
               double I= fac(h);
               cout<<"Factorial of "<<" "<<h<<"is "<<" "<<I<<endl;
              
            
           
        }else if(h==0){
            cout<<"The factorial is 1"<<endl;
        }else 
        {cout<<"Invalid error"<<endl;
        }

    }
    }
    if(a=="sin"){
    
        double A;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>A;
        int B=int(A);
        if(B%180==0){
            cout<<"Required value is 0"<<endl;
        }else 
        if(B%360==90){
            cout<<"Require value is 1"<<endl;
        }else
        if(B%360==270){
            cout<<"Require value is -1"<<endl;
        }
        else{
        A=A*11/630;
        cout<<"Required value is "<<" "<<sin(A)<<endl;
    }
    }
    if(a=="cosec"){
         double C;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>C;
        int D=int(C);
        if(D%180==0){
            cout<<"Required value is not defined"<<endl;
        }else 
        if(D%360==90){
            cout<<"Require value is 1"<<endl;
        }else
        if(D%360==270){
            cout<<"Require value is -1"<<endl;
        }

        else{
        C=C*11/630;
        cout<<"Required value is "<<" "<<1/sin(C)<<endl;
    }

    }

    if(a=="cos"){
         double E;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>E;
        int F=int(E);
        if(F%180==90){
            cout<<"Required value is 0"<<endl;
        }else if(F%360==0){
            cout<<"Required value is 1"<<endl;
        }else if(F%360==180){
            cout<<"Required value is -1"<<endl;
        }
        else{
        E=E*11/630;
        cout<<"Required value is "<<" "<<cos(E)<<endl;
    }

    }

    if(a=="sec"){
         double G;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>G;
        int H=int(G);
        if(H%180==90){
            cout<<"Required value is not defined"<<endl;
        }else if(H%360==0){
            cout<<"Required value is 1"<<endl;
        }else if(H%360==180 ){
            cout<<"Required value is -1"<<endl;
        }
        else{
        G=G*11/630;
        cout<<"Required value is "<<" "<<1/cos(G)<<endl;
    }

    }
    

    if(a=="tan"){
         double I;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>I;
        int J=int(I);
        if( J%180==90){
            cout<<"Required value is not defined"<<endl;
        }else if(J%180==0){
            cout<<"Required value is 0"<<endl;
        }
        else{
        I=I*11/630;
        cout<<"Required value is "<<" "<<sin(I)/cos(I)<<endl;
    }

    }

    if(a=="cot"){
         double K;
        cout<<"Enter the angle in degrees:"<<endl;
        cin>>K;
        int L=int(K);
        if( L%180==90){
            cout<<"Required value is 0"<<endl;
        }else if(L%180==0){
            cout<<"Required value is not defined"<<endl;
        }
        else{
        K=K*11/630;
        cout<<"Required value is "<<" "<<cos(K)/sin(K)<<endl;
    }

    }


    return 0;
}

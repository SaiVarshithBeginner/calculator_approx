#include<iostream>
using namespace std;
extern const float pi = 3.141592653;


float pow(float a, float b){
    float d = a;
    for (int k=1; k<b; k++){
        d = d*a;
    }
    return d;
}
int fact(int n){
    int i=1;
    for (int k=1; k<=n; k++){
        i = i*k;
    }
    return i;
}


float get(float n){
    int i = n/360;
    n = n - i*360;
    return n;
}
float sin(float n){
    float s = 0;
    float j = get(n);
    if (j>=0 && j<=90){
        float rad = j*(3.142)/180;
        for (int k=1; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        }
    }
    if (j>90 && j<=180){
        float l = 180 - j;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        }
    }
    if (j>180 && j<=270){
        float l = j - 180;
        float t= 0;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        s = (-1)*t;
        }
    }
    if (j>270 && j<360){
        float l = 360 - j;
        float t= 0;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        s = (-1)*t;
        }
    }
    return s;
}
float cos(float n){
    float s=1;
    float j = get(n);
    if (j>=0 && j<=90){
        float rad = j*(3.142)/180;
        for (int k=2; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
    }
    if (j>90 && j<=180){
        float l = 180 - j;
        float t = 1;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
        s = (-1)*t;
    }
    if (j>180 && j<=270){
        float l = j - 180;
        float t = 1;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
        s = (-1)*t;
    }
    if (j>270 && j<360){
        float l = 360 - j;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
    }
    return s;
}


int main(){

 int ch;
 double a,b;
 double ANSWER;
   cout<<"welcome to my calculator"<<endl;
   cout<<"________________________"<<endl;
   cout<<"|1 for +                 |"<<endl;
   cout<<"|2 for -                 |"<<endl;
   cout<<"|3 for *                 |"<<endl;
   cout<<"|4 for /                 |"<<endl;
   cout<<"|5 for sinx              |"<<endl;
   cout<<"|6 for cosx              |"<<endl;
   cout<<"|7 for tanx              |"<<endl;
   cout<<"|8 for cosecx            |"<<endl;
   cout<<"|9 for secx              |"<<endl;
   cout<<"|10 for cotx             |"<<endl;
   cout<<"|11 for power            |"<<endl;
   cout<<"|12 for factorial        |"<<endl;
   cout<<"|________________________|"<<endl;
    
    cout<<"enter choice"<<endl;
    cin>>ch;


   switch (ch)
   {
   case 1:
    cout<<"enters 2 numbers"<<endl;
    cin>>a>>b;

    cout<<a+b<<endl;
    break;

    case 2:
    cout<<"enters 2 numbers"<<endl;
    cin>>a>>b;
    cout<<a-b<<endl;
    break;

    case 3:
    cout<<"enters 2 numbers"<<endl;
    cin>>a>>b;
    cout<<a*b<<endl;
    break;

    case 4:
    cout<<"enters 2 numbers"<<endl;
    cin>>a>>b;
    cout<<a/b<<endl;
    break;

     case 5:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<sin(a)<<endl;
    break;

     case 6:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<cos(a)<<endl;
    break;

     case 7:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<sin(a)/cos(a)<<endl;
    break;

    case 8:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<1/sin(a)<<endl;
    break;

   case 9:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<1/cos(a)<<endl;
    break; 

    case 10:
 cout<<"Enter the angle in degrees: ";
                    cin>>a;
                    cout<<cos(a)/sin(a)<<endl;
    break;

  case 11:
  cout<<"enters numbers in order of base and power"<<endl;
    cin>>a>>b;
    cout<<pow(a,b)<<endl;
    break;  

case 12:
cout<<"enters  number"<<endl;
    cin>>a;
    cout<<fact(a)<<endl;
    break;
   
   default:
   cout<<"invalid";
    break;
   }

  return 0; 
}
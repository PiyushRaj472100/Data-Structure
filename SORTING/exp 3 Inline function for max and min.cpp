    #include<iostream>
    using namespace std;
    
    inline float MAX(float a, float b, float c) { return (a > b && a > c ? a : (b > c ? b : c)); }
    inline float MIN(float a, float b, float c) { return (a < b && a < c ? a : (b < c ? b : c)); }

         int main()
           {
               float x,y,z, large, small; 
               cout<<"Name: Deepanshu Jindal \nUID: 21BCS1933\n ";
               cout<<"Enter 3 numbers: "; 
               cin>>x>>y>>z;
               large = MAX(x,y,z); 
               small = MIN(x,y,x);
               cout<<"\nMax between"<<x<<", "<<y<<", "<<"and "<<z<<" is :"<<large;
              cout<<"\nMin between"<<x<<", "<<y<<", "<<"and "<<z<<" is :"<<small; 

              return 0;
          }


   

 #include<iostream>
 using namespace std;
 int main(){

 int sidea,sideb,sidec;
 cin>>sidea>>sideb>>sidec;

 if(sidea==sideb && sideb==sidec)
    cout<<"equilateral"<<endl;
 else if(sidea==sideb || sideb==sidec)
    cout<<"isosceles"<<endl;
 else{
    cout<<"scalen"<<endl;
 }

return 0;

 }

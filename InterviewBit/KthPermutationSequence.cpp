string str = "";

for(int i=1;i<=A;i++)
{
    str = str + to_string(i);//count numerical values
}

int count =1;
while(count!=B)
{
    next_permutation(str.begin(),str.end());
    count++;
}
return str;

//other sol
vector<int> v;
for(int i=1;i<=A;i++)v.push_back(i);

do{
    B--;
}while(next_permutation(v.begin(),v.end()) && B!=1);

string s="";
for(int i: v){
    s = s +  to_string(i);
}
return s;

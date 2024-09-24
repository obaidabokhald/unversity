 #include <iostream>
using namespace std;
union ahmed
{
 double weight ;
 double height ;
};
int main()
{
        ahmed ob1;
      ob1.weight=10.3;
      ob1.weight=20.3;
        cout<<ob1.weight<<endl;
        cout<<ob1.height<<endl;
          
}
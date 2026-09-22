#include<iostream>
using namespace std;
int main()
{
int student[5];
cout<<"Enter Marks Of 5 Students :\n";
for (int i = 0; i <5; i++)
  {
     cin>>student[i];
  }
   // sorting
for(int i = 0; i < 4; i++)
  {
for (int j = 0; j < 4 - i; j++)
{
 if (student[j] > student[j + 1])
 {
 int temp = student[j];

 student[j]  = student[j + 1];
 student[j +1] = temp;
 }
}
}
cout<<"\nStudents Marks after sorting:\n";
for (int i = 0; i < 5; i++)
{
cout << student[i] <<" ";
}
return 0;
}
//code ends here

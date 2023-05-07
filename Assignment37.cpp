//1. Declare a vector with Initialization and print the elements.
/*#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }

     cout<<endl;

    return 0;
}*/

//2. Declare a vector without initialization, insert some elements and print
/*#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> v;
     for(int i=0;i<5;i++)
     {
        v.push_back(i*100);
     }
     for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";

      cout<<endl;

    return 0;
}*/

//3. Write a function to print the element of a vector and take input from the user
/*#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> v;
     for(int i=0;i<5;i++)
     {
        int a;
        cin>>a;
        v.push_back(a);
     }
     for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";

      cout<<endl;

    return 0;
}*/
//4. Write a program to Copy one vector’s elements to another vector.
/*#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
    vector<int>v1={100,200,300,400,500};
    cout<<"before copy the elements :"<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }

     cout<<endl;
    for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<"  ";
     }
   cout<<endl;
   cout<<"after copy the elements :"<<endl;
   v.swap(v1);

for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }

     cout<<endl;
    for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<"  ";
     }
   cout<<endl;
    return 0;
}*/
//5. Find largest and smallest elements in a vector
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }
  cout<<endl;

    cout<<"min element "<<*min_element(v.begin(), v.end())<<endl;
    cout<<"max element "<<*max_element(v.begin(), v.end());

     cout<<endl;

    return 0;
}*/
//6. Write a program to reverse vector elements
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }
     cout<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
     }

  return 0;
}*/
//7. Write a program to find sum of vector elements
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
     int sum=0;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"  ";
       sum=sum+v[i];

     }
     cout<<endl;
     cout<<"sum is : "<<sum;
   
  return 0;
}*/
//8. Write a program to find common elements between two vectors.

//9. Write a program to Push and print elements in a float vector
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <float> v;
     for(int i=0;i<5;i++)
     {
        v.push_back(i*100);
     }
     for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";

      cout<<endl;

    return 0;
}*/


//10. Write a program to check whether an element exists in a vector or not

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
     int a,sum=0;
     cout<<"insert value:"<<endl;
     cin>>a;
     for(int i=0;i<v.size();i++)
     {
        if(v[i]==a)
        {
        cout<<a<<"  exist";
        return 0;
        }
      sum++;
   
      

     }
cout<<endl;
     if(sum==5)
      cout<<a<<"  not exist";
   
  return 0;
}

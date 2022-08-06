#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number a ." << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "A is +ve" << endl;
    }
    else if (a < 0)
    {
        cout << "A is -ve." << endl;
    }
    else if (a == 0)
    {
        cout << "A is zero." << endl;
    }
    else
    {
        cout << "wrong input." << endl;
    }
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"lowerCase "<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Upper case "<<endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"numeric "<<endl;
    }
    int i=1;
    while(i<=a){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    int j=1,sum=0;
    while(j<=a){
        if(j%2==0){
            sum+=j;
            j++;
        }
        else if(j%2!=0){
            j++;
        }
    }
    cout<<sum<<endl;
    int k=2,p=0;
    while(k<a){
        if(a%k==0){
          p=1;
          break;
        }
        else{
            k++;
        }
    }
    if(p==0){
        cout<<"prime";
    }
    else if(p==1){
        cout<<"not prime";
    }
    int l=1;
    while(l<=a){
        int j=1;
        while(j<=a){
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        l++;
    }
    int m=1;
    while(m<=a){
        int j=1;
        while(j<=a){
            cout<<m<<" ";
            j++;
        }
        cout<<endl;
        m++;
    }
      int r=1;
    while(r<=a){
        int j=a;
        while(j>=r){
            cout<<a-r+1<<" ";
            j--;
        }
        cout<<endl;
        r++;
    }

}
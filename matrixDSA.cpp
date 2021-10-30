/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void add(int arr[],int brr[],int n);
void sub(int arr[],int brr[],int n);
void display(int arr[],int n);
void initialise(int arr[],int n);
void initialise(int arr[],int n)
{
    int i;
    for(i=0;i<n*2;i++)
    {
            arr[i]=0;
    }
}
void create(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ether coefficient of degree "<<i<<" : ";
        cin>>arr[i];
    }
}
void add(int arr[],int brr[],int n)
{
    int i;
    int *psum=new int[n];
    for(i=0;i<n;i++)
    {
        psum[i]=arr[i]+brr[i];
    }
    cout<<"Addition: \n";
    display (psum,n);
}
void sub(int arr[],int brr[],int n)
{
    int i;
    int *psub=new int[n];
    for(i=0;i<n;i++)
    {
        psub[i]=arr[i]-brr[i];
    }
    cout<<"Substraction: \n";
    display (psub,n);
}
void mult(int arr[],int brr[], int n)
{
    int i,j,p;
    int *m=new int[n+n];
    initialise(m,n+n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            p=i+j;
            m[p]+=arr[i]*brr[j];
        }
    }
    cout<<"Multiplication: \n";
    display(m,n+n-1);
}
void display(int arr[],int n)
{
    cout<<arr[0]<<"x^"<<0;
    for(int i=1;i<n;i++)
    {
        cout<<'+'<<arr[i]<<"x^"<<i;
    }
    cout<<"\n";
}
int main()
{
    
    int n;
    cout<<"Enter the maximum power of polynomial: ";
    cin>>n;
    n++;
    int *poly=new int[n];
    int *poly2=new int[n];
    create(poly,n);
    cout<<"\n";
    create(poly2,n);
    cout<<"First polynomial: \n";
    display(poly,n);
    cout<<"Second polynomial: \n";
    display(poly2,n);
    add(poly,poly2,n);
    sub(poly,poly2,n);
    mult(poly,poly2,n);
    
    return 0;
}

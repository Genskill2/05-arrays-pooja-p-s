/* Enter your solutions in this file */
#include <stdio.h>
#include<stdio.h>

int max(int a[],int n) 
{
    int m = a[0];

    for(int i=1;i<n;i++) 
    {  if(a[i]>m) 
            m = a[i]; 
    } 

    return m; 
} 
 
 
int min(int a[],int n) 
{
    int m= a[0]; 

    for(int i=1;i<n;i++) 
    {  if(a[i]<m) 
            m = a[i]; 
    } 

    return m;
} 
 
float average(int a[],int n) 
{
    float sum= 0.0;

    for(int i=0;i<n;i++) 
        sum += a[i]; 

    return sum/n; 
} 
 
int mode(int a[],int n) 
{
    int maxcount=0,currcount,mod=0; 

    for(int i=0;i<10;i++) 
    {
        currcount=0;
        for(int j=0;j<n;j++) 
        {
            if(i==a[j]) 
                currcount++; 
        }
        if(currcount>maxcount) 
        {
            maxcount = currcount; 
            mod = i; 
        }
    } 
    
    return mod; 
} 
 
int factors(int n,int fact[])
{
    int k=0;
    //even
    while(n%2==0)
    {
        fact[k++] = 2;
        n = n/2;
    }
    //odd
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            fact[k++] = i;
            n = n/i;
        }
    }
    //prime number>2
    if(n>2)
        fact[k++] = n;
    return k;
}

#include<iostream>
using namespace std;
class sort
{
int arr[100];
int s;
public:
void getdata()
{cout<<"enter size";
cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>arr[i];
	}
}
void display()
{
	cout<<"The elements of the array are:\n";
	for(int i=0;i<s;i++)
		cout<<arr[i]<<" ";
}
 void isort()
 {	int i,j,Temp;
	for(i=1;i<s;i++)
	{
		Temp=arr[i];
		j=i-1;
		while((Temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=Temp;
	}
}
void ssort()
{
	int i,j,Temp,Small;
	for(i=0;i<s-1;i++)
	{
		Small=i;
		for(j=i+1;j<s;j++) 	
		if(arr[j]<arr[Small])
			Small=j;
		if(Small!=i)
		{
			Temp=arr[i]; 	
			arr[i]=arr[Small];
			arr[Small]=Temp;
		}
	}
}
void bsort()
{
	int i,j,Temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<(s-1-i);j++)
			if(arr[j]>arr[j+1])
			{
				Temp=arr[j]; 	
				arr[j]=arr[j+1];
				arr[j+1]=Temp;
			}
	}
}
void qsort(int arr[],int s,int u)
{
 int p,temp,i,j;
   if(s < u)
   {
   p=arr[s];
   i=s;
   int j=u;
    while(i<j)
   {
      while(arr[i] <= p && i<j )
	 i++;
      while(arr[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;}
  }
  temp=arr[j];
  arr[j]=arr[s];
  arr[s]=temp;
 // cout <<"\n";
  for(i=0;i<10;i++)
  //cout <<arr[i]<<" ";
  qsort(arr,s,j - 1);
  qsort(arr,j+1,u); 
 }
}
};
int main()
{sort a,c;
	int arr[100],n,choice,b,i;
	do
	{
		cout<<"\n\nMENU";
		
		cout<<"\n1. Sort the array using insertion sort method";
		cout<<"\n2. Sort the array using selection sort method";
		cout<<"\n3. Sort the array using bubble sort method";
		cout<<"\n4. Sort the array using quick sort method";
		cout<<"\n5. Exit";
		cout<<"\n\nEnter your choice 1-5 :";
		cin>>choice;
			switch(choice)
		{
			case 1:	a.getdata();
			        a.isort();
			        a.display();
				break;
			case 2:	a.getdata();
			        a.ssort();
			        a.display();
				break;
			case 3:a.getdata();
			        a.bsort();
			        a.display();
				break;
			case 4:a.getdata();
			        a.qsort(arr,n,b);
			        a.display();
				break;
			case 5:	break;
			default:cout<<"\ninvalid choice";
		}
	}while(choice!=5);
	}





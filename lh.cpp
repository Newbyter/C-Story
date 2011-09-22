#include <stdio.h>
#include <iostream>
using namespace std;


	// write your code here
	// any code ...

class Myarray
{
protected:
    int *alist;
    int length;
public:
    Myarray(int len)
    {alist=new int[len];length=len;}
    ~Myarray()
    {delete(alist);cout<<"x........"<<endl;}
    void input()
    {
        int i;
        for(i=0;i<length;i++)
        {cout<<"输入数组的"<<i+1<<"个元素："<<'\n';
        cin>>alist[i];}
    }
    int getlen(){return length;}
    void display()
    {for(int i=0;i<length;i++)
     cout<<alist[i]<<' ';
     cout<<endl;
    }
};
class averarray:virtual public Myarray
{
public:
    averarray(int n):Myarray(n)
    {}
    float getaver()
    {float aver;
     int sum=0,i;
     for(i=0;i<length;i++)
     sum+=alist[i];
     aver=(float)sum/length;
     return aver;
    }
};
class rearray:virtual public Myarray
{
public:
    rearray(int n):Myarray(n)
    {}
    void turn()
    {
        int i,t,j=length-1;
        for(i=0;i<length/2;i++,j--)
        {t=alist[i];alist[i]=alist[j];alist[j]=t;}
    }
};
class nawarray:public rearray,public averarray
{
public:
    nawarray(int n):Myarray(n),rearray(n),averarray(n)
    {}
};


void LH()
{
   
    nawarray A(5);
    A.input();
    A.display();
    cout<<"输出平均成绩："<<endl;
    cout<<A.getaver()<<endl;
    cout<<"倒置:"<<endl;
    A.turn();
    A.display();
	printf("LH\n");
}
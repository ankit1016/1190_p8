#include<iostream>
using namespace std;

class student
{

	
		public:
		class result
		{
			 int maths,oops,en;
			 int result;
			 public:
			 	void fun2()
			 	{
				 
			cout<<"enter the marks of students"<<endl<<endl; 
cout<<"marks of math "<<endl;
			cin>>maths;
cout<<"marks of oops "<<endl;
cin>>oops; 
cout<<"marks of en "<<endl;

cin>>en;
			result=maths+oops+en;
			cout<<endl<<endl;
			cout<<"result is  "<<result<<endl<<endl;
			
		    }
		};
		
		
		result obj3;
		
		public:
	void getdata()
	{
		cout<<"marks card \n"<<endl;
		obj3.fun2();
	}
		
	
		public:
			
				class address
				{
					  public:
				char h[20];
			
			 public:
			 void fun3()
			 {
			 	cout<<"enter your address= ";
			 	cin>>h;
			 	cout<<endl<<endl;
			 	cout<<"student address is  "<<h;
		    }
				
			};
			
			address obj5;
			void fun4()
			{
				obj5.fun3();
				
			}
				
		
	
		
};

int main()
{
	student obj9;
	student obj1;
	
	obj9.getdata();
	obj1.fun4();
}
#include<iostream>
using namespace std;
class Item(){
	public:                   // variables 
		string name ;
		float price;
		string barcode;
		bool isOnsale;
		string stuff[3];
		string size[4]={"S","M","L","XL"};
		int stockSize[4];
		string slected_size;
		string selected_stuff;
		Item(){            // default constructor        default value assign
			name="";
			price=0;
			barcode="";
			isOnsale=false;
			for (int i=0;i<4;i++)
			{
				stockSize[i]=0;
			}
		}
		Item(string n,float p,string b, bool sale , string string s1, string s2, string s3)
		{
			name =n;
			price=p;
			barcode=b;
			isOnsale=sale;
			stuff[0]=s1;
			stuff[2]=s2;
			stuff[3]=s3;
			for(int i=1;i<4;i++)
			{
				stockSize[i]=0;
			}
		}
		float finalAmount()
		{
			if(isOnsale)
			{
				return price*0.7;	
			}
			else
			 {
			 	return price;	
			}
		}
		void showI(int index){
			cout<< index <<"." <<name << "| barcode :"<<barcode <<"| price : "<<price;
			if (isOnsale)
			{
				cout<<" 30% discount ....";
			}
			cout<<"\n stuff :";
			for(int i=0 ; i<3;i++){
				cout<<stuff[i];
				if(i<2)
				{
					cout<<",";
				}
			}
			cout<<"    || stock :";
			fot( int i=0 ; i<4 ; i++){
				cout<<size[i]<<" : "<< stockSize[i];
				if(i<3)
				{
					cout<<",";
				}
				cout<<endl;
			}
		}
};
class brand{
	public :
		string name;
		string type;
		Item item[5];
		int itemCount;
		float Tsale;
		brand (){
			itemCount=0;
			Tsale=0;
		}
		void showItems(){
			cout<<" items in brand : "<<name<<endl;
			for(int i = 0; i<itemCount ;i++){
				item[i]
			}
		}
};
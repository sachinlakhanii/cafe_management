 #include<iostream>
using namespace std;
int main()
{
	int ch,qt,code,tot1,tot2;
	char yn;
	string ord;
	cout<<"-----------------------------Welcome to the Cafeteria System------------------------------";
	cout<<endl<<endl<<"Please select the the Option.";
	cout<<endl<<endl<<"Type yes to view Item Menu & Place an Order."<<endl;
	cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
	cout<<endl<<endl<<"Enter Yes: ";
	cin>>ord;
	if((ord=="YES")||(ord=="Yes")||(ord=="yes"))
	{
		cout<<endl<<endl<<"-------------------------------------Item Inventory---------------------------------------";	
		cout<<endl<<endl<<"S.no   Item            Price         Item Code"<<endl<<endl;
		cout<<"1.     Tea             Rs. 60/-       1"<<endl;
		cout<<"2.     Coffee          Rs. 100/-      2"<<endl;
		cout<<"3.     Briyaani        Rs. 250/-      3"<<endl;
		cout<<"4.     Potato Chips    Rs. 100/-      4"<<endl;
		cout<<"5.     Sandwiches      Rs. 190/-      5"<<endl;	
		cout<<endl<<"------------------------------------------------------------------------------------------";
		cout<<endl<<"Press 2 to Place Order"<<endl<<"Press ANY KEY to Exit"<<endl<<endl<<"Enter your Option: ";
		cin>>ch;
		if(ch==2)
		{
			cout<<endl<<endl<<"--------------------------------------Order Place-----------------------------------------";
			cout<<endl<<endl<<"Note: A customer can only order 2 Item. (Quantity is on his Choice.)";
			cout<<endl<<endl<<"Enter code for Item: ";
			cin>>code;
			if(code==1)
			{
				cout<<endl<<"Enter your Quantity: ";
				cin>>qt;
				cout<<endl<<endl<<"You currently have ordered "<<qt<<" tea.";
				tot1=qt*60;
				cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
				cout<<endl<<endl<<"Do you want to Order something else? If Yes, Press (Y): ";
				cin>>yn;
				if((yn=='Y')||(yn=='y'))
				{
					cout<<endl<<endl<<"Enter code for Item: ";
					cin>>code;
					switch(code)
					{
						case 2: 
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Coffee.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 3:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Briyaani.";
							tot2=(qt*250)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 4:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Potato Chips.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 5:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Sandwiches.";
							tot2=(qt*190)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						default:
							cout<<endl<<endl<<"Invalid Item Code."<<endl<<"Your total Bill is"<<tot1;
					}
				}
				else
					cout<<endl<<"Your Bill is "<<tot1;
			}
			else if(code==2)
			{
				cout<<endl<<"Enter your Quantity: ";
				cin>>qt;
				cout<<endl<<endl<<"You currently have ordered "<<qt<<" Coffee.";
				tot1=qt*100;
				cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
				cout<<endl<<endl<<"Do you want to Order something else? If Yes, Press (Y): ";
				cin>>yn;
				if((yn=='Y')||(yn=='y'))
				{
					cout<<endl<<endl<<"Enter code for Item: ";
					cin>>code;
					switch(code)
					{
						case 1: 
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" tea.";
							tot2=(qt*60)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 3:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Briyaani.";
							tot2=(qt*250)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 4:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Potato Chips.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 5:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Sandwiches.";
							tot2=(qt*190)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						default:
							cout<<endl<<endl<<"Invalid Item Code."<<endl<<"Your total Bill is"<<tot1;
					}
				}
				else
					cout<<endl<<"Your Bill is "<<tot1;
			}
			else if(code==3)
			{
				cout<<endl<<"Enter your Quantity: ";
				cin>>qt;
				cout<<endl<<endl<<"You currently have ordered "<<qt<<" Briyaani.";
				tot1=qt*250;
				cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
				cout<<endl<<endl<<"Do you want to Order something else? If Yes, Press (Y): ";
				cin>>yn;
				if((yn=='Y')||(yn=='y'))
				{
					cout<<endl<<endl<<"Enter code for Item: ";
					cin>>code;
					switch(code)
					{
						case 1: 
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" tea.";
							tot2=(qt*60)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 2:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Coffee.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 4:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Potato Chips.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 5:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Sandwiches.";
							tot2=(qt*190)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						default:
							cout<<endl<<endl<<"Invalid Item Code."<<endl<<"Your total Bill is"<<tot1;
					}
				}
				else
					cout<<endl<<"Your Bill is "<<tot1;
			}
			else if(code==4)
			{
				cout<<endl<<"Enter your Quantity: ";
				cin>>qt;
				cout<<endl<<endl<<"You currently have ordered "<<qt<<" Potato Chips.";
				tot1=qt*100;
				cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
				cout<<endl<<endl<<"Do you want to Order something else? If Yes, Press (Y): ";
				cin>>yn;
				if((yn=='Y')||(yn=='y'))
				{
					cout<<endl<<endl<<"Enter code for Item: ";
					cin>>code;
					switch(code)
					{
						case 1: 
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" tea.";
							tot2=(qt*60)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 2:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Coffee.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 3:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Briyaani.";
							tot2=(qt*250)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 5:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Sandwiches.";
							tot2=(qt*190)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						default:
							cout<<endl<<endl<<"Invalid Item Code."<<endl<<"Your total Bill is"<<tot1;
					}
				}
				else
					cout<<endl<<"Your Bill is "<<tot1;
			}
			else if(code==5)
			{							
				cout<<endl<<"Enter your Quantity: ";
				cin>>qt;
				cout<<endl<<endl<<"You currently have ordered "<<qt<<" Sandwiches.";
				tot1=qt*190;
				cout<<endl<<endl<<"------------------------------------------------------------------------------------------";
				cout<<endl<<endl<<"Do you want to Order something else? If Yes, Press (Y): ";
				cin>>yn;
				if((yn=='Y')||(yn=='y'))
				{
					cout<<endl<<endl<<"Enter code for Item: ";
					cin>>code;
					switch(code)
					{
						case 1: 
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Tea.";
							tot2=(qt*60)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 2:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Coffee.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 3:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Briyaani.";
							tot2=(qt*250)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						case 4:
							cout<<endl<<"Enter your Quantity: ";
							cin>>qt;
							cout<<endl<<"You currently have ordered "<<qt<<" Potato Chips.";
							tot2=(qt*100)+tot1;
							cout<<endl<<"Your Bill is "<<tot2;
							break;
						default:
							cout<<endl<<endl<<"Invalid Item Code."<<endl<<"Your total Bill is"<<tot1;
					}
				}
				else
					cout<<endl<<"Your Bill is "<<tot1;
			}	
		}
		else
			cout<<endl<<endl<<"------------------------------------------------------------------------------------------"<<endl<<endl<<"Thank You for visiting our Cafeteria.";			
	}
	else
		cout<<endl<<"Invalid Entry. Try again.";
	return 0;
}


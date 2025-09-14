#include <iostream>
#include <string>
using namespace std;
class Book
{
	private:
		int bookID;
        string title;
        string author;
        bool isAvailable;
		static int bookId_generator;
		
	public:
		static int generate_bookId()
		{
 		return(++bookId_generator);
	    }
	    
		void addBook(string title, string author)
		{
			this->title=title;
			this->author=author;
			isAvailable=true;
			this->bookID=generate_bookId();
			cout<<"Congrates Book Added Successfully !! Your Book ID is "<<bookID;
		}
		
		void checkOut() 
		{
		    if (isAvailable)
		{
		   	isAvailable=false;
		   	cout<<"\nBook ID"<<bookID<<" has been checked out Successfully ";
		    		
		}
		else
		{
			cout<<"\nBook ID "<<bookID<<" Is already Checked out ";
		}	
	}
	    void returnBook()
	    {
	    	 if (!isAvailable)
			{
		   	isAvailable=true;
		   	cout<<"\nBook ID "<<bookID<<"Book Return Successfully ";
			}
		else
			{
			cout<<"\nBook ID "<<bookID<<"WAS NOT Checked out ";
			}	
		}
		 void display()
		 {
		 	cout<<"\nBookID"<<bookID;
		 	cout<<"\nTitle"<<title;
		 	cout<<"\nAuthor"<<author;
		 	cout<<"\nStatus"<<(isAvailable ? "Available": "checked out")<<endl;
		 }
		 
		 int getBookID()
		  {
		 	return bookID;
		  }
		 	 
};
int Book :: bookId_generator = 500;

int main()
{
	Book library[100];
	int current_book = 0;
	int ch, id, flag;
	string title, author;
	
	do{
		cout<<"\n========= LIBRARY MANAGEMENT SYSTEM =======\n";
		cout<<"1.Add a Book\n";
        cout<<"2.Check Out a Book\n";
        cout<<"3.Return a Book\n";
        cout<<"4.Display Book Details";
        cout<<"0. Exit";
        
        cout<<"\nEnter the choice";
        cin>>ch;
        
        switch(ch){
        	case 1:
        		cin.ignore();
        		cout<<"\nEnter the title: ";
        		getline(cin,title);
        		cout<<"\nEnter the author: ";
        		getline(cin,author);
        		
        		 library[current_book].addBook(title, author);
        		 current_book++;
        		 break;
        		 
        	case 2:
        		cout<<"\nEnter the Book id to check out";
        		cin>>id;
        		flag=0;
        		for(int i=0; i<current_book;i++)
				{
        			if(id==library[i].getBookID()){
        				library[i].checkOut();
        				flag=1;
        				break;
					}
				}
		       	if(flag==0)
			cout<<"\bBOOK ID"<<id<<"NOT FOUND";
			break;
			
        	case 3:
        		cout<<"\n Enter the book id to return: ";
        		cin>>id;
        		flag=0;
        		for(int i=0; i<current_book;i++)
        		{
        			if(id==library[i].getBookID())
					{
        				library[i].returnBook();
        				flag=1;
        				break;
					}
				}
        		if(flag==0)
			cout<<"\bBOOK ID"<<id<<"NOT FOUND";
			break;
			
			case 4:
				cout<<"\n Enter the book id to Display: ";
        		cin>>id;
        		flag=0;
        		for(int i=0; i<current_book;i++)
        		{
        			if(id==library[i].getBookID())
					{
        				library[i].display();
        				flag=1;
        				break;
					}
				}
        		if(flag==0)
			cout<<"\bBOOK ID"<<id<<"NOT FOUND";
			break;
				
			case 0:
			cout<<"\n Thank You ! visiting LIBRARY MANAGEMENT SYSTEM. ";
			break;	
				default:
				cout<<"\nInvalid option selected.Please try again ";
			    break;
		}
    
	}while(ch!=0);
	
}
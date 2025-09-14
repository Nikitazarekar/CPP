 #include<iostream>
 using namespace std;
 main()

 {
 	int choice,bill_no=100;
	float tea=10.00,coffee=50.00,water=20.00,bm=100.00,total_amount;
		int qty_t,qty_c,qty_b,qty_w;
	qty_t=qty_c=qty_b=qty_w=0;
	
	int qty;
    do {

        cout << "\n------ Welcome to Tea Stall ------\n";
        cout << "1. Tea-------10INR\n";
        cout << "2. Coffee----40INR\n";
        cout << "3. Bun Maska-100INR\n";
        cout << "4. Water-----20INR\n";
        cout << "5. Generate bill:\n";
        cout << "0. Exit\n";
        cout << "----------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Tea\n";
                cout<<"\nEnter number of items:";
                cin>>qty_t;
                break;
            case 2:
                cout << "You selected Coffee\n";
                cout<<"\nEnter number of items:";
                cin>>qty_c;
                break;
            case 3:
                cout << "You selected Bun Maska\n";
                cout<<"\nEnter number of items:";
                cin>>qty_b;
                break;
            case 4:
                cout << "You selected Water \n";
                cout<<"\nEnter number of items:";
                cin>>qty_w;
                break;
            case 0:
                cout << "Thank you! Visit again. \n";
                break;
            case 5:
            	cout<<"\n-----------------------------------";
            	cout<<"\n      Bill  no: "<<bill_no;
            	cout<<"\n-----------------------------------";
            	bill_no++;
            	if(qty_t>0)//ordered
            		cout<<"\nTea           "<<tea<<" X "<<qty_t<<"     "<<qty_t*tea;
            	if(qty_c>0)//ordered
            		cout<<"\nCoffe         "<<coffee<<" X "<<qty_c<<"     "<<qty_c*coffee;
            	if(qty_b>0)//ordered
            		cout<<"\nBun_Maska     "<<bm<<" X "<<qty_b<<"     "<<qty_b*bm;
                if(qty_w>0)//ordered
            		cout<<"\nWater         "<<water<<" X "<<qty_w<<"     "<<qty_w*water;
            	cout<<"\n-----------------------------------";
            	total_amount=qty_t*tea+qty_c*coffee+qty_b*bm+qty_w*water;
				cout<<"\nTotal amount       :           "<<total_amount;
				cout<<"\nSGST               :           "<<total_amount*.025;
				cout<<"\nCGST               :           "<<total_amount*.025;
				cout<<"\nTotal amount to pay:           "<<total_amount+total_amount*.025+total_amount*.025;	
				qty_t=qty_c=qty_b=qty_w=0;//reset
				break;
            		
            default:
            	cout << "Wrong choice given please check input \n";
                break;
            	
            }
            
    
            
    } while (choice != 0);//not of exit choice
 
 }

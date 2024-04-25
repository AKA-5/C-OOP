// M.Kaleem Akhtar	CS-C	23i-0524	Bushra Fatima	Muhammad Abdur Rafey
#include<iostream>
#include"ALU.h"
#include"ControlUnit.h"
#include"CPU.h"
#include"MainMemory.h"
#include"Port.h"
#include"MotherBoard.h"
#include"PhysicalMemory.h"
#include"Computer.h"
#include"GraphicsCard.h"
#include"Battery.h"
#include"StorageDevice.h"
#include"Case.h"
#include"PowerSupply.h"
#include"NetworkCard.h"
#include"ComputerAssembly.h"

using namespace std;
int main()
{
	// I will be creating a menu to provide user ease to select for its customized product
	int choice;
	cout << "\t\t\tCustomized PC/Laptop"<<endl;
	cout << "Select from the following Options (Enter the serial number only):  " << endl;
	cout << "1. PC\n2. MAC Laptop\nEnter:";
	cin >> choice;
	// validation
	while (choice != 1 && choice != 2)
	{
		cout << "\nError (select from the options)" << endl;
		cout << "Select from the following Options:  " << endl;
		cout << "1. PC\n2.Laptop\nEnter:";
		cin >> choice;
	}
	// after choice some things will be decided according to standard that will be explained later
	// i will add prcies of products fom here using getter setter
	if (choice == 1)
	{
		// create object of PC
		Computer PC;
		int choice;
		cout << "You want to Make PC. " << endl<<endl;
		cout << "Let's move on to the specifications..." << endl;


		// select system architecture
		cout << "\nWhat kind of System Architecture do you need?" << endl;
		cout << "1. 64-bit\t2. 86-bit\nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. 64-bit\t2. 86-bit\nEnter:";
			cin >> choice;
		}

		// assign choice to that sizeofregister
		if (choice == 1)
		{
			ALU temp_alu(8,6,4,64);
			PC.get_cpu().set_alu(temp_alu);
		}
		else
		{
			ALU temp_alu(8, 6, 4, 86);
			PC.get_cpu().set_alu(temp_alu);
		}

		PC.get_mb().set_ports();	// this will automatically add the standard ports
		ControlUnit cu(3.5);
		PC.get_cpu().set_cu(cu);   // standard speed of clock in control unit is 3.5 GHz

		 

		// select main memory type
		cout << "\nTypes of Main Memory available:" << endl;
		cout << "1. Silicon\n2. Semiconductor \nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. Silicon\n2. Semiconductor \nEnter:";  
			cin >> choice;
		}
		// assign choice to that type of main memory
			if (choice == 1)
			{
				PC.get_mb().get_mm()->set_technologyType("Silicon");
			}
			else
			{
				PC.get_mb().get_mm()->set_technologyType("Semiconductor");
			}
		// select the size of RAM
		cout << "\nFollowing sizes are available of RAM:" << endl;
		cout << "1. 8 Gb\t2. 16 Gb \nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. 8 Gb\t2. 16 Gb \nEnter:";
			cin >> choice;
		}

		// assign choice to MainMemory RAM capacity
		if (choice == 1)
		{
			PC.get_mb().get_mm()->set_capacity(8);
		}
		else
		{
			PC.get_mb().get_mm()->set_capacity(16);
		}


		// select physical memory
		cout << "\nFollowing sizes are available types of Physical Memory:" << endl;
		cout << "1. DDR5  \t2. LPDDR5 \nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. DDR5  \t2. LPDDR5 \nEnter:";
			cin >> choice;
		}
		
		// assign choice to Physical Memory
		if (choice == 1)
		{
			PC.get_pm().set_capacity(16);
		}
		else
		{
			PC.get_pm().set_capacity(16);
		}


		// select storage devices (HDD/SSD)
		cout << "\nStorage Devices:" << endl;
		cout << "1. HDD\t2. SSD (reccommended) \nEnter:";
		cin >> choice;
		//validation
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. HDD\t2. SSD (reccommended) \nEnter:";
			cin >> choice;
		}
			if(choice==2)
			{
				PC.get_SD().set_type("SSD");
				int size=0;
				cout << "\nAlso specify its size: " << endl;
				cout << "1. 256 Gb\t2. 512 Gb \nEnter:";
				cin >> size;
				while (size != 1 && size != 2)
				{
					cout << "\nError (select from the options)" << endl;
					cout << "1. 256 Gb\t2. 512 Gb \nEnter:";
					cin >> size;
				}
				//assigning size to storage device and their prices
					if (size == 1)
					{
						PC.get_SD().set_capacity(256);
						PC.get_SD().set_price(5000);
					}
					else
					{
						PC.get_SD().set_capacity(512);
						PC.get_SD().set_price(11000);
					}

			}
			else
			{
				PC.get_SD().set_type("HDD");
				int size = 0;
				cout << "\nAlso specify its size: " << endl;
				cout << "1. 500 Gb\t2. 1 Tb\t3. 2 Tb \nEnter:";
				cin >> size;
				while (size != 1 && size != 2 && size!=3)
				{
					cout << "\nError (select from the options)" << endl;
					cout << "1. 500 Gb\t2. 1 Tb\t3. 2 Tb \nEnter:";
					cin >> size;
				}
				//assigning size to storage device and their prices
				if (size == 1)
				{
					PC.get_SD().set_capacity(500);
					PC.get_SD().set_price(4000);
				}
				else if(size==2)
				{
					PC.get_SD().set_capacity(1);
					PC.get_SD().set_price(8000);
				}
				else if (size == 3)
				{
					PC.get_SD().set_capacity(2);
					PC.get_SD().set_price(25000);
				}

			}

			// Select the Graphics Card
			cout << "\nGraphics Card Available:" << endl;
			cout << "1. Nvidia GPU (Gaming)\t2. AMD GPU (Office Working) \nEnter:";
			cin >> choice;
			//validation
			while (choice != 1 && choice != 2)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "1. Nvidia GPU (Gaming)\t2. AMD GPU (Office Working) \nEnter:";
				cin >> choice;
			}
			// assign price and gpu to Graphics Class
			if (choice == 1)
			{
				
				PC.get_gc()->set_brand("Nvidia GPU");
				PC.get_gc()->set_memorySize(4);        // 4 Gb memory size will be standard
				PC.get_gc()->set_price(180000);		// it is expensive and its for gaming purpose
				//cout << "Checking: nvidia gpu price: "; PC.get_cpu().get_gc().get_price();
			}
			else
			{
				PC.get_gc()->set_brand("AMD GPU");
				PC.get_gc()->set_memorySize(4);        // 4 Gb memory size will be standard
				PC.get_gc()->set_price(50000);			// it is cheaper and good for office work
			}


			// Network Card
			cout << "\nThe motherboard has built-in Ethernet port.\nDo you want to add additonal network card for Wifi?" << endl;
			cout << "\n1. Yes\t2. No\nOptional: ";
			cin >> choice;
			while (choice != 1 && choice != 2)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "\n1. Yes\t2. No\nOptional: ";
				cin >> choice;
			}
			// adding wifi card to PC
			if (choice == 1)
			{
				PC.get_NC().set_type("Wifi");
				PC.get_NC().set_speed(867);        //816 Mbps speed
				PC.get_NC().set_price(5500);
				cout << "\n Wifi Network Card Added!\n" << endl;
			}
			else
			{
				PC.get_NC().set_type("");
				PC.get_NC().set_speed(0);       
				PC.get_NC().set_price(0);

			}


			// select power supply you want to attach
			cout << "\nOnly Available Power Supply is PSU." << endl;
			cout << "Select the wattage and efficieny of Power Supply." << endl;
			cout << "1. 550 Watt , 80 Plus Bronze\n2. 850 Watt , 80 Plus Gold\nEnter: ";
			cin >> choice;
			while (choice != 1 && choice != 2)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "1. 550 Watt , 80 Plus Bronze\n2. 850 Watt , 80 Plus Gold\nEnter: ";
				cin >> choice;
			}
			if (choice == 1)
			{
				PC.get_PS().set_wattage(550);
				PC.get_PS().set_efficencyRating("80 Plus Bronze");
				PC.get_PS().set_price(14000);

			}
			else
			{
				PC.get_PS().set_wattage(850);
				PC.get_PS().set_efficencyRating("80 Plus Gold");
				PC.get_PS().set_price(40000);
			}

			// As we are making a PC it has no Battery So,
			PC.get_battery().set_capacity(0);

			// At last we need case for our PC
			cout << "\n Select the type of PC Case you want... " << endl;
			cout << "1. ATX Case\t2. Micro ATX Case\n Enter: ";
			cin >> choice;
			while (choice != 1 && choice != 2)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "1. ATX Case\t2. Micro ATX Case\n Enter: ";
				cin >> choice;
			}
			if (choice == 1)
			{
				
				PC.get_PC_case().set_fromFactor("ATX");
				PC.get_PC_case().set_color("Black");

			}
			else
			{
				PC.get_PC_case().set_fromFactor("Micro ATX");
				PC.get_PC_case().set_color("Carbon Black");
			}

			// Now ouput the final Specifications and Output
			cout << "\n----------------------------------------------------------------";
			cout << "\n\n\t\t\t\t FINAL ORDER\n\n\n";
			cout << "----------------------------------------------------------------\n";
			cout << "\nREQUIREMENTS: " << endl;
			cout << "\nSystem Architecture: " << PC.get_cpu().get_alu().get_sizeOfRegisters()<<"-bit System" << endl;
			cout << "\nCase: "<<PC.get_PC_case().get_fromFactor() <<" Case" << endl;

			if(PC.get_NC().get_type()=="")
				cout << "\nNetwork Card: NILL" << endl;
			else
			cout << "\nNetwork Card: "<<PC.get_NC().get_type() << endl;

			cout << "\nPower Supply: "<<PC.get_PS().get_efficiencyRating()<<"  "<<PC.get_PS().get_wattage()<<" Watts" << endl;
			cout << "\nStorage Device: "<<PC.get_SD().get_type()<<" Storage: " << PC.get_SD().get_capacity() << " (Gb/Tb)" << endl;
			cout << "\nGraphic Card: " <<PC.get_gc()->get_brand()<<endl;
			cout << "\nPhysical Memory: " << PC.get_pm().get_capacity() << "-Gb RAM" << endl;
			cout << "\nMain Memory: " <<PC.get_mb().get_mm()->get_technologyType()<<" Storage: "<< PC.get_mb().get_mm()->get_capacity() <<"-Gb" << endl;

			// I will be adding case price in this  (1400)
			// Totalling Bill
			PC.set_totalPrice(1400 + PC.get_NC().get_price() + PC.get_PS().get_price() + PC.get_SD().get_price() + PC.get_gc()->get_price());

			cout << "\n-----------------------------\n";
			cout << "       Total Bill: "<<PC.get_totalPrice()<<" Rs." << endl;
			cout << "\n-----------------------------\n";

			
	}



	else
	{
		// create a mac laptop object
		Computer mac;
		int choice;
		cout << "You want to Make a MAC Laptop. " << endl << endl;
		cout << "Let's move on to the specifications..." << endl;


		// select system architecture
		cout << "\nWhat kind of System Architecture do you need?" << endl;
		cout << "1. 64-bit\t2. 32-bit\nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. 64-bit\t2. 32-bit\nEnter:";
			cin >> choice;
		}

		// assign choice to that sizeofregister
		if (choice == 1)
		{
			ALU temp_alu(8, 6, 4, 64);
			mac.get_cpu().set_alu(temp_alu);
		}
		else
		{
			ALU temp_alu(8, 6, 4, 32);
			mac.get_cpu().set_alu(temp_alu);
		}

		mac.get_mb().set_ports();	// this will automatically add the standard ports
		ControlUnit cu(3.5);
		mac.get_cpu().set_cu(cu);   // standard speed of clock in control unit is 3.5 GHz

		// select main memory type
		cout << "\nTypes of Main Memory available:" << endl;
		cout << "1. Silicon\n2. Semiconductor \nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. Silicon\n2. Semiconductor \nEnter:";
			cin >> choice;
		}
		// assign choice to that type of mainmemory
		if (choice == 1)
		{
			mac.get_mb().get_mm()->set_technologyType("Silicon");
		}
		else
		{
			mac.get_mb().get_mm()->set_technologyType("Semiconductor");
		}
		// select the size of RAM
		cout << "\nFollowing sizes are available of RAM:" << endl;
		cout << "1. 8 Gb\t2. 16 Gb \t3. 32 Gb\nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2 && choice!=3)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. 8 Gb\t2. 16 Gb \t3. 32 Gb\nEnter:";
			cin >> choice;
		}

		// assign choice to MainMemory RAM capacity
		if (choice == 1)
		{
			mac.get_mb().get_mm()->set_capacity(8);
		}
		else if(choice==2)
		{
			mac.get_mb().get_mm()->set_capacity(16);
		}
		else if (choice == 3)
		{
			mac.get_mb().get_mm()->set_capacity(32);

		}


		// select physical memory
		cout << "\nFollowing sizes are available types of Physical Memory:" << endl;
		cout << "1. LPDDR4X  \t2. LPDDR5 \nEnter:";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. LPDDR4X  \t2. LPDDR5 \nEnter:";
			cin >> choice;
		}

		// assign choice to Physical Memory
		if (choice == 1)
		{
			mac.get_pm().set_capacity(16);
		}
		else
		{
			mac.get_pm().set_capacity(16);
		}

		// select storage devices (HDD/SSD)
		cout << "\nStorage Devices:" << endl;
		cout << "1. HDD\t2. SSD (reccommended) \nEnter:";
		cin >> choice;
		//validation
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. HDD\t2. SSD (reccommended) \nEnter:";
			cin >> choice;
		}
		if (choice == 2)
		{
			mac.get_SD().set_type("SSD");
			int size = 0;
			cout << "\nAlso specify its size: " << endl;
			cout << "1. 256 Gb\t2. 512 Gb \nEnter:";
			cin >> size;
			while (size != 1 && size != 2)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "1. 256 Gb\t2. 512 Gb \nEnter:";
				cin >> size;
			}
			//assigning size to storage device and their prices
			if (size == 1)
			{
				mac.get_SD().set_capacity(256);
				mac.get_SD().set_price(5000);
			}
			else
			{
				mac.get_SD().set_capacity(512);
				mac.get_SD().set_price(11000);
			}

		}
		else
		{
			mac.get_SD().set_type("HDD");
			int size = 0;
			cout << "\nAlso specify its size: " << endl;
			cout << "1. 500 Gb\t2. 1 Tb\t3. 2 Tb \nEnter:";
			cin >> size;
			while (size != 1 && size != 2 && size != 3)
			{
				cout << "\nError (select from the options)" << endl;
				cout << "1. 500 Gb\t2. 1 Tb\t3. 2 Tb \nEnter:";
				cin >> size;
			}
			//assigning size to storage device and their prices
			if (size == 1)
			{
				mac.get_SD().set_capacity(500);
				mac.get_SD().set_price(4000);
			}
			else if (size == 2)
			{
				mac.get_SD().set_capacity(1);
				mac.get_SD().set_price(8000);
			}
			else if (size == 3)
			{
				mac.get_SD().set_capacity(2);
				mac.get_SD().set_price(25000);
			}

		}
		// Select the Graphics Card
		cout << "\nGraphics Card Available:" << endl;
		cout << "1. Nvidia GPU (Gaming)\t2. AMD GPU (Office Working) \nEnter:";
		cin >> choice;
		//validation
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. Nvidia GPU (Gaming)\t2. AMD GPU (Office Working) \nEnter:";
			cin >> choice;
		}
		// assign price and gpu to Graphics Class
		if (choice == 1)
		{

			mac.get_gc()->set_brand("Nvidia GPU");
			mac.get_gc()->set_memorySize(4);        // 4 Gb memory size will be standard
			mac.get_gc()->set_price(180000);		// it is expensive and its for gaming purpose
			//cout << "Checking: nvidia gpu price: "; PC.get_cpu().get_gc().get_price();
		}
		else
		{
			mac.get_gc()->set_brand("AMD GPU");
			mac.get_gc()->set_memorySize(4);        // 4 Gb memory size will be standard
			mac.get_gc()->set_price(50000);			// it is cheaper and good for office work
		}

		// Network Card
		cout << "\nThe motherboard has built-in Ethernet port.\nDo you want to add additonal network card for Wifi?" << endl;
		cout << "\n1. Yes\t2. No\nOptional: ";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "\n1. Yes\t2. No\nOptional: ";
			cin >> choice;
		}
		// adding wifi card to PC
		if (choice == 1)
		{
			mac.get_NC().set_type("Wifi");
			mac.get_NC().set_speed(867);        //816 Mbps speed
			mac.get_NC().set_price(5500);
			cout << "\n Wifi Network Card Added!\n" << endl;
		}
		else
		{
			mac.get_NC().set_type("");
			mac.get_NC().set_speed(0);
			mac.get_NC().set_price(0);

		}


		// select power supply you want to attach
		cout << "\nOnly Available Power Supply is PSU." << endl;
		cout << "Select the wattage according to your laptop model:" << endl;
		cout << "1. 61 Watt \n2. 87 Watt \nEnter: ";
		cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "\nError (select from the options)" << endl;
			cout << "1. 61 Watt \n2. 87 Watt \nEnter: ";
			cin >> choice;
		}
		if (choice == 1)
		{
			mac.get_PS().set_wattage(61);
			mac.get_PS().set_efficencyRating("Bronze");
			mac.get_PS().set_price(14000);

		}
		else
		{
			mac.get_PS().set_wattage(87);
			mac.get_PS().set_efficencyRating("Gold");
			mac.get_PS().set_price(24900);
		}

		// As we are making a mac-laptop it has  Battery So,
		mac.get_battery().set_capacity(100);          // 100 Wh is the battery capacity

		

		// Now ouput the final Specifications and Output
		cout << "\n----------------------------------------------------------------";
		cout << "\n\n\t\t\t\t FINAL ORDER\n\n\n";
		cout << "----------------------------------------------------------------\n";
		cout << "\nREQUIREMENTS: " << endl;
		cout << "\nSystem Architecture: " << mac.get_cpu().get_alu().get_sizeOfRegisters() << "-bit System" << endl;
		if (mac.get_NC().get_type() == "")
			cout << "\nNetwork Card: NILL" << endl;
		else
			cout << "\nNetwork Card: " << mac.get_NC().get_type() << endl;
		cout << "\nBattery Capacity: " << mac.get_battery().get_capacity() <<"Wh" << endl;
		cout << "\nPower Supply: " << mac.get_PS().get_efficiencyRating() << "  " << mac.get_PS().get_wattage() << " Watts" << endl;
		cout << "\nStorage Device: " << mac.get_SD().get_type() << " Storage: " << mac.get_SD().get_capacity() << " (Gb/Tb)" << endl;
		cout << "\nGraphic Card: " << mac.get_gc()->get_brand() << endl;
		cout << "\nPhysical Memory: " << mac.get_pm().get_capacity() << "-Gb RAM" << endl;
		cout << "\nMain Memory: " << mac.get_mb().get_mm()->get_technologyType() << " Storage: " << mac.get_mb().get_mm()->get_capacity() << "-Gb" << endl;

		// As it is a mac laptop it has built-in case
	 	// Totalling Bill
		mac.set_totalPrice(mac.get_NC().get_price() + mac.get_PS().get_price() + mac.get_SD().get_price() + mac.get_gc()->get_price());

		cout << "\n-----------------------------\n";
		cout << "       Total Bill: " << mac.get_totalPrice() << " Rs." << endl;
		cout << "\n-----------------------------\n";


	}

	return 0;
}
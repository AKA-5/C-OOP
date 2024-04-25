#pragma once
#include"Battery.h"
#include"StorageDevice.h"
#include"Case.h"
#include"PowerSupply.h"
#include"NetworkCard.h"
#include"GraphicsCard.h"


class ComputerAssembly
{
	double totalPrice;
	Case PC_case;
	Battery *battery;
	PowerSupply *PS;
	NetworkCard* NC;
	StorageDevice* SD;
	GraphicsCard* gc;

public:
	ComputerAssembly();
	ComputerAssembly(double, Battery*,PowerSupply*,NetworkCard*,StorageDevice*,GraphicsCard*);

	Battery &get_battery();
	void set_battery(Battery*);
	
	Case &get_PC_case();
	void set_PC_case(Case&);
	StorageDevice & get_SD();
	void set_SD(StorageDevice*);
	
	PowerSupply &get_PS();
	void set_PS(PowerSupply*);
	NetworkCard & get_NC();
	void set_NC(NetworkCard* );
	
	double get_totalPrice();
	void set_totalPrice(double);
	GraphicsCard* get_gc();
	void set_gc(GraphicsCard*);

	~ComputerAssembly();
};


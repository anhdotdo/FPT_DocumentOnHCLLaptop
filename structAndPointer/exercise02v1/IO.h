#include<string.h>
#include"MyLib.h"

BoolType isValidMode(uint8_t mode);
void io_userInputChar(uint8_t *c);
void showMenu();
void createNewDevice(Device *devices);
DeviceStatus addDevice(Device *devices, uint32_t *n);
DeviceStatus addDevices(Device *devices, uint32_t *n);
void displayDevice(Device d);
DeviceStatus displayDevices(Device *devices, int n);
void IO_showMessage(DeviceStatus status);
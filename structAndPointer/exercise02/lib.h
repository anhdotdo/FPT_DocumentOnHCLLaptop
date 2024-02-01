
typedef struct 
{
    uint8_t name[50];
    uint8_t id[50];
    uint32_t power;
    uint32_t unitPrice;
}Device;

void createNewDevice(Device *devices);
void addDevice(Device *devices, uint32_t *n);
void addDevices(Device *devices, uint32_t *n);
void deleteDevice(Device *devices, uint32_t *n);
void displayDevice(Device d);
void displayDevices(Device *devices, int n);
void showMenu();
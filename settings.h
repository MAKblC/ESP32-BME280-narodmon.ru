// Network settings
// --
const char* ssid = "MGBot";
const char* password = "Terminator812";
// --

// Time settings
const char* ntpServerName = "pool.ntp.org";
const int TIMEZONE=3;

// narmon

#define SRV   "185.245.187.136"
#define MAC  "80:7d:3a:c7:8e:00"
#define PASS  "qhtK6ka1"
#define USERNAME  "makblc4444"
#define TOPIC  "login/BME280/"

//--

//mqtt4narmon
char server[] = SRV ;
char authMethod[] = USERNAME;
char token[] = PASS;
char clientId[] = MAC;
char conntopic[] = TOPIC "status";

// LED
const int LED_BUILTIN=2;  //Onboard LED Pin


// Application settings

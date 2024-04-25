## Usage
Add `setupICM20948()` (or if you have a RCM Nibble, you can use `nibbleSetupImu()`) to the PowerOn() function to set up the IMU.

Add `runImu()` to the `Always()` function.

Now, you can access the data within the imu variable.
```
typedef struct {
    float roll;
    float pitch;
    float yaw;
    float accX;
    float accY;
    float accZ;
    float gyrX;
    float gyrY;
    float gyrZ;
    float magX;
    float magY;
    float magZ;
    float q0;
    float q1;
    float q2;
    float q3;
    uint16_t accuracy;
    float temperature;
    unsigned long DMPTimestampMillis;
} IMUData;
IMUData imu;
```

## Installation
Copy the `ICM20948_helper.h` file into the `RCMv2` folder that `RCMv2.ino` isd in.

Add the following line to the top of `RCMv2.ino`:
```#include "ICM20948_helper.h"```

If not already added, add this line to `lib_deps` inside your platformio.ini file:
```sparkfun/SparkFun 9DoF IMU Breakout - ICM 20948 - Arduino Library@^1.2.12```

If not already added, add this line to `build_flags` inside your platformio.ini file:
```-DICM_20948_USE_DMP```


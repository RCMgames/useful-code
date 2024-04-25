
## Installation
Copy the `ICM20948_helper.h` file into the `RCMv2` folder that `RCMv2.ino` isd in.

Add the following line to the top of `RCMv2.ino`:
```#include "ICM20948_helper.h"```

Add this line to `lib_deps` inside your platformio.ini file:
```sparkfun/SparkFun 9DoF IMU Breakout - ICM 20948 - Arduino Library@^1.2.12```

Add this line to `build_flags` inside your platformio.ini file:
```-DICM_20948_USE_DMP```


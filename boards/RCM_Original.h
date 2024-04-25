/**
Bits of code that might be helpful when starting a program with an original RCM board
https://github.com/RCMgames/RCM_hardware_documentation_and_user_guide

*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(port1);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(port2);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(port3);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(port4);
JMotorDriverEsp32Servo servo5Driver = JMotorDriverEsp32Servo(port5);

// all the motor drivers
JMotorDriverEsp32L293 motor1Driver = JMotorDriverEsp32L293(portA);
JMotorDriverEsp32L293 motor2Driver = JMotorDriverEsp32L293(portB);
JMotorDriverEsp32L293 motor3Driver = JMotorDriverEsp32L293(portC);
JMotorDriverEsp32L293 motor4Driver = JMotorDriverEsp32L293(portD);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;
float servo5Val = 0;

float motor1Val = 0;
float motor2Val = 0;
float motor3Val = 0;
float motor4Val = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);
servo5Driver.set(servo5Val);

motor1Driver.set(motor1Val);
motor2Driver.set(motor2Val);
motor3Driver.set(motor3Val);
motor4Driver.set(motor4Val);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();
servo5Driver.enable();

motor1Driver.enable();
motor2Driver.enable();
motor3Driver.enable();
motor4Driver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();
servo5Driver.disable();

motor1Driver.disable();
motor2Driver.disable();
motor3Driver.disable();
motor4Driver.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
motor1Val = EWD::recvFl();
motor2Val = EWD::recvFl();
motor3Val = EWD::recvFl();
motor4Val = EWD::recvFl();

servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();
servo5Val = EWD::recvFl();
/**
Bits of code that might be helpful when starting a program with an Alfredo Systems NoU3 board
https://www.alfredosys.com/products/alfredo-nou3/
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(servo1port);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(servo2port);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(servo3port);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(servo4port);

// all the motor drivers
JMotorDriverPCA9685HBridge motor1Driver = JMotorDriverPCA9685HBridge(motor1port);
JMotorDriverPCA9685HBridge motor2Driver = JMotorDriverPCA9685HBridge(motor2port);
JMotorDriverPCA9685HBridge motor3Driver = JMotorDriverPCA9685HBridge(motor3port);
JMotorDriverPCA9685HBridge motor4Driver = JMotorDriverPCA9685HBridge(motor4port);
JMotorDriverPCA9685HBridge motor5Driver = JMotorDriverPCA9685HBridge(motor5port);
JMotorDriverPCA9685HBridge motor6Driver = JMotorDriverPCA9685HBridge(motor6port);
JMotorDriverPCA9685HBridge motor7Driver = JMotorDriverPCA9685HBridge(motor7port);
JMotorDriverPCA9685HBridge motor8Driver = JMotorDriverPCA9685HBridge(motor8port);

// all the encoder ports
JEncoderQuadratureAttachInterrupt encoder2 = JEncoderQuadratureAttachInterrupt(encoder2port, 1.0, false); // multiplier, inverted
JEncoderQuadratureAttachInterrupt encoder3 = JEncoderQuadratureAttachInterrupt(encoder3port, 1.0, false); // multiplier, inverted
JEncoderQuadratureAttachInterrupt encoder4 = JEncoderQuadratureAttachInterrupt(encoder4port, 1.0, false); // multiplier, inverted
JEncoderQuadratureAttachInterrupt encoder5 = JEncoderQuadratureAttachInterrupt(encoder5port, 1.0, false); // multiplier, inverted
JEncoderQuadratureAttachInterrupt encoder6 = JEncoderQuadratureAttachInterrupt(encoder6port, 1.0, false); // multiplier, inverted
JEncoderQuadratureAttachInterrupt encoder7 = JEncoderQuadratureAttachInterrupt(encoder7port, 1.0, false); // multiplier, inverted


// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;

float motor1Val = 0;
float motor2Val = 0;
float motor3Val = 0;
float motor4Val = 0;
float motor5Val = 0;
float motor6Val = 0;
float motor7Val = 0;
float motor8Val = 0;

// variables for the encoders
float encoder2Val = 0;
float encoder3Val = 0;
float encoder4Val = 0;
float encoder5Val = 0;
float encoder6Val = 0;
float encoder7Val = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);

motor1Driver.set(motor1Val);
motor2Driver.set(motor2Val);
motor3Driver.set(motor3Val);
motor4Driver.set(motor4Val);
motor5Driver.set(motor5Val);
motor6Driver.set(motor6Val);
motor7Driver.set(motor7Val);
motor8Driver.set(motor8Val);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();

motor1Driver.enable();
motor2Driver.enable();
motor3Driver.enable();
motor4Driver.enable();
motor5Driver.enable();
motor6Driver.enable();
motor7Driver.enable();
motor8Driver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();

motor1Driver.disable();
motor2Driver.disable();
motor3Driver.disable();
motor4Driver.disable();
motor5Driver.disable();
motor6Driver.disable();
motor7Driver.disable();
motor8Driver.disable();

// create interrupt functions for the encoders (you can put this above (and outside) the PowerOn() function)
jENCODER_MAKE_ISRS_MACRO(encoder2);
jENCODER_MAKE_ISRS_MACRO(encoder3);
jENCODER_MAKE_ISRS_MACRO(encoder4);
jENCODER_MAKE_ISRS_MACRO(encoder5);
jENCODER_MAKE_ISRS_MACRO(encoder6);
jENCODER_MAKE_ISRS_MACRO(encoder7);

// set up all the motor drivers (you can put this in PowerOn())
encoder2.setUpInterrupts(encoder2_jENCODER_ISR_A, encoder2_jENCODER_ISR_B);
encoder3.setUpInterrupts(encoder3_jENCODER_ISR_A, encoder3_jENCODER_ISR_B);
encoder4.setUpInterrupts(encoder4_jENCODER_ISR_A, encoder4_jENCODER_ISR_B);
encoder5.setUpInterrupts(encoder5_jENCODER_ISR_A, encoder5_jENCODER_ISR_B);
encoder6.setUpInterrupts(encoder6_jENCODER_ISR_A, encoder6_jENCODER_ISR_B);
encoder7.setUpInterrupts(encoder7_jENCODER_ISR_A, encoder7_jENCODER_ISR_B);

// read velocity from all encoders (put in Always())
encoder2Val = encoder2.getVel();
encoder3Val = encoder3.getVel();
encoder4Val = encoder4.getVel();
encoder5Val = encoder5.getVel();
encoder6Val = encoder6.getVel();
encoder7Val = encoder7.getVel();

// receive values for all the variables (you can put this in WifiDataToParse())
servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();

motor1Val = EWD::recvFl();
motor2Val = EWD::recvFl();
motor3Val = EWD::recvFl();
motor4Val = EWD::recvFl();
motor5Val = EWD::recvFl();
motor6Val = EWD::recvFl();
motor7Val = EWD::recvFl();
motor8Val = EWD::recvFl();

// send values for all the encoders (you can put this in WifiDataToSend())
EWD::sendFl(encoder2Val);
EWD::sendFl(encoder3Val);
EWD::sendFl(encoder4Val);
EWD::sendFl(encoder5Val);
EWD::sendFl(encoder6Val);
EWD::sendFl(encoder7Val);

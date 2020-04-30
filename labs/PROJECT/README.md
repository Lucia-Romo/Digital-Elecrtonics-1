# **Lab 9-13: Project title**

## *Objectives*

The objective of the project is to créate a countdown from set value to zero. We are going to use a rotary encoder ky-040 to give the position in wich the countdown will start, and the value of the countdown Will be represented on the driver tm1637.

## *Hardware description*

-	Rotary encoder ky-040:

First of all we are going to use a rotary encoder ky-040:

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/ky-040_1.PNG)

A Rotary Encoder is an electro-mechanical device that converts the rotational movement of an axis into a signal (which can be analog or digital depending on the type) and generates a signal proportional to the rotation of that axis.

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/ky-040.PNG)

PINS OF THE ENCODER: 
We can see we have 5 pins, 3 for data inputs and 2 power pins.

clk: clock input
DT: input
SW : switch pin
Vcc : power input
GND : ground

By having two similar mechanical outputs, we obtain two different pulses that duly studied indicate the direction of rotation in addition to the number of pulses that have been rotated, because the signal of one output will necessarily be out of phase with respect to the other since we first pass through one notch and then the other.

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/function_encoder.PNG)

If we first read the value of a state for output A and find it at HIGH, and if we now read Output B and it is in LOW, it means that we have rotated clockwise, because A has been raised while B is still in LOW . Later A and B will take the same value when the wheel reaches switch B, but for now we are only interested in looking at the first moment that both are different. If, on the other hand, when the output in A and B are different but the output B has been activated before, it is that we turn against the clock.

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/ky-040%20function.PNG)


-	Serial 7-segment display with control circuit TM1637:

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/tm16237.PNG)

It is a control circuit that represents on a display the values that are entered by the data entry.
We can see that it has 4 pins:

clk: clock input
DIO: data input
Vcc: power input
GND: ground

When we introduce our values into the control circuit, it controls that information and represent wanted values on the display.

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/display-tm16237.PNG)

-	Coolrunner-II CPLD starter board

We have connected every device to the coolrunner using Pmod connectors:

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/pmod%20connectors.PNG)



## *Code description*

4 entities have been used in the project to manage the operation of the different peripherals and modules. First we have the encoder entity, which provides the position in which the encoder is, and in this way count down in the countdown entity. once this is achieved, the counter output will be sent to the tm1637 controller for its data input, and will represent the countdown that is taking place.
Meanwhile, the clok_enable.vhd generates the clock signal.
On top module the different entities have been connected to make this possible

First of all, we can see how the encoder works:

The testbench was first performed with a count up the encoder, and as we can see, input signal A goes first and then input signal B, out of phase:

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/1st_testbench_encoder.png)

and now we have done it with a countdown, so that the input signal B is detected first, and then the input signal A

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/2nd_testbench_encoder.PNG)

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/3rd_testbench_encoder.PNG)

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/4th_testbench_encoder.PNG)

And then the values of inA and inB have been being modified to obtain the best result when using the encoder correctly.

After testing the operation of the encoder, it has been connected to the countdown entity, so that we could start the countdown from the output value of ky-040.

![alt text](https://github.com/Lucia-Romo/Digital-Electronics-1/blob/master/labs/PROJECT/testbench_coundown.PNG)

And connected to the encoder goes the controller tm1637. It shows the output directly from the countdown entity.


## *References*

https://www.prometec.net/rotary-encoders/

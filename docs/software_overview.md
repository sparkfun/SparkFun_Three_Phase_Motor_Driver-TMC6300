---
icon: simple/arduino
---

## Arduino IDE
!!! tip
	For first-time users, who have never programmed before and are looking to use the Arduino IDE, we recommend beginning with the <a href="https://www.sparkfun.com/products/15631">SparkFun Inventor's Kit (SIK)</a>, which is designed to help users get started programming with the Arduino IDE.

Most users may already be familiar with the Arduino IDE and its use. However, for those of you who have never heard the name *Arduino* before, feel free to check out the [Arduino website](https://www.arduino.cc/en/Guide/HomePage). To get started with using the Arduino IDE, check out our tutorials below:


<table class="pdf" style="border-style:none" align="center">
	<tr>
		<td align="center">
			<a class="thumb" href="https://learn.sparkfun.com/tutorials/50">
				<img src="https://cdn.sparkfun.com/c/264-148/assets/3/b/6/e/b/512e66bece395f492b000000.jpg" alt="What is an Arduino?">
				<h3 class="title">What is an Arduino?</h3>
			</a>
		</td>
		<td align="center">
			<a class="thumb" href="https://learn.sparkfun.com/tutorials/61">
				<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/1/arduinoThumb.jpg" alt="Installing Arduino IDE">
				<h3 class="title">Installing Arduino IDE</h3>
			</a>
		</td>
		<td align="center">
			<a class="thumb" href="https://learn.sparkfun.com/tutorials/15">
				<img src="https://cdn.sparkfun.com/c/264-148/assets/b/e/4/b/2/50f04b99ce395fd95e000001.jpg" alt="Installing an Arduino Library">
				<h3 class="title">Installing an Arduino Library</h3>
			</a>
		</td>
		<td align="center">
			<a class="thumb" href="https://learn.sparkfun.com/tutorials/1265">
				<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/2/6/5/sparkfun_boards.PNG" alt="Installing Board Definitions in the Arduino IDE">
				<h3 class="title">Installing Board Definitions in the Arduino IDE</h3>
			</a>
		</td>
	</tr>
</table>


<div class="grid cards" markdown align="center">

-   <a href="https://learn.sparkfun.com/tutorials/50"><figure markdown>
	![What is an Arduino?](https://cdn.sparkfun.com/c/264-148/assets/3/b/6/e/b/512e66bece395f492b000000.jpg)
	</figure>

	---

	**What is an Arduino?**</a>

-   <a href="https://learn.sparkfun.com/tutorials/61"><figure markdown>
	![Installing the Arduino IDE](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/1/arduinoThumb.jpg)
	</figure>

	---
	
	**Installing the Arduino IDE**</a>

-   <a href="https://learn.sparkfun.com/tutorials/15"><figure markdown>
	![Installing an Arduino Library](https://cdn.sparkfun.com/c/264-148/assets/b/e/4/b/2/50f04b99ce395fd95e000001.jpg)
	</figure>

	---
	
	**Installing an Arduino Library**</a>

-   <a href="https://learn.sparkfun.com/tutorials/1265"><figure markdown>
	![Installing Board Definitions in the Arduino IDE](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/2/6/5/sparkfun_boards.PNG)
	</figure>

	---
	
	**Installing Board Definitions in the Arduino IDE**</a>
</div>


??? tip "Need help setting up the RedBoard Plus?"
	### RedBoard Plus
	The following instructions should help users get started with the RedBoard Plus. For more information about the board, please check out our hookup guide below:

	<figure markdown>
	[![RedBoard Plus Hookup Guide](https://cdn.sparkfun.com/c/500-282/assets/learn_tutorials/1/7/5/8/18158-SparkFun_RedBoard_Plus-01.jpg)](https://learn.sparkfun.com/tutorials/1758)
	<figcaption markdown>[**RedBoard Plus Hookup Guide**](https://learn.sparkfun.com/tutorials/1758)</figcaption>
	</figure>


	#### CH340 Driver
	Users will need to install the appropriate driver for their computer to recognize the serial-to-UART chip on their board/adapter. Most of the latest operating systems will recognize the CH340C chip on the board and automatically install the required driver.

	*To manually install the CH340 driver on their computer, users can download it from the [WCH website](http://www.wch-ic.com/products/CH340.html?). For more information, check out our [How to Install CH340 Drivers Tutorial](https://www.sparkfun.com/ch340).*

	<figure markdown>
	[![How to Install CH340 Drivers](https://cdn.sparkfun.com/c/500-282/assets/learn_tutorials/9/0/8/USB-to-serial_converter_CH340-closeup.jpg)](https://learn.sparkfun.com/tutorials/908)
	<figcaption markdown>[**How to Install CH340 Drivers**](https://learn.sparkfun.com/tutorials/908)</figcaption>
	</figure>


	#### Arduino IDE
	When selecting a board to program in the Arduino IDE, users should select the **Arduino Uno** from the **Tools** drop-down menu _(_i.e. **Tools** > **Board** > **Arduino AVR Boards** > **Arduino Uno**)_.

	<figure markdown>
	[![](../img/hookup_guide/board_selection.png "Click to enlarge"){ width="400" }](../img/hookup_guide/board_selection.png)
	<figcaption markdown>Select the **Arduino Uno** from the Tools drop-down menu in the Arduino IDE.</figcaption>
	</figure>

	??? info "Arduino IDE 2.x.x - *Alternative Method*"
		In the newest version of the Arduino IDE 2.`x`.`x`, users can also select their board (*green*) and port (*blue*) from the `Select Board & Port` dropdown menu (*yellow*).

		<figure markdown>
		[![](../img/hookup_guide/board_selection2.png "Click to enlarge"){ width="400" }](../img/hookup_guide/board_selection2.png)
		<figcaption markdown>Selecting the **Arduino Uno** and **COM5** port from the **Select Board & Port** drop-down menu in the Arduino IDE (v2.0.3).</figcaption>
		</figure>


## SimpleFOClibrary
The [Simple Field Oriented Control Library](https://github.com/simplefoc/Arduino-FOC) can be installed from the library manager in the Arduino IDE.

<figure markdown>
[![](../img/hookup_guide/arduino_library.png "Click to enlarge"){ width="400" }](../img/hookup_guide/arduino_library.png)
<figcaption markdown>SimpleFOClibrary in the library manager of the Arduino IDE.</figcaption>
</figure>

??? tip "Arduino IDE *(v1.x.x)*"
	In the Arduino IDE v1.x.x, the library manager will have the following appearance for the SimpleFOC library:

	<figure markdown>
	[![](../img/hookup_guide/arduino_library-legacy.png "Click to enlarge"){ width="400" }](../img/hookup_guide/arduino_library-legacy.png)
	<figcaption markdown>SimpleFOClibrary in the library manager of the Arduino IDE (v1.x.x).</figcaption>
	</figure>

This library utilizes a motor control scheme called field oriented control (FOC), which can utilize a feedback control loop to drive a motor with a higher power efficiency and precision characteristics, like evenly distributed torque control.

!!! info
	For more details about the library, check out the [online documentation](https://docs.simplefoc.com/).

!!! note "Supported Hardware"
	For a detailed and up-to-date list of the hardware supported by this library, check out the [library's documentation](https://docs.simplefoc.com/supported_hardware). The following are excerpts taken from the library's documentation page:

	=== "Microcontrollers"

		--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/mcus/index.md:14:15"

		--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/mcus/index.md:35:49"

		!!! info
			For more details, please refer to the [SimpleFOC Arduino library documentation](https://docs.simplefoc.com/microcontrollers).
	
	=== "Motor Drivers"

		--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/drivers/index.md:19:23"

		??? warning "Current Limitations"
			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/drivers/index.md:30"

		!!! tip
			While the TMC6300 isn't directly listed as part of the supported hardware for the SimpleFOC Arduino library, we have verified that is compatible with the library.

		!!! info
			For more details, please refer to the [SimpleFOC Arduino library documentation](https://docs.simplefoc.com/bldc_drivers).

	=== "Motors"

		Arduino SimpleFOClibrary supports two types of BLDC motors:

		- BLDC motors
			- 3 phase (3 wire):

				??? info "Gimbal Motors"
					--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/motors/BLDC_motors.md:20:22"

					--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/motors/BLDC_motors.md:23:28"

				??? info "High-performance Motors"		
					--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/motors/BLDC_motors.md:43:43"
		- Stepper motors
			- 2 phase (4 wire)
	
		??? warning "Current Limitations"
			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/hardware/motors/index.md:28"

		!!! info
			For more details, please refer to the [SimpleFOC Arduino library documentation](https://docs.simplefoc.com/bldc_motors).


### 6PWM Motor Driver

Users will need to utilize the [`BLDCDriver6PWM` class](https://docs.simplefoc.com/bldcdriver6pwm) to provide the six PWM signals required for the TMC6300 motor driver.

`BLDCDriver6PWM`

:   This class provides an abstraction layer for most of the common BLDC drivers, which require six PWM signals. This method offers more control than a three PWM motor drivers, since each of the 6 half-bridges MOSFETs can be controlled independently.

	--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:28:36"

	!!! note "Microcontroller Considerations"
		=== "Arduino Uno"
			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:42:50"

		=== "STM32"
			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:54:54"

			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:55:56"

			<div class="grid cards" markdown>

			-   **Hardware PWM**

				---

				--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:59:69"

			-   **Software PWM**

				---

				--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:72:93"

			</div>

		=== "ESP32"
			--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:96:96"

	!!! info
		For more details about the `BLDCDriver6PWM` class, check out the [online documentation](https://docs.simplefoc.com/bldcdriver6pwm).

<!-- 
The PWM carrier frequency used to control the motor driver can greatly affect its efficiency.

* Low frequency - poor current shape, which increased heating and harmonics loss in the motor
* High frequency - increased transistor switching loss -->

### BLDC Motor

All BLDC motors are handled with the [`BLDCMotor` class](https://docs.simplefoc.com/bldcmotor).

`BLDCMotor`

:   This class implements the BLDC FOC algorithm, motion control loops, and monitoring.

	--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/motors/bldc_motors.md:23:30"

	!!! note "Motor Considerations"
		While, the datasheet for our [gimbal motor](https://www.sparkfun.com/products/20441), indicates that there are **8 pole pairs**, we have found that the motor operates more smoothly if the `BLDCMotor` class is instantiated with **7 pole pairs** instead.

		```cp
		BLDCMotor motor = BLDCMotor(7);
		```

	!!! info
		For more details about the `BLDCMotor` class, check out the [online documentation](https://docs.simplefoc.com/bldcmotor).


### Motion Control

Unless a feedback loop is incorporated when driving the motor *(i.e. with [position sensors](https://docs.simplefoc.com/sensors) or [current sensing](https://docs.simplefoc.com/current_sense))*, users should implement the SimpleFOC library using the [open-loop control](https://docs.simplefoc.com/open_loop_motion_control).

Open-Loop Motion Control Types:

* [Velocity](https://docs.simplefoc.com/velocity_openloop)
* [Position](https://docs.simplefoc.com/angle_openloop)


<!-- #### Sensorless FOC
Current measurement

#### Closed-Loop
With position sensors

Control Types (available in library):
* Torque
* Velocity
* Angle

#### Low-side current sensing

While the SimpleFOC Arduino library offers the option to incorporate low-side current sensors into the feedback loop, 


--8<-- "https://raw.githubusercontent.com/simplefoc/simplefoc.github.io/master/docs/simplefoc_library/code/drivers/bldc_driver/bldc_driver_6pwm.md:101:110"



utilizing the [open loop example](https://github.com/simplefoc/Arduino-FOC/blob/master/examples/motion_control/open_loop_motor_control/open_loop_velocity_example/open_loop_velocity_example.ino) combined with the [6 channel PWM method](https://docs.simplefoc.com/bldcdriver6pwm) and *every* PWM pin on the Arduino Uno gets this board working. Note the [pairs of PWM pins](https://docs.simplefoc.com/bldcdriver6pwm) that must be used. -->
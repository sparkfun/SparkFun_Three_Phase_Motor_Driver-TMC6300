SparkFun 3-Phase BLDC Motor Driver - TMC6300
========================================

[![SparkFun 3-Phase BLDC Motor Driver - TMC6300](https://cdn.sparkfun.com/assets/parts/2/1/6/9/6/21867-_SparkFun_Brushless_Motor_Drive-_1.jpg)](https://www.sparkfun.com/products/21867)

[*SparkFun 3-Phase BLDC Motor Driver - TMC6300 (ROB-21867)*](https://www.sparkfun.com/products/21867)

The TMC6300 from [ADI + Trinamic](https://www.trinamic.com/) is a powerful and easy to use three phase motor driver that was designed to control our [Brushless Gimbal Motor](https://www.sparkfun.com/products/20441). However, it can be used to control any 3-phase [BLDC](https://en.wikipedia.org/wiki/Brushless_DC_electric_motor "brushless DC") or [PMSM](https://en.wikipedia.org/wiki/Synchronous_motor#Permanent-magnet "permanent magnet synchronous motor") motor with up to 2A (1.4A<sub>RMS</sub>) of total drive current. Separate high-side and low-side control of the three half-bridges allows for incredible control of each phase of the [motor commutation](https://fab.cba.mit.edu/classes/865.21/topics/power_electronics/commutation/#bldc-commutation). The driver also provides temperature and short circuit protections; and a diagnostic output to indicate system faults. With a 1.8V regulated power output and an operating voltage down to 2V, the TMC6300 is suitable for low-power microcontroller and battery powered designs (min. 2 AA/NiMh cells, or 1-2 Li-Ion cells).

Our board layout has been designed with the LEDs and labels facing up, IC down. This allows the thermal pad on the board to be access if cooling is required. Additionally, the breakout pins are specially aligned to fit perfectly onto a breadboard and hold the headers more perpendicular to facilitate assembly.

Controlling 3-phase motors is not trivial and this board requires 6 PWM signals to fully control one motor. We've found the [*Arduino Simple Field Oriented Control*](https://docs.simplefoc.com/) library to work well with the board; however, there are some hadware limitations such as [supported microconrollers for `6PWM Mode`](https://docs.simplefoc.com/microcontrollers#supported-microcontrollers). With additional considerations, for integrating [position sensors](https://docs.simplefoc.com/position_sensors) into the feedback control loop.


Repository Contents
-------------------

* **[/docs](/docs/)** - Online documentation files
    * [arduino_examples](/docs/arduino_examples/) - Example code
    * [board_files](/docs/board_files/) - Files for the product design
            * [Eagle design files](/docs/board_files/eagle_files.zip) (.zip)
            * [Schematic](/docs/board_files/schematic.pdf) (.pdf)
            * [Dimensions](/docs/board_files/dimensions.pdf) (.pdf)
    * [component_documentation](/docs/component_documentation/) - Datasheets for hardware components
    * [img/hookup_guide/](/docs/img/hookup_guide/) - Images for hookup guide documentation
* **[/Hardware](/Hardware/)** - Eagle design files (.brd, .sch)


Documentation
--------------
* **[Hookup Guide (mkdocs)](http://docs.sparkfun.com/SparkFun_Three_Phase_Motor_Driver-TMC6300/)** - Hookup guide for the TMC6300 Motor Driver hosted by GitHub pages.

*Need to download or print our hookup guide?*

* [Print *(Print to PDF)* from Single-Page View](http://docs.sparkfun.com/SparkFun_Three_Phase_Motor_Driver-TMC6300/single_page)
* [Download PDF](http://docs.sparkfun.com/SparkFun_Three_Phase_Motor_Driver-TMC6300/board_files/hookup_guide.pdf) *(Beta - Mostly works, but some attributes may be broken.)*

Product Variants
----------------
* [ROB-21867](https://www.sparkfun.com/products/21867)- v1.0, Initial Release

Version History
---------------
* [v01](https://github.com/sparkfun/SparkFun_Three_Phase_Motor_Driver-TMC6300/releases/tag/v10) - Initial Release


License Information
-------------------

This product is _**open source**_! 

Please review the LICENSE.md file for license information. 

If you have any questions or concerns about licensing, please contact technical support on our [SparkFun forums](https://forum.sparkfun.com/viewforum.php?f=152).

Distributed as-is; no warranty is given.

- Your friends at SparkFun.

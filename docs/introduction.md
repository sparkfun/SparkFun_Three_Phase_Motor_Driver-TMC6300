---
icon: material/book-open-page-variant
---

# Introduction
<div class="grid cards desc" markdown>

-   <a href="https://www.sparkfun.com/products/21867">
	**Brushless Motor Driver - 3 Phase (TMC6300)**<br>
	**SKU:** ROB-21867
	
	---
	
	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/1/6/9/6/21867-_SparkFun_Brushless_Motor_Drive-_1.jpg)
	</figure></a>

	<center>
	<article class="video_desc">
	<iframe src="https://www.youtube.com/embed/I0sJSTlUF_E" title="Product Showcase: SparkFun Brushless Motor Driver - 3 Phase (TMC6300)" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
	</article>
	![QR code to play video](../img/qr_code/product_video.png){ .qr }
	</center>


-	The TMC6300 from [ADI + Trinamic](https://www.trinamic.com/) is a powerful and easy to use three phase motor driver that was designed to control our [Brushless Gimbal Motor](https://www.sparkfun.com/products/20441). However, it can be used to control any 3-phase [BLDC](https://en.wikipedia.org/wiki/Brushless_DC_electric_motor "brushless DC") or [PMSM](https://en.wikipedia.org/wiki/Synchronous_motor#Permanent-magnet "permanent magnet synchronous motor") motor with up to 2A (1.4A~RMS~) of total drive current. Separate high-side and low-side control of the three half-bridges allows for incredible control of each phase of the [motor commutation](https://fab.cba.mit.edu/classes/865.21/topics/power_electronics/commutation/#bldc-commutation). The driver also provides temperature and short circuit protections; and a diagnostic output to indicate system faults. With a 1.8V regulated power output and an operating voltage down to 2V, the TMC6300 is suitable for low-power microcontroller and battery powered designs (min. 2 AA/NiMh cells, or 1-2 Li-Ion cells).

	Our board layout has been designed with the LEDs and labels facing up, IC down. This allows the thermal pad on the board to be access if cooling is required. Additionally, the breakout pins are specially aligned to fit perfectly onto a breadboard and hold the headers more perpendicular to facilitate assembly.

	Controlling 3-phase motors is not trivial and this board requires 6 PWM signals to fully control one motor. We've found the [*Arduino Simple Field Oriented Control*](https://docs.simplefoc.com/) library to work well with the board; however, there are some hadware limitations such as [supported microconrollers for `6PWM Mode`](https://docs.simplefoc.com/microcontrollers#supported-microcontrollers). With additional considerations, for integrating [position sensors](https://docs.simplefoc.com/position_sensors) into the feedback control loop.

	<center>
	[![QR code to product page](../img/qr_code/product-low.png){ .tinyqr }&nbsp;&nbsp;&nbsp;Purchase from SparkFun :fontawesome-solid-cart-plus:{ .heart }](https://www.sparkfun.com/products/21867){ .md-button .md-button--primary }
	</center>

</div>


## :fontawesome-solid-list-check:&nbsp;Required Materials
To get started, users will need a few items. Now some users may already have a few of these items, feel free to modify your cart accordingly.

* Computer with an operating system (OS) that is compatible with all the software installation requirements.
* A compatible microcontroller/Arduino board; we recommend the [SparkFun RedBoard Plus](https://www.sparkfun.com/products/18158).

	!!! warning
		The recommended Arduino library for the TMC6300 motor driver is not compatible with all microcontrollers or boards. For a complete list of compatible microcontrollers and boards, please refer to the [documentation](https://github.com/simplefoc/Arduino-FOC#boards) for the Simple Field Oriented Control Library.

* [USB 3.1 Cable A to C - 3 Foot](https://www.sparkfun.com/products/14743) - Used to interface with the RedBoard Plus (1)
{ .annotate }

	1.	If your computer doesn't have a USB-A slot or your microcontroller/Arduino board has a different USB connector, then choose an appropriate cable or adapter.

* [SparkFun Brushless Motor Driver - 3 Phase (TMC6300)](https://www.sparkfun.com/products/21867)
* [BLDC Motor](https://www.sparkfun.com/products/20441) (1)
{ .annotate }

	1. This gimbal motor requires a 6 to 8V power supply. However, for zero-load, low-speed testing, we have found that users can get away with utilizing the 5V power from a RedBoard Plus.

* [Power Supply](https://www.sparkfun.com/categories/307 "Click here for a full selection of our available power supplies")
* Soldering Tools (1)
{ .annotate }

	1.	Check out the beginner tool kit below; otherwise, click here for a full selection of our available [soldering tools](https://www.sparkfun.com/categories/49).

* [Headers](https://www.sparkfun.com/categories/381 "Click here for a full selection of our available headers")
* [Small Breadboard](https://www.sparkfun.com/products/12002)
* [Jumper Wires](https://www.sparkfun.com/categories/141 "Click here for a full selection of our wires")

<!-- * [Heat Sink](https://www.sparkfun.com/products/11510 "Thermal tape/compound is NOT included") - Used to help dissipate excess heat
    * [Thermal Tape](https://www.sparkfun.com/products/17054) - To attach a heat sink to the board
	* [Heatsink Compound](https://www.sparkfun.com/products/9599) - To attach a heat sink to the board -->


<table class="pdf">
	<tr>
		<td>
			<a href="https://www.sparkfun.com/products/14743">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/2/9/7/2/14743-USB_3.1_Cable_A_to_C_-_3_Foot-01.jpg" alt="USB 3.1 Cable A to C - 3 Foot">
				</center>
				<h3 class="title">USB 3.1 Cable A to C - 3 Foot</h3>
			</a>
			CAB-14743
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/18158">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/7/4/8/7/18158-SparkFun_RedBoard_Plus-01.jpg" alt="SparkFun RedBoard Plus">
				</center>
				<h3 class="title">SparkFun RedBoard Plus</h3>
			</a>
			DEV-18158
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/21867">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/1/6/9/6/21867-_SparkFun_Brushless_Motor_Drive-_1.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">SparkFun Brushless Motor Driver - 3 Phase (TMC6300)</h3>
			</a>
			ROB-21867
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/12002">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/1/6/9/6/21867-_SparkFun_Brushless_Motor_Drive-_01.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Breadboard - Self-Adhesive (White)</h3>
			</a>
			PRT-12002
		</td>
	</tr>
	<tr>
		<td>
			<a href="https://www.sparkfun.com/products/14681">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/2/8/8/3/14681-SparkFun_Beginner_Tool_Kit.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">SparkFun Beginner Tool Kit</h3>
			</a>
			TOL-14681
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/116">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/0/6/00116-02-L.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Break Away Headers - Straight</h3>
			</a>
			PRT-00116
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/8431">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/1/8/1/JumperWire-Male-01-L.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Jumper Wires Premium 6" M/M Pack of 10</h3>
			</a>
			PRT-08431
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/9140">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/5/5/7/09140-03-L.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Jumper Wires Premium 6" M/F Pack of 10</h3>
			</a>
			PRT-09140
		</td>
	</tr>
	<tr>
		<td>
			<a href="https://www.sparkfun.com/products/20441">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/0/2/6/0/ROB-20441_4_Gimbal_Motor.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Three Phase Brushless Gimbal Stabilizer Motor</h3>
			</a>
			ROB-20441
		</td>
		<td>
			<a href="https://www.sparkfun.com/products/retired/9291">
				<center>
				<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/8/1/6/09291-1.jpg" alt="Product Thumbnail">
				</center>
				<h3 class="title">Power Supply - 80W DC Switching Mode</h3>
			</a>
			TOL-09291
	</tr>
</table>

<div class="pdf" markdown>
!!! note "New to soldering?"
	Check out our [Through-Hole Soldering Tutorial](https://learn.sparkfun.com/tutorials/5) for a quick introduction!
	<p align="center">
		<a href="https://learn.sparkfun.com/tutorials/5">How to Solder: Through-Hole Soldering<br>
		<img src="https://cdn.sparkfun.com/c/264-148/assets/e/3/9/9/4/51d9fbe1ce395f7a2a000000.jpg" alt="Tutorial's thumbnail"></a>
	</p>
</div>


<div class="grid cards hide col-4" markdown>

-   <a href="https://www.sparkfun.com/products/14743">**USB 3.1 Cable A to C - 3 Foot**<br>
	CAB-14743

	---

	<figure markdown>
	![USB 3.1 Cable A to C - 3 Foot](https://cdn.sparkfun.com/assets/parts/1/2/9/7/2/14743-USB_3.1_Cable_A_to_C_-_3_Foot-01.jpg)
	</figure></a>

-   <a href="https://www.sparkfun.com/products/18158">**SparkFun RedBoard Plus**<br>
	DEV-18158

	---
	
	<figure markdown>
	![SparkFun RedBoard Plus](https://cdn.sparkfun.com/assets/parts/1/7/4/8/7/18158-SparkFun_RedBoard_Plus-01.jpg)
	</figure></a>

-   <a href="https://www.sparkfun.com/products/21867">
	**Brushless Motor Driver - 3 Phase (TMC6300)**<br>
	ROB-21867

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/1/6/9/6/21867-_SparkFun_Brushless_Motor_Drive-_1.jpg)
	</figure></a>

-   <a href="https://www.sparkfun.com/products/12002">
	**Breadboard - Self-Adhesive (White)**<br>
	PRT-12002

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/8/5/0/3/12002-Breadboard_-_Self-Adhesive__White_-01.jpg)
	</figure>
	</a>

-   <a href="https://www.sparkfun.com/products/14681">
	**SparkFun Beginner Tool Kit**<br>
	TOL-14681

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/2/8/8/3/14681-SparkFun_Beginner_Tool_Kit.jpg)
	</figure></a>

	??? note "New to soldering?"
		Check out our [Through-Hole Soldering Tutorial](https://learn.sparkfun.com/tutorials/5) for a quick introduction!
		<p align="center">
			<a href="https://learn.sparkfun.com/tutorials/5">How to Solder: Through-Hole Soldering<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/e/3/9/9/4/51d9fbe1ce395f7a2a000000.jpg" alt="Tutorial's thumbnail"></a>
		</p>

-   <a href="https://www.sparkfun.com/products/116">
	**Break Away Headers - Straight**<br>
	PRT-00116

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/0/6/00116-02-L.jpg)
	</figure>
	</a>

-   <a href="https://www.sparkfun.com/products/8431">
	**Jumper Wires Premium 6" M/M Pack of 10**<br>
	PRT-08431

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/1/8/1/JumperWire-Male-01-L.jpg)
	</figure>
	</a>

-   <a href="https://www.sparkfun.com/products/9140">
	**Jumper Wires Premium 6" M/F Pack of 10**<br>
	PRT-09140

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/5/5/7/09140-03-L.jpg)
	</figure></a>

-   <a href="https://www.sparkfun.com/products/20441">
	**Three Phase Brushless Gimbal Stabilizer Motor**<br>
	ROB-20441

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/0/2/6/0/ROB-20441_4_Gimbal_Motor.jpg)
	</figure></a>

-   <a href="https://www.sparkfun.com/products/retired/9291">
	**Power Supply - 80W DC Switching Mode**<br>
	TOL-09291

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/8/1/6/09291-1.jpg)
	</figure></a>

	??? warning "Retired Product"
		Alternatively, a [4xAA battery holder](https://www.sparkfun.com/products/12083) and some [AA batteries](https://www.sparkfun.com/products/15201). However, the maximum current draw will be limited.

-   <a href="https://www.sparkfun.com/products/506">
	**Banana to IC Hook Cables**<br>
	CAB-00506

	---

	<figure markdown>
	![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/3/4/6/00506-02-L.jpg)
	</figure></a>

</div>



??? note "Charge Pump Capacitor"
	The datasheet recommends a 0.1&micro;F capacitor for the charge pump pin, to stabilize the input power supply when there are large swings in the voltage to the motor. Below are links to our 0.1&micro;F capacitors:

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/8375">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/8/3/2/08375-03-L.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Capacitor Ceramic 0.1uF</h3>
				</a>
				COM-08375
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/13698">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/1/1/7/0/13698-02.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">SparkFun Capacitor Kit</h3>
				</a>
				KIT-13698
			</td>
		</tr>
	</table>

	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/8375">
		**Capacitor Ceramic 0.1uF**<br>
		COM-08375

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/8/3/2/08375-03-L.jpg)
		</figure></a>

	-   <a href="https://www.sparkfun.com/products/13698">
		**SparkFun Capacitor Kit**<br>
		KIT-13698

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/1/1/7/0/13698-02.jpg)
		</figure></a>

	</div>



??? note "Heat Sink Accessories"
	To attach a heat sink to dissipate excess heat, users will want to check out the following components:

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/11510">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/8/2/3/7/18704-1.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Small Heatsink</h3>
				</a>
				PRT-11510
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/17054">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/5/7/0/4/10746-02a.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Thermal Tape 4x4" Square</h3>
				</a>
				PRT-17054
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/9599">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/3/4/2/2/09599-Heatsink_Compound-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Heatsink Compound</h3>
				</a>
				PRT-09599
			</td>
		</tr>
	</table>

	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/11510">
		**Small Heatsink**<br>
		PRT-11510

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/5/7/0/4/10746-02a.jpg)
		</figure></a>

		!!! info "Thermal tape/compound is not included"

	-   <a href="https://www.sparkfun.com/products/17054">
		**Thermal Tape 4x4" Square**<br>
		PRT-17054

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/6/0/0/0/17054-Thermal_Tape_4x4in._Square-01.jpg)
		</figure></a>
	
	-   <a href="https://www.sparkfun.com/products/9599">
		**Heatsink Compound**<br>
		PRT-09599

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/3/4/2/2/09599-Heatsink_Compound-01.jpg)
		</figure></a>

	</div>



??? note "Current Sensing"
	To perform current sensing from the low-side MOSFETs, users will need to amplify the output signal. Here are some products that users may be interested in:

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/14874">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/3/1/5/1/14874-SparkFun_Configurable_OpAmp_Board_-_TSH82_-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">SparkFun Configurable OpAmp Board - TSH82</h3>
				</a>
				BOB-14874
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/116">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/0/6/00116-02-L.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Break Away Headers - Straight</h3>
				</a>
				PRT-00116
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/14681">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/2/8/8/3/14681-SparkFun_Beginner_Tool_Kit.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">SparkFun Beginner Tool Kit</h3>
				</a>
				TOL-14681
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/9200">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/6/4/6/09200-Hobby_Knife-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Hobby Knife</h3>
				</a>
				TOL-09200
			</td>
		</tr>
	</table>

	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/14874">
		**SparkFun Configurable OpAmp Board - TSH82**<br>
		BOB-14874

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/3/1/5/1/14874-SparkFun_Configurable_OpAmp_Board_-_TSH82_-01.jpg)
		</figure></a>

		??? tip "New to jumper pads?"
			Check out our [Jumper Pads and PCB Traces Tutorial](https://learn.sparkfun.com/tutorials/664) for a quick introduction!
			<p align="center">
				<a href="https://learn.sparkfun.com/tutorials/664">How to Work with Jumper Pads and PCB Traces<br>
				<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/6/4/PCB_TraceCutLumenati.jpg" alt="Tutorial's thumbnail"></a>
			</p>
	
	-   <a href="https://www.sparkfun.com/products/116">
		**Break Away Headers - Straight**<br>
		PRT-00116

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/0/6/00116-02-L.jpg)
		</figure>
		</a>

	-   <a href="https://www.sparkfun.com/products/14681">
		**SparkFun Beginner Tool Kit**<br>
		TOL-14681

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/2/8/8/3/14681-SparkFun_Beginner_Tool_Kit.jpg)
		</figure></a>

		??? note "New to soldering?"
			Check out our [Through-Hole Soldering Tutorial](https://learn.sparkfun.com/tutorials/5) for a quick introduction!
			<p align="center">
				<a href="https://learn.sparkfun.com/tutorials/5">How to Solder: Through-Hole Soldering<br>
				<img src="https://cdn.sparkfun.com/c/264-148/assets/e/3/9/9/4/51d9fbe1ce395f7a2a000000.jpg" alt="Tutorial's thumbnail"></a>
			</p>
	
	-  <a href="https://www.sparkfun.com/products/9200">
		**Hobby Knife**<br>
		TOL-09200

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/6/4/6/09200-Hobby_Knife-01.jpg)
		</figure>
		</a>

	</div>



??? note "Jumper Modification"
	To modify the [jumper](hardware_overview/#jumper), users will need [soldering equipment](https://www.sparkfun.com/categories/49) and/or a [hobby knife](https://www.sparkfun.com/categories/379).

	!!! tip "New to jumper pads?"
		Check out our [Jumper Pads and PCB Traces Tutorial](https://learn.sparkfun.com/tutorials/664) for a quick introduction!
		<p align="center">
			<a href="https://learn.sparkfun.com/tutorials/664">How to Work with Jumper Pads and PCB Traces<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/6/4/PCB_TraceCutLumenati.jpg" alt="Tutorial's thumbnail"></a>
		</p>

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/9325">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/8/7/3/09325_9161-Solder_Lead_Free_-_100-gram_Spool-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Solder Lead Free - 100-gram Spool</h3>
				</a>
				TOL-09325
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/14228">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/2/1/7/3/14228-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Weller WLC100 Soldering Station</h3>
				</a>
				TOL-14228
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/14579">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/2/7/2/5/14579-Chip_Quik_No-Clean_Flux_Pen_-_10mL-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Chip Quik No-Clean Flux Pen - 10mL</h3>
				</a>
				TOL-14579
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/9200">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/2/6/4/6/09200-Hobby_Knife-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Hobby Knife</h3>
				</a>
				TOL-09200
			</td>
		</tr>
	</table>


	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/9325">
		**Solder Lead Free - 100-gram Spool**<br>
		TOL-09325

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/8/7/3/09325_9161-Solder_Lead_Free_-_100-gram_Spool-01.jpg)
		</figure></a>

	-   <a href="https://www.sparkfun.com/products/14228">**Weller WLC100 Soldering Station**<br>
		TOL-14228

		---
		
		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/2/1/7/3/14228-01.jpg)
		</figure></a>


	-   <a href="https://www.sparkfun.com/products/14579">
		**Chip Quik No-Clean Flux Pen - 10mL**<br>
		TOL-14579

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/2/7/2/5/14579-Chip_Quik_No-Clean_Flux_Pen_-_10mL-01.jpg)
		</figure></a>


	-   <a href="https://www.sparkfun.com/products/9200">
		**Hobby Knife**<br>
		TOL-09200

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/2/6/4/6/09200-Hobby_Knife-01.jpg)
		</figure>
		</a>
	</div>



??? note "Alternative Motor Connections"
	For users with less precise soldering skills, we recommend these wiring options as they are less dependent on hoe the leads to the motor are tinned. Additionally, user may find the alligator clips useful for motors with thicker wires.

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/9741">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/3/6/9/6/09741-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">IC Hook with Pigtail</h3>
				</a>
				CAB-09741
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/13191">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/0/3/2/6/13191-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Alligator Clip with Pigtail (4 Pack)</h3>
				</a>
				CAB-13191
			</td>
		</tr>
	</table>

	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/9741">
		**IC Hook with Pigtail**<br>
		CAB-09741

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/3/6/9/6/09741-01.jpg)
		</figure></a>

	-   <a href="https://www.sparkfun.com/products/13191">
		**Alligator Clip with Pigtail (4 Pack)**<br>
		CAB-13191

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/0/3/2/6/13191-01.jpg)
		</figure>
		</a>

	</div>



??? note "Alternative Power Source"
	Here are alternative battery options to power the TMC6300 motor driver. These batteries should be in the operation voltage range for the gimbal motor (just set the max charge to 8V). Additionally, they are capable of supplying more than the maximum current draw of the TMC6300.

	<table class="pdf">
		<tr>
			<td>
				<a href="https://www.sparkfun.com/products/16793">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/1/5/7/0/2/16793-SkyRC_IMAX_B6_V2_Balance_Charger_-_Discharger-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">SkyRC IMAX B6 V2 Professional Balance Charger / Discharger</h3>
				</a>
				PRT-16793
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/11856">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/8/2/5/2/11856-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Lithium Ion Battery - 2200mAh 7.4v</h3>
				</a>
				PRT-11856
			</td>
			<td>
				<a href="https://www.sparkfun.com/products/11855">
					<center>
					<img src="https://cdn.sparkfun.com/r/140-140/assets/parts/8/2/5/1/11855-01.jpg" alt="Product Thumbnail">
					</center>
					<h3 class="title">Lithium Ion Battery - 1000mAh 7.4v</h3>
				</a>
				PRT-11855
			</td>
		</tr>
	</table>

	<div class="grid cards hide col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/16793">
		**SkyRC IMAX B6 V2 Professional Balance Charger / Discharger**<br>
		PRT-16793

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/5/7/0/2/16793-SkyRC_IMAX_B6_V2_Balance_Charger_-_Discharger-01.jpg)
		</figure></a>

	-   <a href="https://www.sparkfun.com/products/11856">
		**Lithium Ion Battery - 2200mAh 7.4v**<br>
		PRT-11856

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/8/2/5/2/11856-01.jpg)
		</figure></a>
	
	-   <a href="https://www.sparkfun.com/products/11855">
		**Lithium Ion Battery - 1000mAh 7.4v**<br>
		PRT-11855

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/8/2/5/1/11855-01.jpg)
		</figure></a>

	</div>



??? note "DC Motor Example"
	For users who wish to try out the H-bridge/DC motor example, they will also need a DC motor:

	<div class="grid cards col-4" markdown>

	-   <a href="https://www.sparkfun.com/products/21245">
		**Hobby Gearmotor - 140 RPM**<br>
		ROB-21245

		---

		<figure markdown>
		![Product Thumbnail](https://cdn.sparkfun.com/assets/parts/1/4/2/9/5/21245-_ROB_DG01D_48_1_Gearmotor-_01.jpg)
		</figure></a>

	</div>





## :material-bookshelf:&nbsp;Suggested Reading

As a more sophisticated product, we will skip over the more fundamental tutorials (i.e. [**Ohm's Law**](https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law) and [**What is Electricity?**](https://learn.sparkfun.com/tutorials/what-is-electricity)). However, below are a few tutorials that may help users familiarize themselves with various aspects of the board.


<table class="pdf">
	<tr>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/72">Electric Power<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/7/2/PowerThumb.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/18">Connector Basics<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/c/d/6/9/4/511421f8ce395f687e000007.jpg" alt="Tutorial Thumbnail"></a>
		</td>
        <td align="center">
			<a href="https://learn.sparkfun.com/tutorials/41">Working with Wire<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/0/5/0/0/f/5138de3cce395fbb1b000002.JPG" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/36">How to Power a Project<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/3/6/Bench_Power_Supply.jpg" alt="Tutorial Thumbnail"></a>
		</td>
    </tr>
	<tr>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/26">What is a Circuit?<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/2/6/Concept_Tutorial_Images-03.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/115">Alternating Current (AC) vs. Direct Current (DC)<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/1/5/acDC.jpg" alt="Tutorial Thumbnail"></a>
		</td>
        <td align="center">
			<a href="https://learn.sparkfun.com/tutorials/75">Polarity<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/5/4/1/e/0/5193d2adce395f3d7a000001.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/62">Logic Levels<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/2/Input_Output_Logic_Level_Tolerances_tutorial_tile.png" alt="Tutorial Thumbnail"></a>
		</td>
	</tr>
    <tr>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/126">Installing the Arduino IDE<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/1/arduinoThumb.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/51">Installing an Arduino Library<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/b/e/4/b/2/50f04b99ce395fd95e000001.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/194">How to Solder: Through-Hole Soldering<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/e/3/9/9/4/51d9fbe1ce395f7a2a000000.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/8">How to Work with Jumper Pads and PCB Traces<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/6/4/PCB_TraceCutLumenati.jpg" alt="Tutorial Thumbnail"></a>
		</td>
	</tr>
	    <tr>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/61">Motors and Selecting the Right One<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/4/c/6/4/7/52a22672757b7f511d8b456b.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/15">Pulse Width Modulation<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/f/9/c/8/a/512e869bce395fbc64000002.JPG" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/5">How to Use an Oscilloscope<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/c/9/d/6/8/52f13f17ce395ff8328b456b.jpg" alt="Tutorial Thumbnail"></a>
		</td>
		<td align="center">
			<a href="https://learn.sparkfun.com/tutorials/664">Serial Communication<br>
			<img src="https://cdn.sparkfun.com/c/264-148/assets/7/d/f/9/9/50d24be7ce395f1f6c000000.jpg" alt="Tutorial Thumbnail"></a>
		</td>
	</tr>
</table>


<div class="grid cards hide col-4" markdown align="center">

-   <a href="https://learn.sparkfun.com/tutorials/72">
	**Electric Power**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/7/2/PowerThumb.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/18">
	**Connector Basics**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/c/d/6/9/4/511421f8ce395f687e000007.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/41">
	**Working with Wire**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/0/5/0/0/f/5138de3cce395fbb1b000002.JPG)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/36">
	**How to Power a Project**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/3/6/Bench_Power_Supply.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/26">
	**What is a Circuit?**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/2/6/Concept_Tutorial_Images-03.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/115">
	**Alternating Current (AC) vs. Direct Current (DC)**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/1/5/acDC.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/75">
	**Polarity**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/5/4/1/e/0/5193d2adce395f3d7a000001.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/62">
	**Logic Levels**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/2/Input_Output_Logic_Level_Tolerances_tutorial_tile.png)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/61">**Installing the Arduino IDE**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/1/arduinoThumb.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/15">**Installing an Arduino Library**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/b/e/4/b/2/50f04b99ce395fd95e000001.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/5">
	**How to Solder: Through-Hole Soldering**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/e/3/9/9/4/51d9fbe1ce395f7a2a000000.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/664">
	**How to Work with Jumper Pads and PCB Traces**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/6/6/4/PCB_TraceCutLumenati.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/126">
	**Motors and Selecting the Right One**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/4/c/6/4/7/52a22672757b7f511d8b456b.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/51">
	**Pulse Width Modulation**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/f/9/c/8/a/512e869bce395fbc64000002.JPG)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/194">
	**How to Use an Oscilloscope**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/c/9/d/6/8/52f13f17ce395ff8328b456b.jpg)
	</figure></a>

-   <a href="https://learn.sparkfun.com/tutorials/8">
	**Serial Communication**

	---
	
	<figure markdown>
	![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/7/d/f/9/9/50d24be7ce395f1f6c000000.jpg)
	</figure></a>


</div>

??? info "Need to control a different type of motor?"
	This tutorial is primarily focused on utilizing the TMC6300 motor driver to control a 3-phase brushless DC (BLDC) motor. While the versatility of this chipset allows for the control of other motor types, we would recommend less experienced users to explore products designed for those specific motors or actuators. Below, are additional product tutorials and resources for our other actuator and motor types:

	=== "Brushed DC Motors"

		<div class="grid cards col-4" markdown align="center">

		-   <a href="https://learn.sparkfun.com/tutorials/934">
			**Hookup Guide for the Qwiic Motor Driver**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/9/3/4/15451-SparkFun_Qwiic_Motor_Driver-01.jpg)
			</figure></a>

		-   <a href="https://learn.sparkfun.com/tutorials/526">
			**TB6612FNG Hookup Guide**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/5/6/2/13845-02.jpg)
			</figure></a>
		
		</div>


	=== "Stepper Motors"

		<div class="grid cards col-4" markdown align="center">

		-   <a href="https://learn.sparkfun.com/tutorials/1200">
			**SparkFun ProDriver Hookup Guide**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/2/0/0/example8_demo.gif)
			</figure></a>

		-   <a href="https://learn.sparkfun.com/tutorials/210">
			**Easy Driver Hook-up Guide**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/2/4/1/EasyDriver_Angled.jpg)
			</figure></a>
		
		</div>


	=== "Servos"

		<div class="grid cards col-4" markdown align="center">

		-   <a href="https://learn.sparkfun.com/tutorials/1109">
			**Basic Servo Control for Beginners**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/1/1/0/9/Basic_Servo_Guide_Demo.gif)
			</figure></a>

		-   <a href="https://learn.sparkfun.com/tutorials/526">
			**Hobby Servo Tutorial**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/5/2/6/servo_6.jpg)
			</figure></a>
		
		-   <a href="https://learn.sparkfun.com/tutorials/910">
			**Pi Servo pHAT (v2) Hookup Guide**

			---
			
			<figure markdown>
			![Tutorial Thumbnail](https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/9/1/0/Assembly_Servo.gif)
			</figure></a>
		
		</div>
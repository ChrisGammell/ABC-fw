# ABC-fw
Firmware for the ABC board. 

## Installation and usage 

How to get an ABC board working:

1. Install Zephyr stuff (steps 1-4): https://buff.ly/3ohvK42
2. west init -m https://github.com/ContextualElectronics/ABC-fw.git
3. west update
4. west build -p auto -b contextualelectronics_abc abc_fw/samples/blinky/
5. west flash
6. Revel in an ABC board happily blinking at you

Note: This can be installed in a "fw" directory at the top level of an "ABC" directory, or similar. A normal directory looks like this

* ABC
  * fw
  * hw

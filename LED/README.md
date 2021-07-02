## 7/2/2021 - LED Editing
### Goal: Be able to change the VESC's native LED lights from the VESC tool terminal

Three main files in veddeb/bldc
- ledpwm.c - nothing to edit here, but will need to be added to terminal.c so it can access the relevant LED functions
- terminal.c - here create new custom commands that can be accessed from the VESC tool terminal.
- main.c - will need to disable the fault_check LED blink functions, as they will set the red led to off (intensity = 0.0) at every cycle.

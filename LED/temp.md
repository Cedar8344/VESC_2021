- changed files

terminal.c --> added new commands (blink [light] [number of blinks]), defaults to red, 10 blinks


alter hwconf/hw_stormcore.... 100d.c
 make it so that the blue light can also blink?
 
 make a cusom plot:
 https://vesc-project.com/node/1066
 
 
 Changelog:
 ledpwm.c/h - added the ledpwm_get_onoff function
    should return 1 if on, 0 if off

terminal.c --> makeplot command

# Andromeda SITL repo

## How to use
Clone the repository with submodules <br />
`git clone --recurse-submodule https://github.com/NicholasCL1994/prisma-lab/PX4_tilting_multicopters.git`

## Run the simulation

To fly Andromeda you will need the following softwares installed:
 - QGroundControl (QGC)
 - gamepad-tool 

## To get QGC on ubuntu, run:
`wget https://d176tv9ibo4jno.cloudfront.net/latest/QGroundControl.AppImage` \\
`chmod +x QGroundControl.AppImage` \\
`./QGroundControl.AppImage`

## RC Controller Mapping
The axis might be incorrectly mapped by QGC. If that is the case, you can follow the instructions next: download the gamepad-tool from https://generalarcade.com/gamepadtool/ . 
With your controller plugged to your computer (e.g. via USB), open the gamepad-tool and 'Create A New Mapping'. After finishing, you should be able to see your mapping in the console. 
Now you should 'Set Mapping As Environment Variable'. Close the tool and reboot your computer.
To make sure your mapping is set as environment variable you can `echo $SDL_GAMECONTROLLERCONFIG`.  

## Gazebo simulation
Finally, to run the gazebo simulation with Andromeda, go to PX4 main directory and run on the terminal:
`make px4_sitl gazebo_baby_k`

Remember that QGC should be running together with gazebo simulation, it is the interface between you and the simulation. There you can check the mapping under 'Vehicle Setup -> Joystick'


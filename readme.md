This is a basic console cricket game with 5 players in a match



The format of the match is like end-user VS CPU following hand-cricket style rules.



The end user can build a team of his/her own or do auto select

the team.



No of overs and no of matches to be played is based on user input.





------------------------------------------------------------------------------------

***Rules:***

------------------------------------------------------------------------------------

During Batting:



User is prompted to enter a number between 0 to 6

CPU will also generate a number in the same range



If both the numbers are same , its a wicket else the user input will

be counted as runs.



During Bowling:



User is prompted to enter a number between 0 to 6

CPU will also generate a number between 0 t0 6

If both the numbers are same , its a wicket else the CPU input will

be counted as runs



--------------------------------------------------------------------------------------



Sample output while running the Cricket.exe is attached for reference



**Build Setup:**



CMakeLists.txt provided and using Microsoft Visual Studio environment

build done and executable generated as Cricket.exe in the build\\Debug 

folder



Give the following command in the windows with MS visual studio environment



1.Command to generate build environment



*cmake .. -G "Visual Studio 17 2022"* 



2\. Command to build the source code

*cmake --build .*








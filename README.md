# max-product

This is a function that accepts an input file containing sequences of integers. Each sequence starts on a new line, may continue on several subsequent lines, contains at most 100 numbers, and ends with the number -999999 (which is not part of the sequence).

The function outputs to the screen the maximum contiguous sub-sequence product of up to 3 numbers for each sequence, one output per line. A contiguous sub-sequence is a sequence of 1, 2, or 3 numbers that are consecutive in the input. It returns the maximum of all the outputs.

Sample input:<br>
1 2 3 -999999<br>
-5 -2 2 -30 -999999<br>
6 9 -10 1 -999999<br> 
-8 -999999<br>

Sample output:<br>
6<br>
120<br>
54<br>
-8<br>
The overall max product is: 120<br>

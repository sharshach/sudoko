# SUDOKO
## Solution
This is a simple C code to solve a 9x9 sudoko.
want to know about sudoko you can simply search in web..

1->		run the c code (sudoko.c) in a c compiler
2->		*input format*
			enter the known digits as space separated integers
			unknowns are to be placed with 0
			(use a new line after every 9 digits for better understanding)
		*Refer input.txt for better understanding*

You can enter input at running or use input.txt file from a terminal which has gcc instaled


## Solution verifier
run ```g++ SudokoVerifier.cpp -lpthread``` and then ```./a.out```

The solution verifier uses three threads one to verify columns and inr for rows and one for grids


## Conclusion
- Threads are not performing as expected as the overall complexity is very low
- may be on higher complexities threads works fine

## note 
- My solution wont give proper answers always.
- proper solution is made only if a normal person can solve with logic and without any guessing and back tracking



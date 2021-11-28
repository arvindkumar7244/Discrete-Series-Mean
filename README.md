# Discrete-Series-Mean
Program to Calculate Mean of Discrete Series

# Algorithm

#### Remarks
Here , one dimensional array X is used to store n values X1, X2 ,...., Xn of variable X. One dimensional array F of size n is used to store corresponding n values f1, f2,...., fn of frequencies and arithmetic mean is calculated by formula

mean = Σfx / N , where N = Σf.

#### start

  read : n
  
  for i = 1 to n by 1 do :
    
    read : Xi, Fi
  
  endfor
  
  set sum=0
 
  set sf=0

  for i=1 to n by 1 do :
    
    set sum = sum + Xi * Fi
    
    set sf = sf + Fi
  
  endfor
  
  set am = sum / sf
  
  write : "Arithmetic Mean = ",am

#### exit

# Output

How many elements are there? :8

Enter elements & frequencies : 0   14

1   21

2   25

3   43

4   51

5   40

6   39

7   12

Mean is : 3.76327




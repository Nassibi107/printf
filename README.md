# printf

# storage classes

A storage class defines the scope (visibility) and life-time of variable and/or functions within a C program.
these specifiers precede the type that they  modify.
<p align ="center"> storage-class type indentifier <p>

<h3> we have four different storage classes : <h3>
  
 1 ) auto \
 2 ) register \
 3 ) extern \
 4 ) static  

  1 ) auto storage-class specifier decake
>> auto storage-class specifier declares an automatic (local) variable.
>> this the default storage class for variables declared inside a function or a block.
>> by default evry local variable is declared as auto hence adding autp keyword is pointless
<p align ="center"> auto data_type variable_name <p>

  2 ) register
>> the register storage class is used to define local variabkes that should be stored in a register of the microprocessor if a free register is avialabe instead of RAM
>> if a free register is not available,then stored in the memory only.
>> this makes the use register variable to be much faster than that of the variables strod in nemory.
>> in addtion, we can't store all our variables in registers because register size comparably very small to that RAM
>>> !! and interesting point to be noted here is that we cannot obtain the adderss of a register variable using poiters
<p align ="center"> register  data_type variable_name <p>

3 ) extern

>> All function declartion are considerd as "extern" by default so there need to specify it explicitly.
>> you can use extern with global variable for use it in many files *.c
<p> <p align ="left"> <h5>file 1 :<h5>
  <h5>#include stdio.h<h5> void fun(){ printf("hy")} <p>
  <p align ="right"> <h5>file 2 :<h5><h5>extern void fun(); <h5>
    int main() {fun()} <p></p>

<p> <p align ="left"> <h5>file 1 :<h5>
  <h5>#include stdio.h<h5> int Globa var = 5 <p>
<p align ="right"> extern int Globa_var ;  <p></p>


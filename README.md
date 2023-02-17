# Rudelang

Rudelang is a general-purpose programming language designed for the CS 315 - Programming Languages class. It's aim is to provide a
easily understandable syntax for those who are particularly experienced with programming. The main purpose of the language is to work 
with IoT (Internet of Things) devices. To increase the **writability** of the language, we provided built-in functions such as **readSensorData()**
, **sendDataToUrl()**, **toggleSwitch()**, etc. By providing these functions, we wanted the programmer learning this language to easily get into
their work without worrying about the underlying implementation of such functions that require the knowledge of networking. The other main design
principle was readibility. The syntax of the language was designed in a way that is resembles popular programming languages like Java and C++. Use of
curly brackets is enforced to increase the readibility of the language as it offers a single way to achieve a certain task - creating a block. 


## Tools used
[https://minnie.tuhs.org/cgi-bin/utree.pl?file=4BSD/usr/src/cmd/lex](Lex) was used to create the tokens of the language, that is which sequences of characters 
were accepted as part of the language and which were not. [https://www.tuhs.org/cgi-bin/utree.pl?file=V6/usr/source/yacc](Yacc) was used to generate the set of grammatical rules of the language, which creates the syntax of the language accompanied with Lex.
 
## Main Design Principles
### Readability 
In Rudelang, we did not allow symbols while naming identifiers. We recognized that C-type programs implemented a great rule of not allowing symbols except for underscore (\_) and dollar sign ($). However, we thought this rule could be improved by not allowing any symbols while naming identifiers. To elaborate, we recognized that the conventional use of the underscore (\_) symbol is to distinguish private and public identifiers. As Rudelang does not involve public and private keywords, we decided against allowing it. Also, the dollar sign is conventionally used for specifying class names declared under a class. Likewise, Rudelang does not introduce the notion of classes, and we decided that the dollar sign convention was not useful for our language.


Moreover, we introduced a new keyword, “pls” for function calls. Commonly used C-type programming languages, such as Java, C and C++, do not involve a keyword for function calls, and we believe this reduces the readability of the code. In these types of languages, a programmer may mistakenly read a function as a variable, or vice versa. However, in our language, a programmer can locate the function calls by tracking the use of the keyword “pls”.


On the contrary of some languages that do not implement curly brackets to define the scope of conditional statements and loops, we force the programmers to use curly brackets. Having only one consistent way of writing these language constructs increases readability by creating a consistent form for these statements.  For example, in Java, if and for statements that have only one statement can be written without the use of curly brackets; however, this reduces readability. That is why we decided not to implement it to improve the readability of our own language.


The symbols for the comment block are chosen in a way that they will resemble an opening and closing pair, making the comments more readable.
We have a keyword that defines where the program ends. That keyword is called “endpls”. This keyword is introduced to increase readability by giving the programmer a pointer that points to where the program ends.

### Writability	
We support all combinations of conditional expressions in Rudelang, which gives the user of this programming language the ability to check for any number of conditions. For example, a user might want to read multiple sensor data and command the device to turn a switch on when a condition including all of these sensor data is met. To allow such operations, we allowed any kind of expression that returns a boolean value to be a part of the conditional expression. This includes boolean literals, variables that return true or false, functions that return true or false, and arithmetic comparisons. We can combine each of these via the use of logical operators. Also, having the option for multiline comments increases the writability of the comment block.
We provided various built-in functions, such as readSensorData(sensorType). We also have readSensorData(sensorType, frequency) to increase writability as we allow the users to specify the desired frequency for sound sensors. However, this causes a drop in reliability since if the user does not specify a frequency but still wants to read the sound sensor, they will be presented with a default frequency. 

### Reliability
We require using curly brackets in loops, conditional statements, and function definitions. Doing so removes the confusion around one-line loops, conditional statements, and functions. If we were to let doing these in one line, the user of the language might have forgotten to place curly brackets. In such a case, only the line after the statement would be executed, and the program would produce unreliable results.
	
  
Since Rudelang is a special-purpose programming language to program IoT nodes, we created data types like long and double which can store larger numbers compared to int and float. This reduces the chance of overflow and unexpected results related to overflowing. Therefore, we increase the reliability by creating the same result on any kind of arithmetic expression.


Moreover, we added the keyword “pls” to introduce another level of reliability where the function calls would be preceded with a keyword, and the code functions as the programmer intended.

## How Precedence is Handled

“Logical and” and “logical or” operations have a precedence relation between each other, where “logical and” is always handled before “logical or”. We handled this case by using layers in our BNF description and yacc file. Logical operations were described inside conditional expressions in the BNF.
Conditional expressions include logical expressions, relational expressions, and arithmetic expressions. We layered each of these expressions in a way to handle precedence. The first layer includes logical expressions. Logical expressions are divided into two layers. This allows us to give precedence to AND operation over OR operation. 
The structure of arithmetic expressions is similar to logical expressions. The multiplication operation is given precedence over the addition operation by putting the multiplication in a layer embedded within the addition operation. Also, the definition of arithmetic expressions is left-associative, which handles division and subtraction correctly.
	

## Origin of the name
The name is the combination of the words "**rude**" and "**lang**uage." We decided to call it "rude" as a juxtaposition because the name of the language and the language's syntax creat a contradiction when theye are put side by side, since the syntax of the language enforces the programmer to be kind by using the pre-defined "pls" keyword when calling a function.


## Group Members
- Selim Can Güler 
- Tolga Özgün

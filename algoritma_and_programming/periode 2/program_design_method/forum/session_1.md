Theory Understanding
please describe the differences on Top-down development, Modular design, and object oriented programming, and can they be used together e.t top-down >< modular, modular >< object oriented , or top-down >< object oriented? explain if they can. 

Solution:
- Top-down development : top-down approach focuses on breaking large tasks into smaller tasks (subtasks). The process is repeated to smallest possible, after that the programmer can complete the subtasks one by one until the final target is reached .

- Modular Design : Similar with top down, modular design breaks down the entire problem into multiple approach that depend on each other and can be used repeatedly as needed

- Object Oriented Programming : oop approach treat all problems based on characteristics and make them as objects which can include data and functions.

In my opinion there is a possibility to combine all the Top-down development, Modular design, and Object oriented programming. but of course it depending on the complexity problem, is it really needed to use all of it? or is it possible to only use one of it. for the best practice itself use oop when there is a fixed set of operations on things and functional when there is a fixed set of things but unknown operations,

2. Case Exercise
In your understanding about the steps in program development, please give an example with a real life case then implement the first four from seven basic step in the development program.

Problem: Calculating the grade of final score 

Problem: all students want to know their grades for the subject

Define the problem

1. Input: nilaiHadir,nilaiTugas,nilaiQuiz,nilaiForum,nilaiUAS 

2. Output: the system displays the final grade of all calculated score

3. Process: create a program to input all the score input (nilaiHadir,nilaiTugas, etc) and display the grade of student overall score

Outline the solution

Create an input program to receive nilaiHadir,nilaiTugas,nilaiQuiz,nilaiForum,nilaiUAS . Calculate it based on the percentage on each score. Grade the overall score according to the rules and Display the final grade

Develop outline to algorithm

int nilaiHadir, nilaiTugas, nilaiQuiz, nilaiForum, nilaiUAS

calculateScore(nilaiHadir, nilaiTugas, nilaiQuiz, nilaiForum, nilaiUAS)

calculateGrade(overallScore)

end

Test the algorithm for correctness  

the algorithm runs successfully to display grade
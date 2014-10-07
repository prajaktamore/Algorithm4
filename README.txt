Name: Prajakta More
BNumner: B00417755
BMail: pmore2@binghamton.edu

***********************************************************************************
To Compile:
$ cc -c more_pa4.c

$ cc -o more_pa4 more_pa4.c

To Run:
$ ./more_pa4


***********************************************************************************
Note: All three algorithms i.e. Brute Force, Greedy Algorithm (4 different types) and Dynamic Programming algorithms are written in the single file.

On running the program output for all the algorithms is displayed so that it is easy to run and compare at the same time.

***********************************************************************************
Sample Output:

Selected random number of vertices is: 5

 profit[0] = 17  weight[0] = 9
 profit[1] = 10  weight[1] = 19
 profit[2] = 14  weight[2] = 8
 profit[3] = 28  weight[3] = 12
 profit[4] = 14  weight[4] = 10

Capacity=34
===============================Brute Force==========================


 capacity=34

Maximum capacity for this set is 0

        Node selected:0 profit:17 weight:9

Maximum capacity for this set is 17

        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 10

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 14

        Node selected:0 profit:17 weight:9
        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 31

        Node selected:1 profit:10 weight:19
        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 24

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 28

        Node selected:0 profit:17 weight:9
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 45

        Node selected:1 profit:10 weight:19
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 38

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:2 profit:14 weight:8
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 42

        Node selected:0 profit:17 weight:9
        Node selected:2 profit:14 weight:8
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 59

        Node selected:1 profit:10 weight:19
        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 24

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 14

        Node selected:0 profit:17 weight:9
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 31

        Node selected:1 profit:10 weight:19
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 24

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:2 profit:14 weight:8
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 28

        Node selected:0 profit:17 weight:9
        Node selected:2 profit:14 weight:8
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 45

        Node selected:1 profit:10 weight:19
        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 24

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:3 profit:28 weight:12
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 42

        Node selected:0 profit:17 weight:9
        Node selected:3 profit:28 weight:12
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 59

        Node selected:1 profit:10 weight:19
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 38

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27

        Node selected:2 profit:14 weight:8
        Node selected:3 profit:28 weight:12
        Node selected:4 profit:14 weight:10

Maximum capacity for this set is 56

        Node selected:0 profit:17 weight:9
        Node selected:2 profit:14 weight:8
        Node selected:3 profit:28 weight:12

Maximum capacity for this set is 59

        Node selected:1 profit:10 weight:19
        Node selected:2 profit:14 weight:8

Maximum capacity for this set is 24

        Node selected:0 profit:17 weight:9
        Node selected:1 profit:10 weight:19

Maximum capacity for this set is 27


final max = 59

 The maxProfit is :  59

====================================================================

===============================Greedy Method========================


 capacity=34

 ----------Greedy Method Maximum Benefit First-----------
 Profit: 28 Weight:12
 Profit: 17 Weight:9
 Profit: 14 Weight:8
 Profit: 14 Weight:10
 Profit: 10 Weight:19
Maximum profit:59

 ------------------------------------------------------------

 capacity=34

 ----------Greedy Method Minimun Weight First-----------
 Profit: 14 Weight:8
 Profit: 17 Weight:9
 Profit: 14 Weight:10
 Profit: 28 Weight:12
 Profit: 10 Weight:19
Maximum profit:45

 ------------------------------------------------------------

 capacity=34

 ----------Greedy Method Maximum Weight First-----------
 Profit: 10 Weight:19
 Profit: 28 Weight:12
 Profit: 14 Weight:10
 Profit: 17 Weight:9
 Profit: 14 Weight:8
Maximum profit:38

 ------------------------------------------------------------

 capacity=34

 ----------Greedy Method Maximum Benefit Per Unit-----------
 BenefitPerUnit:2       Profit:28       Weight:12
 BenefitPerUnit:1       Profit:14       Weight:8
 BenefitPerUnit:1       Profit:17       Weight:9
 BenefitPerUnit:1       Profit:14       Weight:10
 BenefitPerUnit:0       Profit:10       Weight:19

Maximum profit:59

 ------------------------------------------------------------
====================================================================

===============================Dynamic Programming==================


Maximum Profit is 59
Weights:  12 8 9
Profit :  28 14 17


====================================================================

Process returned 0 (0x0)   execution time : 0.349 s
Press any key to continue.


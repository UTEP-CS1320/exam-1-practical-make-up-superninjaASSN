# Exam 1: Practical (Make-Up)

This Practical Exam has three problems. These are found inside an if statement, used to select each problem. Below you will find the description of what you have to do for each problem, as well as the grading rubric for each.

The `main.c` file contains code that can help you check each problem when you press the "Run" button.

Remember: you are allowed to check back on zyBooks in case you forgot how to do certain things.

**Make sure to comment and format your code!** Unclear code in the actual exam will be penalized.

**This exam must be done individually.** You are allowed to use external resources, such as zyBooks, to help remind you how certain things work, but otherwise your code must be as original as you can make it. *Copying someone else's code entirely is not going to help you truly learn anything*, in addition to being a potential case for Academic Dishonesty, which we treat very, *very* seriously in this course.

### Grade Breakdown

Problem | Points Possible
--------|----------------
P1: Blood Pressure | 15
P2: Pokemon Damage | 30
P3: Shop | 15
**Total** | 60

## Problem 1: Blood Pressure

Do you know about [Blood Pressure](https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings)? It is one of those measurements you get at a clinic or the hospital, and is used to monitor your cardiovascular health. Hypertension can be a sign of many issues, so it is important to identify whether a reading belongs to one of multiple categories.

Blood pressure is measured with two numbers: Systolic Pressure, or the pressure when the heart pumps blood through the arteries, and Diastolic Pressure, which is the pressure of the blood in between heartbeats. The following chart, taken from [The American Heart Association website](https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings), shows the measurements and the categories they belong to:

**CATEGORY** | **SYSTOLIC** | | **DIASTOLIC**
-------------|--------------|-|--------------
Normal | < 120 | and | < 80
Elevated | 120-129 | and | <80
Stage 1 Hypertension | 130-139 | or | 80-89
Stage 2 Hypertension | >= 140 | or | >= 90
Hypertensive Crysis | >= 180 | and/or | >= 120
ERROR | <= Diastolic | and/or | >= Systolic

Inside `main.c` you will find code that compiles and runs normally, but its output does not match the table above.

You have to correct it, making sure it compiles, runs, and functions exactly as expected.

#### Grading Rubric

Rubric | Points
-------|--------
Code is clean, passes all automated tests | 15
Code is a little messy, fails some tests | 10
Code has serious issues (i.e. does not compile) | 5
No functional changes from original code | 0

## Problem 2: Pokemon Damage

In case you didn't know, Pokemon is a very famous videogame that involves capturing cute monsters and using them to fight against each other (Why? It's based on [insect fighting](https://en.wikipedia.org/wiki/Insect_fighting), which is a thing that does happen!)

Being a videogame, a lot of things are abstracted into numerical values. So, when Pokemon fight each other, they do a numerical value as damage. This numerical value is calculated using the following formula:

![Damage=((((2 * Level / 5) + 2) * Power * (A/D))/50 + 2) * Mod](https://i.imgur.com/lJq8EpV.png)

Your code will ask the following information, in that order:
1. **Pokemon Name**. A string with up to 30 characters.
2. Pokemon **Level**. An integer between 1 and 100.
3. **Attack Name** for the Attack being used by the Pokemon. A string with up to 30 characters.
3. **Power** of the Pokemon's specific attack. An integer between 20 and 130.
4. The **A**ttack value of the attacking Pokemon. An integer between 1 and 1000.
5. The **D**efense value of the defending Pokemon. An integer between 1 and 1000.
7. The **Critical** modifier is 1.5 if the attack is stronger than usual, 1.0 otherwise.
8. The **STAB** (Same Type Attack Bonus) is 1.5 if the attack matches the attacking Pokemon's Type, 1.0 otherwise.
9. The **Type** is the *type effectiveness*, which works like Rock Paper Scissors. For example, Grass Pokemon are weak to Fire Attacks but resistant to Water Attacks. This value can be either 0, 0.25, 0.5, 1, 2 or 4.

After getting all this information, your code must check that the values are valid according to the rules mentioned above. If any number entered is not valid (For example, a Level of 0, or 101), your code must output `INVALID INPUT` and exit the program.

If all the numbers are valid, you first must compute the **Mod** value from the above formula. This **Mod** is a multiplication of **Critical** \* **STAB** \* **Type**.

After computing the **Mod**, use the formula above to compute the **Total Damage** using *floating-point operations only*, then print the result like so:

1. Print `[Pokemon Name] used [Attack Name]!\n`. For example, `Bulbasaur used Vine Whip!\n` or `Pikachu used Tackle!\n`.
2. If the **Modifier** is 0, print `It has no effect.` and exit the program.
3. If the **Modifier** is 0.25 or 0.5, print `It's not very effective...`.
4. If the **Modifier** is 2 or 4, print `It's super effective!`.
5. If the **Critical** value is greater than 1, print `A critical hit!`.
6. Print `Total: [Total Damage] Damage.\n`, where [Total Damage] is rounded down. For example, `Total: 54 Damage.\n`.
7. Exit the program

Your code must be written after the line that reads `//TODO: Your P2 code goes here`. Make sure to comment your code to make clear what you intend to do with it!

Rubric | Points
-------|--------
Code is clean and well commented, passes all automated tests | 30
Code is a little messy, fails some tests | 20
Code has serious issues (i.e. does not compile) | 10
Code is messy, uncommented, is far from complete | 5
No functional changes from original code | 0

## Problem 3: Store (*Extra Credit*)

For this problem, you must write a small program that uses loops to compute the bill at a store. It should be made according to the following algorithm:

1. Ask `How many items in your cart?\n`, and capture the number of items in the cart.
2. For each item, ask `What is the next item?\n` and capture one of four different items: `Chips`, `Soda`, `Candy`, `Gum`.
3. If the user typed `Chips`, increase the order **total** by 2.99.
4. If the user typed `Soda`, increase the order **total** by 1.49.
5. If the user typed `Candy`, increase the order **total** by 2.45.
6. If the user typed `Gum`, increase the order **total** by 0.99.
7. If the user typed anything else, print `Invalid item. Try again` and ask for that item again (Repeat steps 2-5 for this particular person).
9. After typing all the orders, print `Total: $ ` followed by the **total** with 2 digits.
10. Compute the order's **tax**. All items have a tax of 8%, *except for Chips, which have a tax of 10%*.
11. Print `Tax: $ ` followed by the **tax** with 2 digits.
12. Compute the order's **taxed_total** by adding the **tax** to **total**.
13. Print `Total (with Tax): $ ` followed by the **taxed_total** with 2 digits.

Your code must be written after the line that reads `//TODO: Complete the P3 code below`.

Rubric | Points
-------|--------
Code is clean, passes all automated tests | 15
Code is a little messy, fails some tests | 10
Code has serious issues (i.e. does not compile) | 5
No functional changes from original code | 0

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>Temperature Calculator Program in C++</h1>

<h2>About</h2>
<p>This is a simple temperature conversion program built in C++ that allows users to perform the following tasks:</p>
<ul>
    <li><strong>Standard Output</strong>: Display a temperature table showing the conversion of Fahrenheit to Celsius in a given range.</li>
    <li><strong>User-Specific Output</strong>: Convert temperature from Fahrenheit to Celsius or Celsius to Fahrenheit based on user input.</li>
</ul>

<h3>Features</h3>
<ul>
    <li>Interactive user interface with clear options for both standard and specific temperature conversion outputs.</li>
    <li>Provides flexibility to convert temperatures in both directions.</li>
    <li>Displays results in a clean tabular format for better readability.</li>
</ul>

<h2>What You'll Learn from This Program</h2>
<ul>
    <li><strong>Temperature Conversion</strong>: Learn the formulas and methods for converting between Fahrenheit and Celsius.</li>
    <li><strong>Control Flow</strong>: Understand how to use loops and conditional statements (<code>if</code>, <code>else</code>) for implementing the functionality.</li>
    <li><strong>Input/Output Handling</strong>: Learn how to take user inputs and output results with formatting using <code>cout</code>.</li>
    <li><strong>Function Usage</strong>: Gain experience with defining and using functions in C++.</li>
    <li><strong>Formatting Output</strong>: Learn to format output neatly, using <code>setprecision</code> for displaying decimal points.</li>
</ul>

<h2>File Hierarchy</h2>
<pre>
temperature-calculator/
├── temperature-calculator.cpp
</pre>

<h3>Files</h3>
<ul>
    <li><strong>temperature-calculator.cpp</strong>: The main program file that implements the temperature calculator. It contains:
        <ul>
            <li><code>standard_output()</code> function: Displays a temperature table for Fahrenheit to Celsius conversion.</li>
            <li><code>user_specific_output()</code> function: Allows the user to choose either Fahrenheit to Celsius or Celsius to Fahrenheit conversion.</li>
            <li><code>main()</code> function: The entry point of the program, which prompts the user for input and calls the appropriate function based on the option selected.</li>
        </ul>
    </li>
</ul>

<h2>How to Run</h2>
<ol>
    <li>Compile the C++ code using a C++ compiler.
        <pre>g++ temperature-calculator.cpp -o temperature-calculator</pre>
    </li>
    <li>Run the program:
        <pre>./temperature-calculator</pre>
    </li>
    <li>Follow the on-screen instructions to choose between displaying a standard temperature table or performing a specific conversion.</li>
</ol>

<h2>Sample Output</h2>

<h3>1. Standard Output</h3>
<pre>
[+]Enter Order value : 5
[+]Enter Lower Value : 0
[+]Enter Upper Value : 100

--- Temperature ---

+----------------------------+
| Fahrenheit       Celsius   |
+--------------|-------------+
|     0        |    -17      |
|     5        |    -15      |
|     10       |    -12      |
...
</pre>

<h3>2. User-Specific Output</h3>
<pre>
--- Available Options ---
+-----------------------------------------------------------+
| Press F to convert temperature from Fahrenheit to celsius |
| --------------------------------------------------------- |
| Press C to convert temperature from Celsius to Fahrenheit |
+-----------------------------------------------------------+

Enter Option : F
[+]Enter Temperature in Fahrenheit : 32

--- Result ---
+----------------------------+
|  Fahrenheit       Celsius  |
+--------------|-------------+
|     32       |    0       |
+----------------------------+
</pre>

<h2>Notes</h2>
<ul>
    <li>The program uses the <code>windows.h</code> library for <code>Sleep()</code> functionality to add pauses in the program's execution.</li>
    <li>The program expects valid input from the user. If invalid input is provided, an error message is displayed.</li>
</ul>

<h2>Author</h2>
<ul>
    <li><strong>Easter Maxwell</strong> (Oct 11, 2022)</li>
    <li><strong>Co-factor</strong>: The Young Programmer Nemonet (Nov 16, 2022)</li>
</ul>

<h2>License</h2>
<p>This project is open-source and free to use.</p>

</body>
</html>

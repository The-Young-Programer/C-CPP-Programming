<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>Text-to-Format Magic</h1>

<p>This program lets you enter any text (including numbers and letters) and see it transformed into a formatted version where each letter and number is displayed in a cool ASCII art style.</p>

<h2>How it Works</h2>
<ol>
    <li>The program takes input in the form of text (letters and numbers).</li>
    <li>Each character of the text is converted into a pattern using ASCII art.</li>
    <li>The program then prints out the formatted text.</li>
</ol>

<hr>

<h2>Code Breakdown</h2>

<h3>Input</h3>
<p>The program first asks you to enter some text:</p>
<pre>
cout << "Enter some text or numbers and see magic:-" << endl;
cin.getline(str, 100);
</pre>

<h3>ASCII Art Display</h3>
<p>For each character, the program checks which one was entered and prints the corresponding ASCII art pattern. For example, when 'A' is entered, it prints:</p>
<pre>
case 'A':
    cout << "\n    #     ";
    cout << "\n   # #    ";
    cout << "\n  #####   ";
    cout << "\n #     #  ";
    cout << "\n#       #  ";
    cout << "\n \n ";
    break;
</pre>
<p>The program includes ASCII representations for both uppercase and lowercase letters, as well as numbers.</p>

<hr>

<h2>Example Output</h2>
<p>For input: <code>Hello 123</code></p>
<pre>
  #     #    #####   #######   ####    ###     ### 
 #  #   #   #    #   #     #  #    #    #     #     #  
######   ######    #######   #    #   ##    ##    ### 
   #    #    #   #    #     #  ####    #   ###     ## 
   #    ##    ##  #    ##   ######    ####     ###    
</pre>

<hr>

<h2>Features</h2>
<ul>
    <li><strong>Simple ASCII Art:</strong> Each character is represented with an easy-to-read format.</li>
    <li><strong>Supports both letters and numbers:</strong> Handles all uppercase and lowercase letters from A-Z and 0-9.</li>
</ul>

<hr>

<h2>How to Run</h2>
<ol>
    <li>Clone the repository to your local machine.</li>
    <li>Compile and run the program using a C++ compiler.</li>
</ol>
<pre>
g++ text_to_format.cpp -o text_to_format
./text_to_format
</pre>
<p>3. Enter any text, and enjoy the magic!</p>

<hr>

<h2>License</h2>
<p>This project is licensed under the MIT License - see the <a href="LICENSE.md">LICENSE.md</a> file for details.</p>

</body>
</html>

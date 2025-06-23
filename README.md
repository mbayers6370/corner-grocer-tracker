Corner Grocer Frequency Tracker

This is a simple C++ console program built for Chada Tech as part of a junior dev assignment. The goal: help a local grocery store analyze which produce items are being bought the most, so they can rearrange their layout for efficiency and customer flow.

What it does

Run it, and you get a 4-option menu:
	•	Search for how many times a specific item was bought
	•	Display a full list of items and their purchase counts
	•	View a histogram (because data should look cool too)
	•	Exit when you’re done

It reads from a file called groceries.txt, counts every item, and logs it all to a backup file named frequency.dat.

How to use it

Just compile and run. Make sure groceries.txt is in the same directory. The program generates frequency.dat automatically for backup and audit purposes.

g++ Project_Three.cpp -o grocer
./grocer

Files in this repo
	•	Project_Three.cpp — Main source file
	•	groceries.txt — Sample input file (produce purchases)
	•	frequency.dat — Output backup of item frequencies (auto-generated)

Why it matters

Sometimes simple tools solve real problems. This one helps optimize physical space based on actual purchase patterns. Small tech, big impact.

⸻

If you want to try it yourself, just grab the repo, run the executable, and start typing what you see on the shelves. Built with clarity and maintainability in mind. No nonsense.
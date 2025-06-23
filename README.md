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

# Corner Grocer Tracker

This C++ console application was built for the Corner Grocer to help analyze daily purchasing behavior by tracking how often specific grocery items are bought. The program reads an input file containing a list of items sold in chronological order and provides a simple menu interface for users to search item frequencies, display all item frequencies, or generate a histogram. It also creates a backup data file (`frequency.dat`) to preserve the results automatically upon loading. The goal was to support the grocer in reorganizing their produce section based on real purchase data.

## Reflection

**Summarize the project and what problem it was solving.**  
This project solves the problem of analyzing grocery store purchase records to identify which items are most commonly bought. It does this by reading from a plain text file and presenting frequency information to the user through a menu-driven interface. It helps businesses make layout or stocking decisions based on actual customer behavior.

**What did you do particularly well?**  
I think the architecture of the program turned out clean and intuitive. The logic is wrapped in a class (`GroceryTracker`) with well-named methods that do exactly what you'd expect. I also used `std::map` effectively to build a quick frequency lookup and ensured the program’s output is straightforward and readable. I commented each part of the code in my own voice to help anyone jumping in later understand what’s going on.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**  
I could break apart the file-handling logic into a separate utility class for better modularity. Adding exception handling would improve resilience and make the code more fault-tolerant in case of issues like missing files or malformed input. These changes would definitely make it easier to extend or repurpose the program in other contexts.

**Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**  
The most frustrating part was debugging why certain input items weren’t showing up properly in the frequency lookup. It turned out to be whitespace and hidden characters in the input file, which took a while to pinpoint. I leaned heavily on compiler feedback, online C++ documentation, and my AI assistant to test hypotheses until the problem was resolved.

**What skills from this project will be particularly transferable to other projects or course work?**  
Skills like parsing file input, using maps for frequency counts, implementing menu-driven logic, and validating user input will absolutely carry over to other programming contexts. This is a solid foundation for any kind of command-line application or data-parsing task.

**How did you make this program maintainable, readable, and adaptable?**  
I used consistent naming conventions, commented everything clearly, and avoided hard-coding any values that might change in the future. I also made the structure flexible—using a class and breaking tasks into discrete methods—so that future versions of the program can add more features without having to rewrite everything.

If you want to try it yourself, just grab the repo, run the executable, and start typing what you see on the shelves. Built with clarity and maintainability in mind. No nonsense.
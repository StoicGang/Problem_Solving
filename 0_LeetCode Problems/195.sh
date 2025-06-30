: '
Title:
195. Tenth Line

Problem:
Given a text file file.txt, print just the 10th line of the file.

Input:
- A text file named file.txt containing an arbitrary number of lines.

Output:
- The content of the 10th line of file.txt.
- If the file contains less than 10 lines, output nothing.

Constraints:
- The file may contain fewer than 10 lines.
- The solution should handle large files efficiently.

Approaches:

1. Using sed:
    - Command: sed -n '10p' file.txt
    - Complexity: O(N), where N is the number of lines up to 10 (stops after 10 lines).
    - Efficient for large files as it stops reading after the 10th line.

2. Using awk:
    - Command: awk 'NR==10{print; exit}' file.txt
    - Complexity: O(N), where N is the number of lines up to 10.
    - Efficient as it exits after printing the 10th line.

3. Using head and tail:
    - Command: head -n 10 file.txt | tail -n 1
    - Complexity: O(10), reads the first 10 lines regardless of file size.
    - Slightly less efficient for very large files, as head reads up to 10 lines before tail processes them.

4. Using a while loop in shell:
    - Reads the file line by line, counting lines until the 10th is reached.
    - Command:
        count=0
        while IFS= read -r line; do
            count=$((count + 1))
            if [ "$count" -eq 10 ]; then
                echo "$line"
                break
            fi
        done < file.txt
    - Complexity: O(N), where N is the number of lines up to 10.
    - Efficient as it stops reading after the 10th line.
Notes:
- All approaches output nothing if the file has fewer than 10 lines.
- These solutions are standard for Unix-like systems.
'
#sed -n '10p' file.txt
#awk 'NR==10' file.txt
count=0
while IFS= read -r line; do
    count=$((count + 1))
    if [ "$count" -eq 10 ]; then
        echo "$line"
        break
    fi
done < file.txt

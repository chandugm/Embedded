#6. Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.
#!/bin/bash
# Check if the correct number of arguments is provided
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <filename> <start_line> <end_line>"
    exit 1
fi

# Assign arguments to variables
FILENAME=$1
START_LINE=$2
END_LINE=$3

# Check if the file exists
if [ ! -f "$FILENAME" ]; then
    echo "File not found!"
    exit 1
fi

# Calculate the number of lines to extract
NUM_LINES=$((END_LINE - START_LINE + 1))

# Use head and tail to print lines between start_line and end_line
head -n "$END_LINE" "$FILENAME" | tail -n "$NUM_LINES"


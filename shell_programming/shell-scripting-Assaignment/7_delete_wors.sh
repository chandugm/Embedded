#7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it. use grep command
#!/bin/bash
# Check if at least two arguments are supplied (the word and at least one file)
if [ "$#" -lt 2 ]; then
  echo "Usage: $0 word file1 [file2 ... fileN]"
  exit 1
fi

# The word to be deleted
word=$1

# Shift the first argument to process the rest as files
shift

# Loop through all the supplied files
for file in "$@"; do
  # Check if the file exists
  if [ ! -f "$file" ]; then
    echo "File $file not found!"
    continue
  fi
  
  # Use grep to filter out lines containing the word and save the result to a temporary file
  grep -v "$word" "$file" > "${file}.tmp"
  
  # Move the temporary file back to the original file
  mv "${file}.tmp" "$file"
done

echo "Lines containing the word '$word' have been deleted from the specified files."


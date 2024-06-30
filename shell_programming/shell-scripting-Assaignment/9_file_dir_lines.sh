#9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.
#!/bin/bash

# Check if at least one argument is supplied
if [ "$#" -eq 0 ]; then
  echo "Usage: $0 file_or_directory1 [file_or_directory2 ... file_or_directoryN]"
  exit 1
fi

# Loop through all the supplied arguments
for item in "$@"; do
  if [ -f "$item" ]; then
    # If it's a file, report it and count the number of lines
    line_count=$(wc -l < "$item")
    echo "'$item' is a file with $line_count lines."
  elif [ -d "$item" ]; then
    # If it's a directory, report it
    echo "'$item' is a directory."
  else
    # If it's neither a file nor a directory, report it
    echo "'$item' is neither a file nor a directory."
  fi
done


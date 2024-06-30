#10.Write a shell script to list all of the directory files in a directory.
#!/bin/bash

# Check if the directory argument is supplied
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 directory_path"
  exit 1
fi

directory_path=$1

# Check if the supplied argument is a directory
if [ ! -d "$directory_path" ]; then
  echo "Error: '$directory_path' is not a directory."
  exit 1
fi

echo "Listing all directories in '$directory_path':"
echo "--------------------------------------------"

# Loop through all items in the specified directory
for item in "$directory_path"/*; do
  if [ -d "$item" ]; then
    echo "$item"
  fi
done

echo "--------------------------------------------"


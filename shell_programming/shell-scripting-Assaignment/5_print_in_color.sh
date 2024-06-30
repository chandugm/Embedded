#How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."
#!/bin/bash
# Define ANSI escape codes for formatting and colors
BOLD=$(tput bold)
BLINK=$(tput blink)
RESET=$(tput sgr0)

RESET_COLOR=$(tput setaf 33)
RED=$(tput setaf 1)
BROWN=$(tput setaf 130)

# Print "Hello World" in bold and blink effect, and in different colors
echo -e "${BOLD}${BLINK}${RED}Hello World${RESET_COLOR}"
echo -e "${BOLD}${BLINK}${BROWN}Hello World${RESET_COLOR}\e[0m"



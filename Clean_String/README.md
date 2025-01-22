## {CLEAN STRING}

The goal of the exercise is to write a function that takes a string as a parameter and cleans it.

Each word in the string must be separated by a single space and there should be no space at the beginning or end of the string.

Your string must contain a line break at the end('\n).

`Ex :`

`blaackmaan@DESKTOP-C04G58U: ./clean_string "abc cba abc cab cba" | cat -e`
`abc cba abc cab cb$`

`blaackmaan@DESKTOP-C04G58U: ./clean_string "   Je             mange du      riz    " | cat -e`

`Je mange du riz$`

`blaackmaan@DESKTOP-C04G58U: ./clean_string "$(echo -ne "\tHello\t\t how are you?\t ")" | cat -e`

`Hello how are you?$`


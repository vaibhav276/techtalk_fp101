## Phone number pretty printing
Given a phone number in string format, pretty print it as follows:
- If the phone number begins with a "+" symbol, ignore the first character and consider the remaining string
- If the phone number is not 10 characters long (11 incase it started with a "+"), then pretty print as "invalid"
- pretty print should print number as (country code) [area code] <actual number>
  - country code is the first 2 characters of the number
  - area code is the next 3 characters
  - actual number is remaining 5 characters
  
### Examples:
+9120467856 should be printed as "(91) [204] <67856>"
9120467856 should be printed as "(91) [204] <67856>"
97473 should be printed as "invalid"
9237483797473 should be printed as "invalid"

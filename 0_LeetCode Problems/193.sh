#!/bin/bash
# Title: Valid Phone Numbers
#
# Problem:
# - Read file containing phone numbers
# - Print valid phone numbers only
# - Valid formats:
#   * (xxx) xxx-xxxx
#   * xxx-xxx-xxxx
#
# Input:
# - File 'file.txt' containing phone numbers
# - Example lines:
#   987-123-4567
#   123 456 7890
#   (123) 456-7890
#
# Output:
# - Valid phone numbers, one per line
# - Example:
#   987-123-4567
#   (123) 456-7890
#
# Constraints:
# - File contains at most 100 lines
# - Each line contains phone number or invalid text
#
# Approaches:
# 1. Using grep with regex (Optimal)
#    - Match either format with regex
#    - Use extended regex for better readability
#    Time: O(n) where n is number of lines
#    Space: O(1)
#
# 2. Using awk/sed (Alternative)
#    - Process line by line
#    - Match against patterns
#    Time: O(n)
#    Space: O(1)

grep -E '^(\([0-9]{3}\) [0-9]{3}-[0-9]{4}$|^[0-9]{3}-[0-9]{3}-[0-9]{4})$' file.txt
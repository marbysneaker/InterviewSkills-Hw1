# InterviewSkills
Computer Science CS497
Homework 1

Exercise 1 algorithm
    For this problem we need to find two numbers in a given array that adds up to the target integer.
    First we run a for loop to iterate through the given array this for loop will set the every iterated numbers as our first number. 
    Then inside the initial for loop we run a nested for loop to find the our second number. The second for loop will start iterating as i+1 so it will always be ahead
    of the second for loop. After we get our two number we can then return the indexes by doing this return {i, j} or we can add these numbers to an array and return the     array. The time complexity for this is O(n^2)
    
Exercise 2 algorithm
    For this exercise we need to return the first and last index of our integer target in a given array.
    In order to obtain O(log n) time we need to use a binary search to get our first index of the given integer target. Then since the array is already sorted we can use     a while loop inisde our if condition to get all the same integers index once the while loop breaks we now have our second index meaning the last occurance of the         integer. We also need to take care of our edge cases such that if an array is empty we should return {-1, -1} and the array size is 1 and our target equals nums[1],
    then we must return {0,0}. Otherwise if our binary search exits withou returning the result array then we will return {-1,-1}. Time complexity is O(log n).
 
Exercise 3 algorithm
    For this exercise we need to merge two sorted arrays together and then find the median of the new array. First we need to create a new array to store both arrays         together. Then will use the some of the Merge sort algorithm in order to sort both arrays. We will then run 2 while loops in order to get the left over integers on       both arrays. To get the median we will check if the size of the new array is even or odd. If the size is odd then we can simply return the number in the middle.         Otherwise we will get the two integers in the middle of the array and get their average. Time complexity is O(n + m)
    
Exercise 4 algorithm
    Remove the Nth node from the end of a linked list. We tackle this problem buy first iterating through the whole linked list and getting our total count. We can         then use the given n integer to subtract from our total to give us the location of the node that needs deletion. We do this buy doing another iteration starting from    the head and ending at the node preivous to the node that needs to be deleted. At the end of the second iteration we connect that preivous node the node->next of the     node that needs to be deleted. Then we can simply return head. Time complexity is O(2n) = O(n).
    

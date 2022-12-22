# Date-distance
众所周知，日期有两种表示方法:MM/DD/YY或者YY/MM/DD.我们假设本题讨论的年份的格式都是20YY。  给你一个字符串，如果它只能代表一个合法的日期，满足MM/DD/YY的格式或者是YY/MM/DD的格式，那么输出 “month date,year”的格式（见第二个样例），否则输出在这两种表示法下的日期差（见第一个样例）。输入一个时间字符串，格式为AA/BB/CC。保证AA/BB/CC至少满足两种表示法其中之一。
As we all know, there are two ways to represent dates: MM/DD/YY or YY/MM/DD.  Give you a string, if it can only represent a legitimate date, satisfying either the format MM/DD/YY or YY/MM/DD format, then output the format "month date, year" format (see second example), otherwise output the date difference in both notations (see first example). Enter a time string in the format AA/BB/CC. Ensure that the AA/BB/CC satisfies at least one of the two notations.
样例
输入

02/07/19
19/02/07
输出

6047
February 7, 2019

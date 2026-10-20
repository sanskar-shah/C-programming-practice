# ATM Simulator in C 🏧

Hi! I'm 16 and I'm learning C. I made this ATM simulator to practice `switch` statements and loops. It runs in the terminal, and you can check your balance, deposit money, and withdraw money until you decide to exit.

## What it does

When you start the program, it asks for your starting balance. Then it shows a menu:

```
1. Check balance
2. Deposit
3. Withdraw
4. Exit
```

- **Check balance** shows how much money you have.
- **Deposit** adds money, but only if the amount is more than zero.
- **Withdraw** takes money out, but only if the amount is more than zero and not more than your balance.
- **Exit** says goodbye and closes the program.
- Anything else shows an "invalid option" message and the menu comes back.

The menu keeps showing up after every action until you choose Exit.

## What I learned

This project came from a few switch-case assignments I did, and I learned a lot from them.

**Switch statements**
- A `switch` only works with things like `int` and `char`, not strings or decimals.
- Case labels have to be constants, not variables.
- If you forget `break`, the code keeps running into the next cases. I made this mistake myself and now I never forget it.
- You can stack cases on purpose so they share the same code, like all the months with 31 days.
- `default` is really useful for handling wrong input.
- If you make a variable inside a case, you need to put the case inside `{ }`.

**Loops**
- A `do-while` loop is perfect for menus because it always runs at least once.
- `break` inside a switch only leaves the switch, not the loop.

**Input and output**
- `scanf` needs `&` before the variable.
- Writing `" %c"` with a space before it skips leftover newlines.
- `%lf` reads a `double` and `%.2f` prints it with two decimals.

**Logic and debugging**
- Two separate `if` statements are not the same as `if / else if / else`. My withdraw code showed an error but still took the money out, and chaining the conditions fixed it.
- Always check for division by zero.
- Code can compile fine and still have bugs, so testing different inputs really matters.

## Feedback

I'm still a beginner, so if you have any tips to make my code better, I'd love to hear them. Thanks for checking out my project!

What, what happened?
--------------------

Nothing here looks like the documentation on http://cowlark.com/cowgol!

Yes, that's correct.

What's happened is that while that version of Cowgol _worked_, it was way too
complicated; it was so large as to be unusable on the machines it was intended
for. While it was an interesting exercise, it was basically useless.

So, what I did was abandon it and start again using a drastically simpler
one-pass solution. Startlingly, this actually produced better code than the
complex version. (If you're interested, there's an epic 8-hour livecoding
session on Youtube of me porting it to produce 8080 code:
https://www.youtube.com/watch?v=iUarU8Fhvug) So, I'm focusing on that.

Cowgol 2.0 isn't (yet) self-hosting as I'm still sorting out some core logic,
and it doesn't have the smart linker (yet) which made Cowgol 1.0 so amazingly
efficient, but it's making good progress.

If you still want to try out Cowgol 1.0, then it's all archived in the
[oldcowgol](https://github.com/davidgiven/cowgol/tree/oldcowgol) branch on
Github.


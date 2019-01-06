#include <iostream>

struct Vector {
    /* float data */
    float x, y, z;
};

int main() {
    /* the best way to see offset */

    auto theOffset = (intptr_t) &((Vector*) nullptr) -> y;
    std::cout << theOffset << std::endl;

    /* x - 0, y - 4, z - 8 */

    return 0;
}

/* explanation */
/* that's the original look

 int offset = (int)&((Vector3*)nullPtr)->x

Let's start with the nullPtr.

nullPtr
We can think of this as a zero with a label on it that says "To be treated as a Pointer".
You might ask what type of pointer; if you look at the documentation it is a type all its own,
but for our purposes lets stick with this simple definition.
It is in brackets with the (Vector3*); so what is that?

(Vector3*)
This is C++ for cast the next thing to whatever type is written in the brackets.
So this will 'cast' the nullPtr to a Vector3. What the hell does that mean, you might say?
It means change the label attached to the nullPtr so it says 'To be treated as a Vector3'.
Vector3 can be thought of as a user defined type from the stuct on line 4.

((Vector3*)nullPtr)
So this mean a zero with a label that says 'To be treated as a Vector3'.
The brackets around it affect the 'order of operation',
and ensure that those two items are interpreted together first,
rather than the nullPtr being associated with the -> operator first.
Just like in maths... (2+3)*5, the 2+3 comes first to give 25,
whereas without brackets the 3*5 would come first to give 17.
(You probably new that, but just to be clear for all people.)

((Vector3*)nullPtr)->x
Next the 'order of operation' will apply the arrow operator between our 'zero' and the 'x'.
I think (I'm not dead sure) this operator does pointer arithmetic for us.
It expects a pointer to a data structure on its left,
and the name of a member of that data structure on its right.
The pointer is to the memory address of the data structure.
The name is used to look up in some table to get an offset value.
The two are added together to get the address of the member itself.
For example, if the x was at the 8th byte of the Vector3, and the struct itself was at address 12345,
then the x would be at address 12345+8 = 12353.
It's clearer with a class... each instantiation would have an address,
and each would have its 'x' member 8 bytes offset from that address.
That's how the compiler finds 'x', name+offset. So, the value returned by
the -> operator comes with a label (C++ type) that says "To be treated as a pointer".
But remember, that value is (our zero + the offset of x),
so it is just a value equal to the offset of x with a label that says "To be treated as a pointer".
If you tried to use it as a pointer it would point into some very low memory not belonging to our process;
but C++ is happy to hold a knife by the blade, so long as you don't say 'use knife' while it's doing it.

&((Vector3*)nullPtr)->x
Next in the 'order of operation' is the &.
I think you can see this as just changing the label so it says "To be treated as a memory address" ,
in stead of as a pointer. It is a subtle difference,
a bit like if I give my brother a letter for my mum.
He will look at the address, but then tell me to go post it myself.
If I give it to him later, when he is doing his shift at the post office,
he will look at the address, and then go deliver it for me.
The important thing is that we now have a number, not a pointer.

(int)&((Vector3*)nullPtr)->x
Then the cast to int changes the label on our number to say,
"To be treated as an int". I think if you trie to just cast the pointer directly to int
it would give you an int of the address where the pointer is stored, not where it points to.

int offset = (int)&((Vector3*)nullPtr)->x
Lastly we end up with a simple assignment of an int value to an int variable,
and we can print our offset using std::cout.

 done */
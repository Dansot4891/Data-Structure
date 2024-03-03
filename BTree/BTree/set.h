// FILE: set.h
// CLASS PROVIDED: Set<Item> (a container class for a set of items)
//
// TYPEDEF
//  typedef ______ Item
//    This is the data type of the items in the set.
//    It may be any of the C++ built-in types (int, char, etc.), or a class
//    with a default constructor, a copy constructor, an assignment operator, 
//    and the six comparison operators forming a total order.
//
// CONSTRUCTOR for the Set class:
//   Set( )
//     Postcondition: The set is empty.
//
// MODIFICATION MEMBER FUNCTIONS for the Set class:
//   void clear( )
//     Postcondition: The set is empty.
//
//  void insert(const Item& entry) 
//     Postcondition: If entry was already in the set, then the set is
//     unchanged; Otherwise, entry has been added to the set.
//
//   void remove(const Item& entry)
//     Postcondition: If target was in the set, then it has been removed
//     from the set; otherwise the set is unchanged.
//
// CONSTANT MEMBER FUNCTIONS for the Set class:
//   bool contains(const Item& entry) const
//     Postcondition: If target is in the set, then the return value is true;
//     otherwise the return value is false.
//
//   bool is_empty( ) const
//     Postcondition: If the set is empty, the the return value is true;
//     otherwise the return value is false.
//
// VALUE SEMANTICS for the Set class:
//   Assignments and the copy constructor may be used with Set objects.
//
// DYNAMIC MEMORY USAGE by the Set class:
//   If there is insufficient dynamic memory, then the following functions
//   call new_handler:  The constructors, insert, and the assignment
//   operator.

#ifndef SET_H
#define SET_H

#include <stdlib.h>   // Provides size_t

class Set
{
public:
	// TYPEDEF
	typedef double Item;
	// CONSTRUCTORS and DESTRUCTOR
	Set();
	Set(const Set& source);
	~Set() { clear(); }
	// MODIFICATION functions
	void operator =(const Set& source);
	void clear();
	void insert(const Item& entry);
	void remove(const Item& target);
	// CONSTANT functions
	bool contains(const Item& target) const;
	bool is_empty() const { return (data_count == 0); }
	// SUGGESTED FUNCTION FOR DEBUGGING
	void print(int indent) const;
private:
	// MEMBER CONSTANTS--make these smaller to debug, then change them back
	static const size_t MINIMUM = 1;
	static const size_t MAXIMUM = 2 * MINIMUM;
	// MEMBER VARIABLES
	size_t data_count;
	Item data[MAXIMUM + 1];
	size_t child_count;
	Set* subset[MAXIMUM + 2];
	// HELPER MEMBER FUNCTIONS
	bool is_leaf() const { return (child_count == 0); }
	void loose_insert(const Item& entry);
	void loose_remove(const Item& entry);
	void remove_biggest(Item& removed_entry);
	void fix_excess(size_t i);
	void fix_shortage(size_t i);
	void transfer_left(size_t i);
	void transfer_right(size_t i);
	void merge_with_next_subset(size_t i);
};

#endif
// FILE: item.h
// PROVIDES: A toolkit of template functions for manipulating items.
//
// TEMPLATES FUNCTIONS in the linked list toolkit:
//   template <class Item>
//   Item maximal(Item a, Item b)
//     Postcondition: Returns the larger of a and b.
//     Note: Item may be any type with the > operator and a copy constructor.
//
//   template <class Item>
//   void swap(Item& x, Item& y)
//     Postcondition: The values of x and y have been interchanged, 
//     so that y now has the original value of x, and vice versa.
//     Note: Item may be any type with an assignment operator
//     and a default constructor.
//
//   template <class Item, class SizeType>
//   size_t index_of_maximal(Item data[ ], SizeType n)
//     Precondition: data is an array with at least n items, and n>0.
//     Postcondition: The return value is the index of a maximal
//     item from data[0] .. data[n-1].
//     Note: Item may be any type with the < operator defined.
//     SizeType may be any of the integer or const integer types.
//
//   template <class Item, class SizeType>
//   void ordered_insert(Item data[ ], SizeType n, Item entry)
//     Precondition: data is a partially filled array containing n
//     items sorted from small to large. The array size is large
//     enough to hold at least one more item.
//     Postcondition: data is a partially filled array containing the
//     n original items plus the new entry. These items are still
//     sorted from small to large.
//     Note: Item may be any type with an assignment operator and 
//     the >= operator defined. SizeType may be any of the integer 
//     or const integer types.
//
//   template <class Item, class SizeType>
//   size_t first_ge(const Item data[ ], SizeType n, const Item& entry)
//     Precondition: data is a partially filled array containing n
//     items sorted from small to large.
//     Postcondition: The return value i is the first location such that
//     data[i] >= entry. If there is no such location, then the return
//     value is n.
//     Note: Item may be any type with the >= operator defined. SizeType may
//     be any of the integer or const integer types.
//
//   template <class Item, class SizeType>
//   void attach_item(Item data[ ], SizeType& n, const Item& entry)
//     Precondition: data is a partially filled array containing n items. The
//     array size is large enough to hold at least one more item.
//     Postcondition: data is a partially filled array containing the
//     n original items plus the new entry at the end. The value of n has
//     been increased by one.
//     Note: Item may be any type with an assignment operator. SizeType may be
//     any of the integer or const integer types.
//
//   template <class Item, class IndexType, class SizeType>
//   void insert_item(Item data[ ], IndexType i, SizeType& n, Item entry)
//     Precondition: data is a partially filled array containing n items,
//     0 <= i < n, and the array size is large enough to hold at least one
//     more item.
//     Postcondition: data is a partially filled array containing the
//     n original items plus the new entry. The new entry appears at data[i],
//     and the original entries from data[i] onward have all been shifted up
//     one spot. The value of n has also been increased by one.
//     Note: Item may be any type with an assignment operator. SizeType and
//     IndexType may be any of the integer or const integer types.
//
//   template <class Item, class SizeType>
//   void detach_item(Item data[ ], SizeType& n, Item& entry)
//     Precondition: data is a partially filled array containing n items, and
//     n > 0.
//     Postcondition: n has been decremented by one, so that data can now be
//     considered a partially filled array with one less item. A copy of this
//     removed item is now in the parameter entry.
//     Note: Item may be any type with an assignment operator. SizeType may be
//     any of the integer or const integer types.
//
//   template <class Item, class IndexType, class SizeType>
//   void delete_item(Item data[ ], IndexType i, SizeType& n, Item& entry)
//     Precondition: data is a partially filled array containing n items, and
//     n > 0.
//     Postcondition: The item that was originally at data[i] has been removed
//     from the partially filled array by shifting data[i+1]... down one spot.
//     The value of n has been decremented by one, so that data can now be
//     considered a partially filled array with one less item. A copy of the
//     removed item is now in the parameter entry.
//     Note: Item may be any type with an assignment operator. SizeType and
//     IndexType may be any of the integer or const integer types.
//  
//   template <class Item, class SizeType>
//   void merge(Item data1[ ], SizeType& n1, Item data2[ ], SizeType& n2)
//     Precondition: data1 is a partially filled array containing n1 items,
//     and data2 is a partially filled array containing n2 items.
//     The array data1 also has room for n2 more items.
//     Postcondition: All items have been copied from data2 to the end of
//     data1. The value of n1 has been increased by n2, and n2 has been set
//     to zero. 
//     Note: Item may be any type with an assignment operator. SizeType
//     may be any of the integer or const integer types.
//
//   template <class Item, class SizeType>
//   void split(Item data1[ ], SizeType& n1, Item data2[ ], SizeType& n2)
//     Precondition: data1 is a partially filled array containing n1 items,
//     and data2 is a partially filled array containing n2 items. 
//     The array data2 also has room for n1/2 more items.
//     Postcondition: The final n1/2 items have been copied from data1 to the
//     end of data2. The value of n2 has been increased by n1/2, and n1 has
//     been reduced by this same amount.
//     Note: Item may be any type with an assignment operator. SizeType
//     may be any of the integer or const integer types.

#ifndef ITEMS_H  // Prevent duplicate definition
#define ITEMS_H
#include <stdlib.h> // Provides size_t type

	// FUNCTIONS for the item toolkit
template <class Item>
Item maximal(Item a, Item b);

template <class Item>
void swap(Item& x, Item& y);

template <class Item, class SizeType>
size_t index_of_maximal(Item data[], SizeType n);

template <class Item, class SizeType>
void ordered_insert(Item data[], SizeType n, Item entry);

template <class Item, class SizeType>
void attach_item(Item data[], SizeType& n, const Item& entry);

template <class Item, class IndexType, class SizeType>
void insert_item(Item data[], IndexType i, SizeType& n, Item entry);

template <class Item, class SizeType>
void detach_item(Item data[], SizeType& n, Item& entry);

template <class Item, class IndexType, class SizeType>
void delete_item(Item data[], IndexType i, SizeType& n, Item& entry);

template <class Item, class SizeType>
void merge(Item data1[], SizeType& n1, Item data2[], SizeType& n2);

template <class Item, class SizeType>
void split(Item data1[], SizeType& n1, Item data2[], SizeType& n2);

#include "item_template.h" // Include the implementations    
#endif
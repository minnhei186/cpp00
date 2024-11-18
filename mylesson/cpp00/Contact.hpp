#ifndef CONTCT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact;

class Contact 
{
	public:
		Contact();
		Contact(const Contact&);
		virtual ~Contact();
		contact &operator=(const Contact& op);

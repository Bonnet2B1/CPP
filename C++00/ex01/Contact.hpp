#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
public:
	void set_first_name(std::string s);
	void set_last_name(std::string s);
	void set_nickname(std::string s);
	void set_phone_number(std::string s);
	void set_darkest_secret(std::string s);
	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_phone_number(void) const;
	std::string get_darkest_secret(void) const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif // CONTACT_HPP

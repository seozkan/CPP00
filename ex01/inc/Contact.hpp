/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:11:21 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/22 21:40:55 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>

class Contact
{
  private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;

  public:
	Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret)
	{
		this->FirstName = firstName;
		this->LastName = lastName;
		this->NickName = nickName;
		this->PhoneNumber = phoneNumber;
		this->DarkestSecret = darkestSecret;
	};

	void getContactInfo(int index);
	void getContactDetail();
	std::string truncateString(std::string str, std::string::size_type maxlen);
};

#endif
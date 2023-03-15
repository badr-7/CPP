/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   badr.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:11:20 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 10:29:39 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class badr {
  int a;
  public :
    badr(void);
    ~badr(void);
    
    void func_a();
    void set_a(int i){
      a = i;
    };
    int get_a(){
      return a;
    };
    void func_b();
    void wich_one(); 
};

class melhous : protected badr{
  public:
    void set(int i){
      this->set_a(i);
    };
    int get(){
      return(this->get_a());
    }
};
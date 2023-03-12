
cpp0 :
			make -C CPP00/ex00
			make -C CPP00/ex01

cpp1 :
			make -C CPP01/ex00
			make -C CPP01/ex01
			make -C CPP01/ex02
			make -C CPP01/ex03
			make -C CPP01/ex04
			make -C CPP01/ex05
			make -C CPP01/ex06

cpp2 :
			make -C CPP02/ex00
			make -C CPP02/ex01
			make -C CPP02/ex02

all :	cpp0 cpp1 cpp2

fclean :	
			make fclean -C CPP00/ex00
			make fclean -C CPP00/ex01
			make fclean -C CPP01/ex00
			make fclean -C CPP01/ex01
			make fclean -C CPP01/ex02
			make fclean -C CPP01/ex03
			make fclean -C CPP01/ex04
			make fclean -C CPP01/ex05
			make fclean -C CPP01/ex06
			make fclean -C CPP02/ex00
			make fclean -C CPP02/ex01
			make fclean -C CPP02/ex02
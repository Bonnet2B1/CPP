#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &rhs) {
	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException("Bureaucrat's grade is too low to execute the form");
	std::string filename = this->_target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	outfile << "            .        +          .      .          ." << std::endl;
	outfile << "     .            _        .                    ." << std::endl;
	outfile << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	outfile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	outfile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	outfile << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
	outfile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	outfile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
	outfile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
	outfile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
	outfile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
	outfile << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
	outfile << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
	outfile << "                    \\::.  :\\/:'  /              +" << std::endl;
	outfile << "   .                 `.:.  /:'  }      ." << std::endl;
	outfile << "           .           ):_(:;   \\           ." << std::endl;
	outfile << "                      /:. _/ ,  |" << std::endl;
	outfile << "                   . (|::.     ,`                  ." << std::endl;
	outfile << "     .                |::.    {\\" << std::endl;
	outfile << "                      |::.\\  \\ `." << std::endl;
	outfile << "                      |:::(\\    |" << std::endl;
	outfile << "              O       |:::/{ }  |                  (o" << std::endl;
	outfile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	outfile << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	outfile << "      ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~" << std::endl;
	outfile << std::endl;
	outfile << "            .        +          .      .          ." << std::endl;
	outfile << "     .            _        .                    ." << std::endl;
	outfile << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	outfile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	outfile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	outfile << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
	outfile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	outfile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
	outfile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
	outfile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
	outfile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
	outfile << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
	outfile << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
	outfile << "                    \\::.  :\\/:'  /              +" << std::endl;
	outfile << "   .                 `.:.  /:'  }      ." << std::endl;
	outfile << "           .           ):_(:;   \\           ." << std::endl;
	outfile << "                      /:. _/ ,  |" << std::endl;
	outfile << "                   . (|::.     ,`                  ." << std::endl;
	outfile << "     .                |::.    {\\" << std::endl;
	outfile << "                      |::.\\  \\ `." << std::endl;
	outfile << "                      |:::(\\    |" << std::endl;
	outfile << "              O       |:::/{ }  |                  (o" << std::endl;
	outfile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	outfile << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	outfile << "      ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~" << std::endl;
	outfile.close();
}
